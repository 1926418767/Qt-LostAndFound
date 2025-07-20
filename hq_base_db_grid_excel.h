/**************************************************************************************************
 ** File name:      hq_base_db_grid_excel.h (HQ_Base_DB_Grid_Excel)
 ** Created by:     Henrick.Nie at 2023-7-10
 ** Used for:       Import/export the grid data from/to the excel file.
 **************************************************************************************************/
#ifndef HQ_BASE_DB_GRID_EXCEL_H
#define HQ_BASE_DB_GRID_EXCEL_H

//#include "qt-hq_base_global.h"
#include <QFile>
#include <QFileDialog>
#include <QDesktopServices>
#include <QRegularExpression>
#include <QTableWidget>
#include <QMessageBox>

class HQ_Base_DB_Grid_Excel
{
public:
    static bool f_SaveToExcel(QTableWidget *oGrid,
                              const bool &bAskBeforeDoing, const bool &bAskBeforeOpenning, QString *sFilePath = nullptr,
                              QString *sErr = nullptr, const QString &sSheetName = QString());
    static bool f_SaveToExcel(const QString &sExcelHtmlModel, QTableWidget *oGrid,
                              const bool &bAskBeforeDoing, const bool &bAskBeforeOpenning, QString *sFilePath = nullptr,
                              QString *sErr = nullptr, const QString &sSheetName = QString());

    static bool f_GetFromExcel_AsXML(QString &sXML, QString *sErr = nullptr);
    static bool f_GetFromExcel(const QString &sModel, QJsonArray &oArrRows, const bool &bFirstRowIsHeader = false, QString *sErr = nullptr);
    static bool f_GetFromExcel(QTableWidget *oGrid, const bool &bFirstRowIsHeader = false, QString *sErr = nullptr);
    static bool f_SetFirstRowToHeader(QTableWidget *oGrid, const bool &bSetHeader, QString *sErr = nullptr);

private:
    static bool    f_Grid_GetDataAsHtml(QTableWidget *oGrid, QString &sTableHtml, QString *sErr = nullptr);
    static QString f_Grid_GetAlignByEnum(const int &iAlign);
    static bool f_Excel_GetDataAsHtml(QString &sTableHtml, QString *sErr = nullptr);
};

#endif // HQ_BASE_DB_GRID_EXCEL_H
