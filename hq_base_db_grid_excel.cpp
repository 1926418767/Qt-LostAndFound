#include "hq_base_db_grid_excel.h"

/**================================================================================================
 ** Converts the grid data as the html table string, output it in the parameter 'sTableHtml'.
 ** Returns true on successed, otherwise returns false.
 ** ---------------------------------
 ** Format:
 **
 **   <table>
 **    <col width="80" align="center" />
 **    <col width="50" align="right" />
 **    <col width="100" />
 **    <col width="200" />
 **    <tr>
 **     <td >f1</td>
 **     <td >f2</td>
 **     <td >f3</td>
 **     <td >f4</td>
 **    </tr>
 **    <tr>
 **     <td >1</td>
 **     <td >2</td>
 **     <td >3</td>
 **     <td >4</td>
 **    </tr>
 **    <tr>
 **     <td >a</td>
 **     <td >b</td>
 **     <td >c</td>
 **     <td >d</td>
 **    </tr>
 **    <tr>
 **     <td >cwd</td>
 **     <td >qwe</td>
 **     <td >xcz</td>
 **     <td >excz</td>
 **    </tr>
 **   </table>
 **
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_Grid_GetDataAsHtml(QTableWidget *oGrid, QString &sTableHtml, QString *sErr)
{
    sTableHtml.clear();

    if (nullptr == oGrid)
    {
        HQ_Base::f_Pointer_SetValue(sErr, QString("The grid is nullptr."));
        return false;
    }

    //Indent
    QString sTable_col, sTable_Rows_tr, sIndent_table = "  ", sIndent_col = "   ", sIndent_tr = "   ", sIndent_td = "    ";

    //Headers and col info(<col/>)
    sTable_Rows_tr.append(sIndent_tr + "<tr>\n");
    QString sHeader_td;
    for (int iCol = 0; iCol < oGrid->columnCount(); ++iCol)
    {
        //width
        QString sCol_Width = QString::number(oGrid->columnWidth(iCol));

        //align
        QTableWidgetItem *item = oGrid->horizontalHeaderItem(iCol);
        int iAlign = (nullptr == item) ? 0 : item->textAlignment();
        QString sCol_Align = f_Grid_GetAlignByEnum(iAlign);
        sTable_col.append(sIndent_col + "<col width=\"" + sCol_Width + "\" align=\"" + sCol_Align + "\" />\n");

        //header row
        sHeader_td.append(sIndent_td + "<td align=\"center\">" + oGrid->horizontalHeaderItem(iCol)->text() + "</td>\n");
    }
    sTable_Rows_tr.append(sHeader_td);
    sTable_Rows_tr.append(sIndent_tr + "</tr>\n");

    //data(<tr/><td/>)
    for (int iRow = 0; iRow < oGrid->rowCount(); ++iRow)
    {
        sTable_Rows_tr.append(sIndent_tr + "<tr>\n");

        QString sRows_td;
        for (int iCol = 0; iCol < oGrid->columnCount(); ++iCol)
        {
            QTableWidgetItem *item = oGrid->item(iRow, iCol);
            QString sText;
            if (nullptr != item)
            {
                sText = item->text();
            }
            sRows_td.append(sIndent_td + "<td>" + sText + "</td>\n");
        }
        sTable_Rows_tr.append(sRows_td);

        sTable_Rows_tr.append(sIndent_tr + "</tr>\n");
    }

    //table
    sTableHtml.append(sIndent_table + "<table>\n");
    sTableHtml.append(sTable_col);
    sTableHtml.append(sTable_Rows_tr);
    sTableHtml.append(sIndent_table + "</table>\n");

    HQ_Base::f_Pointer_SetValue(sErr, QString());
    return true;
}
QString HQ_Base_DB_Grid_Excel::f_Grid_GetAlignByEnum(const int &iAlign)
{
    quint16 iHAlign = iAlign | 0x000F;
    QString sAlign;
    switch (iHAlign) {
    case 1:
        sAlign = "left";
        break;
    case 2:
        sAlign = "right";
        break;
    case 4:
        sAlign = "center";
        break;
    default:
        break;
    }
    return sAlign;
}
/**================================================================================================
 ** Save the grid data to excel.
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_SaveToExcel(QTableWidget *oGrid,
                                          const bool &bAskBeforeDoing, const bool &bAskBeforeOpenning,
                                          QString *sFilePath, QString *sErr, const QString &sSheetName)
{
    try
    {
        //Get the model.
        QString sFile = "excel_html.md";
        QFile f(sFile);
        if (!f.exists())
        {
            throw QString("Can not find the model file.");
        }

        if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
        {
            if (f.isOpen())
            {
                f.close();
            }

            throw QString("The model file openning failed.");
        }

        QString sExcelHtml = f.readAll();

        if (f.isOpen())
        {
            f.close();
        }

        return f_SaveToExcel(sExcelHtml, oGrid, bAskBeforeDoing, bAskBeforeOpenning, sFilePath, sErr, sSheetName);
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
bool HQ_Base_DB_Grid_Excel::f_SaveToExcel(const QString &sExcelHtmlModel, QTableWidget *oGrid,
                                          const bool &bAskBeforeDoing, const bool &bAskBeforeOpenning,
                                          QString *sFilePath, QString *sErr, const QString &sSheetName)
{
    try
    {
        HQ_Base::f_Pointer_SetValue(sFilePath, QString());
        HQ_Base::f_Pointer_SetValue(sErr, QString());

        QString sExcelHtml = sExcelHtmlModel;
        if (sExcelHtml.isEmpty())
        {
            throw QString("The excel model lost.");
        }

        if (nullptr == oGrid)
        {
            throw QString("The grid does not exist.");
        }

        QString sMsg;

        //Ask user before doing.
        if (bAskBeforeDoing)
        {
            sMsg = "Export the grid data to the excel. Continue?";
            if(QMessageBox::question(nullptr, "", sMsg, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) != QMessageBox::Yes)
            {
                return false;
            }
        }

        //Select the saving path.
        QString sFile_Saved = QFileDialog::getSaveFileName(nullptr, "Select the saving path.",
                                                           QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
                                                           "Excel (*.xlsx);;Excel 97-2003 (*.xls)");
        if (sFile_Saved.isEmpty())
        {
            return false;//If the user canceled, do nothing.
        }

        //If the target file is not writable.
        QFile f_Save(sFile_Saved);
        if (f_Save.isOpen() || !f_Save.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            if (f_Save.isOpen())
            {
                f_Save.close();
            }

            throw QString("The target file is using. Perhaps it is already openned by an other program.");
        }

        //Sheet name.
        if (!sSheetName.isEmpty())
        {
            sExcelHtml.replace(QRegularExpression("(?<=<x:Name>)[\\s\\S]*(?=</x:Name>)"), sSheetName);
        }

        //Html_table.
        QString sTableHtml;
        if (!f_Grid_GetDataAsHtml(oGrid, sTableHtml, sErr))
        {
            return false;
        }
        sExcelHtml.replace(QRegularExpression("<table>[\\s\\S]*</table>"), sTableHtml);

        //Save to file.
        qint64 i = f_Save.write(sExcelHtml.toStdString().c_str());
        if (f_Save.isOpen())
        {
            f_Save.close();
        }

        if (i < 0)
        {
            throw QString("The file writting failed.");
        }

        //Ask before openning.
        if (bAskBeforeOpenning)
        {
            sMsg = "The excel file exporting successed, open it?\n";
            if(QMessageBox::question(nullptr, "", sMsg + sFile_Saved, QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes)
            {
                //Open the file.
                QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(sFile_Saved)));
            }
        }

        HQ_Base::f_Pointer_SetValue(sFilePath, sFile_Saved);
        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sFilePath, QString());
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
/**================================================================================================
 ** Import the excel data to the html string, and output into the parameter 'sTableHtml'.
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_Excel_GetDataAsHtml(QString &sTableHtml, QString *sErr)
{
    try
    {
        sTableHtml.clear();
        HQ_Base::f_Pointer_SetValue(sErr, QString());

        QString sFileName = QFileDialog::getOpenFileName(nullptr, "Select the saving path.",
                                                         QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
                                                         "Excel (*.xlsx);;Excel 97-2003 (*.xls)");
        if (sFileName.isEmpty())
        {
            return false;//If the user canceled, do nothing.
        }

        QFile f(sFileName);
        if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
        {
            if (f.isOpen())
            {
                f.close();
            }

            throw QString("The excel file openning failed.");
        }

        QString sExcelHtml = f.readAll();

        if (f.isOpen())
        {
            f.close();
        }

        QRegularExpressionMatch match = QRegularExpression("<table[^>]*>[\\s\\S]*</table>").match(sExcelHtml);
        if (!match.hasMatch())
        {
            throw QString("The excel file format is error.");
        }

        sTableHtml = match.captured();
        sTableHtml.replace(QRegularExpression("\\bx:[^ <>]+\\b"), "");//remove 'x:str' or 'x:num', 'x:...'.
        sTableHtml.replace(QRegularExpression("<col[^>]*/>"), "");//remove '<col...>'.
        sTableHtml.replace(QRegularExpression("<!\\[if[^>]*\\]>[\\S\\s]*<!\\[endif\\]>"), "");//remove '<![if]>...<![endif]>'.

        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
/**================================================================================================
 ** Import the excel data to the xml string, and output into the parameter 'sXML'.
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_GetFromExcel_AsXML(QString &sXML, QString *sErr)
{
    try
    {
        sXML.clear();

        //Import the excel data into the variable 'sTableHtml' as html.
        QString sTableHtml;
        if (!f_Excel_GetDataAsHtml(sTableHtml, sErr))
        {
            return false;
        }

        QDomDocument doc;
        QString sErrMsg;
        int iRow, iCol;
        if (!doc.setContent(sTableHtml, &sErrMsg, &iRow, &iCol))
        {
            throw sErrMsg + ", the position in excel file is: row = " + QString::number(iRow)
                + ", col = " + QString::number(iCol) + ".";
        }

        //Get '<table>...</table>', and remove the nodes that is not '<tr/>'.
        QDomNode node_Table = doc.firstChild();
        int i = 0;
        while (i < node_Table.childNodes().size())
        {
            QDomNode node = node_Table.childNodes().at(i);
            if (node.nodeName() == "tr")
            {
                ++i;
            }
            else
            {
                node_Table.removeChild(node);
            }
        }

        doc.replaceChild(node_Table, doc.firstChild());
        sXML = doc.toString();

        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
/**================================================================================================
 ** Import the data from the excel file to the json array by the given model.
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_GetFromExcel(const QString &sModel, QJsonArray &oArrRows, const bool &bFirstRowIsHeader, QString *sErr)
{
    try
    {
        oArrRows = QJsonArray();

        //Import the excel data into the variable 'sXML' as the xml string.
        QString sXML;
        if (!f_GetFromExcel_AsXML(sXML, sErr))
        {
            return false;
        }

        QDomDocument doc;
        QString sErrMsg;
        int iRow, iCol;
        if (!doc.setContent(sXML, &sErrMsg, &iRow, &iCol))
        {
            throw sErrMsg + ", the position in excel file is: row = " + QString::number(iRow)
                + ", col = " + QString::number(iCol) + ".";
        }
        QDomNode node_Table = doc.firstChild();

        //Get the cols info from the model.
        QJsonObject oJsonModel = HQ_Base::f_Json_StringToJsonObj(sModel);
        if (oJsonModel.isEmpty())
        {
            throw QString("The given model string can not convert to json object.");
        }
        QStringList sColList = oJsonModel.value("Cols_Visible").toString().split("|", QString::SkipEmptyParts);

        //If it has the header, remove the first node.
        if (bFirstRowIsHeader)
        {
            node_Table.removeChild(node_Table.firstChild());
        }

        //tr (rows)
        int iTrCount = node_Table.childNodes().size();
        for (int i_tr = 0; i_tr < iTrCount; ++i_tr)
        {
            QDomNode node_tr = node_Table.childNodes().at(i_tr);
            QJsonObject oJsonRow;

            //td (cells)
            for (int iCol = 0; iCol < sColList.size(); ++iCol)
            {
                QString sColName = sColList.at(iCol);
                QString sValue;

                if (iCol < node_tr.childNodes().size())
                {
                    QDomElement el_td = node_tr.childNodes().at(iCol).toElement();
                    sValue = el_td.text();
                }

                oJsonRow.insert(sColName, sValue);
            }

            oArrRows.append(oJsonRow);
        }

        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
/**================================================================================================
 ** Import the data from the excel file to the grid.
 **===============================================================================================*/
bool HQ_Base_DB_Grid_Excel::f_GetFromExcel(QTableWidget *oGrid, const bool &bFirstRowIsHeader, QString *sErr)
{
    try
    {
        //Import the excel data into the variable 'sXML' as the xml string.
        QString sXML;
        if (!f_GetFromExcel_AsXML(sXML, sErr))
        {
            return false;
        }

        QDomDocument doc;
        QString sErrMsg;
        int iRow, iCol;
        if (!doc.setContent(sXML, &sErrMsg, &iRow, &iCol))
        {
            throw sErrMsg + ", the position in excel file is: row = " + QString::number(iRow)
                + ", col = " + QString::number(iCol) + ".";
        }
        QDomNode node_Table = doc.firstChild();

        //tr
        int iTrCount = node_Table.childNodes().size();
        int iRowCount = bFirstRowIsHeader ? iTrCount - 1 : iTrCount;
        oGrid->setRowCount(iRowCount);
        for (int i_tr = 0; i_tr < iTrCount; ++i_tr)
        {
            QDomNode node_tr = node_Table.childNodes().at(i_tr);

            //td
            if (oGrid->columnCount() < node_tr.childNodes().size())
            {
                oGrid->setColumnCount(node_tr.childNodes().size());
            }

            for (int i_td = 0; i_td < node_tr.childNodes().size(); ++i_td)
            {
                QDomElement el_td = node_tr.childNodes().at(i_td).toElement();
                QTableWidgetItem *item = new QTableWidgetItem(el_td.text());

                if (bFirstRowIsHeader)
                {
                    if (i_tr == 0)
                    {
                        oGrid->setHorizontalHeaderItem(i_td, item);
                    }
                    else
                    {
                        oGrid->setItem(i_tr - 1, i_td, item);
                    }
                }
                else
                {
                    oGrid->setItem(i_tr, i_td, item);
                }
            }
        }

        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
bool HQ_Base_DB_Grid_Excel::f_SetFirstRowToHeader(QTableWidget *oGrid, const bool &bSetHeader, QString *sErr)
{
    try
    {
        //made header
        if (bSetHeader)
        {
            if (oGrid->rowCount() < 1)
            {
                throw QString("Operation canceled. For the grid row count is lesser than 1.");
            }

            for (int iCol = 0; iCol < oGrid->columnCount(); ++iCol)
            {
                QTableWidgetItem *item = oGrid->horizontalHeaderItem(iCol);
                if (nullptr == item)
                {
                    item = new QTableWidgetItem;
                }

                QString sFirstRowCellText;
                if (nullptr != oGrid->item(0, iCol))
                {
                    sFirstRowCellText = oGrid->item(0, iCol)->text();
                }

                item->setText(sFirstRowCellText);
                oGrid->setHorizontalHeaderItem(iCol, item);
                delete oGrid->item(0, iCol);
            }

            oGrid->removeRow(0);
        }
        //remove header
        else
        {
            oGrid->insertRow(0);

            for (int iCol = 0; iCol < oGrid->columnCount(); ++iCol)
            {
                QTableWidgetItem *item = oGrid->horizontalHeaderItem(iCol);
                if (nullptr == item)
                {
                    item = new QTableWidgetItem;
                }
                QString sText = item->text();

                item->setText(QString::number(iCol));
                oGrid->setHorizontalHeaderItem(iCol, item);

                item = new QTableWidgetItem(sText);
                oGrid->setItem(0, iCol, item);
            }
        }

        HQ_Base::f_Pointer_SetValue(sErr, QString());
        return true;
    }
    catch (QString sExceptionMsg)
    {
        HQ_Base::f_Pointer_SetValue(sErr, sExceptionMsg);
        return false;
    }
}
