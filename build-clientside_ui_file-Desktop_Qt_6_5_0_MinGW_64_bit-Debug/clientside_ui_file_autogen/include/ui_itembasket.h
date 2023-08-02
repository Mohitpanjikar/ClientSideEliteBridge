/********************************************************************************
** Form generated from reading UI file 'itembasket.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMBASKET_H
#define UI_ITEMBASKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemBasket
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLineEdit *lineEdit_ID;
    QLabel *label_3;
    QLineEdit *lineEdit_Value_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Refresh;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ItemBasket)
    {
        if (ItemBasket->objectName().isEmpty())
            ItemBasket->setObjectName("ItemBasket");
        ItemBasket->resize(554, 391);
        gridLayout_2 = new QGridLayout(ItemBasket);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(ItemBasket);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Variable Small Light\";\n"
"color: Black;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        tableWidget = new QTableWidget(ItemBasket);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 2);

        label_2 = new QLabel(ItemBasket);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 300 10pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
""));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_ID = new QLineEdit(ItemBasket);
        lineEdit_ID->setObjectName("lineEdit_ID");

        gridLayout_2->addWidget(lineEdit_ID, 2, 1, 1, 1);

        label_3 = new QLabel(ItemBasket);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 300 10pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
""));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        lineEdit_Value_2 = new QLineEdit(ItemBasket);
        lineEdit_Value_2->setObjectName("lineEdit_Value_2");

        gridLayout_2->addWidget(lineEdit_Value_2, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(ItemBasket);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
"background-color:#7FFFD4 ;"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(ItemBasket);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #66FF99;\n"
"color: black;\n"
"font: 300 10pt \"Segoe UI Variable Small Light\";\n"
""));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        Refresh = new QPushButton(ItemBasket);
        Refresh->setObjectName("Refresh");
        Refresh->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"color: Black;\n"
"background-color:#EE204D;"));

        gridLayout->addWidget(Refresh, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(ItemBasket);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Segoe UI Variable Small Light\";\n"
"Color:Black;\n"
"background-color:#7FFFD4 ;"));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 2);


        retranslateUi(ItemBasket);

        QMetaObject::connectSlotsByName(ItemBasket);
    } // setupUi

    void retranslateUi(QDialog *ItemBasket)
    {
        ItemBasket->setWindowTitle(QCoreApplication::translate("ItemBasket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ItemBasket", "<html><head/><body><p align=\"center\">Withdraw : Item Basket : Choose Function Below</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ItemBasket", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ItemBasket", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ItemBasket", "Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ItemBasket", "Alias", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ItemBasket", "Issue Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ItemBasket", "Supplier", nullptr));
        label_2->setText(QCoreApplication::translate("ItemBasket", " Item ID", nullptr));
        label_3->setText(QCoreApplication::translate("ItemBasket", " Withdraw Count", nullptr));
        pushButton->setText(QCoreApplication::translate("ItemBasket", "Add Another Item", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ItemBasket", "Withdraw", nullptr));
        Refresh->setText(QCoreApplication::translate("ItemBasket", "Refresh Data", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ItemBasket", "Log Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemBasket: public Ui_ItemBasket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMBASKET_H
