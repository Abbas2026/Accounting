#ifndef STYLES_H
#define STYLES_H

#include <QString>


const QString baseStyle = "QPushButton { color: black; border: none;font: 16pt; border: none;background-color: #45aef5 ; }"
                          "QPushButton:hover { color: #c97940; }";

const QString table_saleslist =
    "QTableView {"
    "    background-color: #1e2026;"
    "    color: white;"
    "    font-family: Arial, sans-serif;"
    "    font-size: 14px;"
    "    border: none;"
    "    gridline-color: #34495e;"
    "}"
    "QHeaderView::section {"
    "    background-color: #4c505b;"
    "    color: white;"
    "    font-weight: bold;"
    "    font-size: 16px;"
    "    padding: 8px;"
    "    border: none;"
    "}"
    "QTableView::item {"
    "    background-color: #1e2026;"
    "    border: none;"
    "    padding: 9px;"
    "    font-size: 14px;"
    "}"
    "QTableView::item:selected {"
    "    color: white;"
    "    border: none;"
                                    "}";

#endif // STYLES_H
