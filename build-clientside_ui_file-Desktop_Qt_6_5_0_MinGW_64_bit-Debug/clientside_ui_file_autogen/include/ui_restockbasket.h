/********************************************************************************
** Form generated from reading UI file 'restockbasket.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOCKBASKET_H
#define UI_RESTOCKBASKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RestockBasket
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *RestockBasket)
    {
        if (RestockBasket->objectName().isEmpty())
            RestockBasket->setObjectName("RestockBasket");
        RestockBasket->resize(641, 371);
        gridLayout = new QGridLayout(RestockBasket);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RestockBasket);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Variable Small Light\";\n"
"color: Black;"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        tableWidget = new QTableWidget(RestockBasket);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable Display")});
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(623, 0));
        tableWidget->setMaximumSize(QSize(623, 16777215));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);

        label_2 = new QLabel(RestockBasket);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
""));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(RestockBasket);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
""));

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        lineEdit_2 = new QLineEdit(RestockBasket);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(RestockBasket);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
"background-color:#7FFFD4 ;"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(RestockBasket);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #66FF99;\n"
"color: black;\n"
"font: 300 10pt \"Segoe UI Variable Small Light\";\n"
""));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(RestockBasket);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"color: Black;\n"
"background-color:#EE204D;"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(RestockBasket);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
"background-color:#7FFFD4 ;"));

        horizontalLayout_3->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 3);

        lineEdit = new QLineEdit(RestockBasket);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 2, 1, 1);


        retranslateUi(RestockBasket);

        QMetaObject::connectSlotsByName(RestockBasket);
    } // setupUi

    void retranslateUi(QDialog *RestockBasket)
    {
        RestockBasket->setWindowTitle(QCoreApplication::translate("RestockBasket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RestockBasket", "<html><head/><body><p align=\"center\">Restock : Item Basket : Choose Function Below</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RestockBasket", "No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RestockBasket", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RestockBasket", "Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RestockBasket", "Issue Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RestockBasket", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("RestockBasket", "Item ID", nullptr));
        label_3->setText(QCoreApplication::translate("RestockBasket", "Restock Count", nullptr));
        pushButton->setText(QCoreApplication::translate("RestockBasket", "Add Another Item", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RestockBasket", "Restock", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RestockBasket", "Main Menu", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RestockBasket", "Log  Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestockBasket: public Ui_RestockBasket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOCKBASKET_H
