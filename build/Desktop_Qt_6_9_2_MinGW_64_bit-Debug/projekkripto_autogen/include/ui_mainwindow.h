/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButtonCaesar;
    QPushButton *pushButtonViginere;
    QLabel *labelChoice;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonXor;
    QPushButton *pushButtonBlock;
    QWidget *page_5;
    QLineEdit *lineOutputBlock;
    QPushButton *pushButtonBlocDecrypt;
    QLabel *label_13;
    QLineEdit *lineEditInputBlock;
    QPushButton *pushButtonBackBlock;
    QPushButton *pushButtonBlockEncrypt;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEditInputBlockKey;
    QWidget *page_4;
    QPushButton *pushButtonXorEncrypt;
    QPushButton *pushButtonXorDecrypt;
    QLineEdit *lineEditInputXor;
    QPushButton *pushButtonBackXor;
    QLineEdit *lineEditInputXor2;
    QLineEdit *lineOutputXor;
    QLabel *label_12;
    QWidget *page_2;
    QLineEdit *lineEditInput;
    QLineEdit *lineEditShift;
    QPushButton *pushButtonEncrypt;
    QPushButton *pushButtonBack;
    QLineEdit *lineOutputCaesar;
    QLabel *label_10;
    QWidget *page_3;
    QPushButton *pushButtonBackViginere;
    QLineEdit *lineEditInputViginere;
    QLineEdit *lineEditInputViginere2;
    QPushButton *pushButtonEncryptViginere;
    QPushButton *pushButtonDecryptViginere;
    QLineEdit *lineOutputViginere;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, -10, 800, 550));
        page = new QWidget();
        page->setObjectName("page");
        pushButtonCaesar = new QPushButton(page);
        pushButtonCaesar->setObjectName("pushButtonCaesar");
        pushButtonCaesar->setGeometry(QRect(180, 110, 200, 40));
        pushButtonViginere = new QPushButton(page);
        pushButtonViginere->setObjectName("pushButtonViginere");
        pushButtonViginere->setGeometry(QRect(410, 110, 200, 40));
        labelChoice = new QLabel(page);
        labelChoice->setObjectName("labelChoice");
        labelChoice->setGeometry(QRect(270, 30, 250, 40));
        labelChoice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 80, 151, 20));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 170, 191, 20));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 290, 171, 20));
        pushButtonXor = new QPushButton(page);
        pushButtonXor->setObjectName("pushButtonXor");
        pushButtonXor->setGeometry(QRect(180, 220, 201, 41));
        pushButtonBlock = new QPushButton(page);
        pushButtonBlock->setObjectName("pushButtonBlock");
        pushButtonBlock->setGeometry(QRect(410, 220, 201, 41));
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        lineOutputBlock = new QLineEdit(page_5);
        lineOutputBlock->setObjectName("lineOutputBlock");
        lineOutputBlock->setGeometry(QRect(200, 380, 371, 41));
        pushButtonBlocDecrypt = new QPushButton(page_5);
        pushButtonBlocDecrypt->setObjectName("pushButtonBlocDecrypt");
        pushButtonBlocDecrypt->setGeometry(QRect(250, 320, 94, 26));
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(310, 70, 151, 41));
        QFont font;
        font.setPointSize(12);
        label_13->setFont(font);
        lineEditInputBlock = new QLineEdit(page_5);
        lineEditInputBlock->setObjectName("lineEditInputBlock");
        lineEditInputBlock->setGeometry(QRect(230, 160, 300, 30));
        pushButtonBackBlock = new QPushButton(page_5);
        pushButtonBackBlock->setObjectName("pushButtonBackBlock");
        pushButtonBackBlock->setGeometry(QRect(280, 440, 200, 40));
        pushButtonBlockEncrypt = new QPushButton(page_5);
        pushButtonBlockEncrypt->setObjectName("pushButtonBlockEncrypt");
        pushButtonBlockEncrypt->setGeometry(QRect(410, 320, 94, 26));
        label_14 = new QLabel(page_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(360, 130, 31, 20));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(290, 210, 171, 20));
        lineEditInputBlockKey = new QLineEdit(page_5);
        lineEditInputBlockKey->setObjectName("lineEditInputBlockKey");
        lineEditInputBlockKey->setGeometry(QRect(230, 240, 300, 30));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButtonXorEncrypt = new QPushButton(page_4);
        pushButtonXorEncrypt->setObjectName("pushButtonXorEncrypt");
        pushButtonXorEncrypt->setGeometry(QRect(270, 280, 94, 26));
        pushButtonXorDecrypt = new QPushButton(page_4);
        pushButtonXorDecrypt->setObjectName("pushButtonXorDecrypt");
        pushButtonXorDecrypt->setGeometry(QRect(400, 280, 94, 26));
        lineEditInputXor = new QLineEdit(page_4);
        lineEditInputXor->setObjectName("lineEditInputXor");
        lineEditInputXor->setGeometry(QRect(230, 160, 300, 30));
        pushButtonBackXor = new QPushButton(page_4);
        pushButtonBackXor->setObjectName("pushButtonBackXor");
        pushButtonBackXor->setGeometry(QRect(280, 410, 200, 40));
        lineEditInputXor2 = new QLineEdit(page_4);
        lineEditInputXor2->setObjectName("lineEditInputXor2");
        lineEditInputXor2->setGeometry(QRect(230, 220, 300, 30));
        lineOutputXor = new QLineEdit(page_4);
        lineOutputXor->setObjectName("lineOutputXor");
        lineOutputXor->setGeometry(QRect(300, 320, 171, 71));
        label_12 = new QLabel(page_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(330, 80, 101, 20));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lineEditInput = new QLineEdit(page_2);
        lineEditInput->setObjectName("lineEditInput");
        lineEditInput->setGeometry(QRect(250, 100, 300, 30));
        lineEditShift = new QLineEdit(page_2);
        lineEditShift->setObjectName("lineEditShift");
        lineEditShift->setGeometry(QRect(250, 150, 300, 30));
        pushButtonEncrypt = new QPushButton(page_2);
        pushButtonEncrypt->setObjectName("pushButtonEncrypt");
        pushButtonEncrypt->setGeometry(QRect(250, 200, 300, 40));
        pushButtonBack = new QPushButton(page_2);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(250, 360, 300, 40));
        lineOutputCaesar = new QLineEdit(page_2);
        lineOutputCaesar->setObjectName("lineOutputCaesar");
        lineOutputCaesar->setGeometry(QRect(250, 270, 300, 30));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 50, 91, 20));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButtonBackViginere = new QPushButton(page_3);
        pushButtonBackViginere->setObjectName("pushButtonBackViginere");
        pushButtonBackViginere->setGeometry(QRect(320, 410, 200, 40));
        lineEditInputViginere = new QLineEdit(page_3);
        lineEditInputViginere->setObjectName("lineEditInputViginere");
        lineEditInputViginere->setGeometry(QRect(270, 160, 300, 30));
        lineEditInputViginere2 = new QLineEdit(page_3);
        lineEditInputViginere2->setObjectName("lineEditInputViginere2");
        lineEditInputViginere2->setGeometry(QRect(270, 220, 300, 30));
        pushButtonEncryptViginere = new QPushButton(page_3);
        pushButtonEncryptViginere->setObjectName("pushButtonEncryptViginere");
        pushButtonEncryptViginere->setGeometry(QRect(310, 280, 94, 26));
        pushButtonDecryptViginere = new QPushButton(page_3);
        pushButtonDecryptViginere->setObjectName("pushButtonDecryptViginere");
        pushButtonDecryptViginere->setGeometry(QRect(440, 280, 94, 26));
        lineOutputViginere = new QLineEdit(page_3);
        lineOutputViginere->setObjectName("lineOutputViginere");
        lineOutputViginere->setGeometry(QRect(340, 320, 171, 71));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(370, 90, 111, 20));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Multi Cipher GUI", nullptr));
        pushButtonCaesar->setText(QCoreApplication::translate("MainWindow", "Caesar", nullptr));
        pushButtonViginere->setText(QCoreApplication::translate("MainWindow", "Viginere", nullptr));
        labelChoice->setText(QCoreApplication::translate("MainWindow", "Pilih Metode Cipher", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Metode Chiper Klasik", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Metode Algoritma Modern", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Metode Algoritma Super", nullptr));
        pushButtonXor->setText(QCoreApplication::translate("MainWindow", "Xor", nullptr));
        pushButtonBlock->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        lineOutputBlock->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Hasil Akan Tampil Disini", nullptr));
        pushButtonBlocDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Block Cipher AES", nullptr));
        lineEditInputBlock->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        pushButtonBackBlock->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButtonBlockEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt ", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Round Key 0 (16 karakter)", nullptr));
        lineEditInputBlockKey->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        pushButtonXorEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt ", nullptr));
        pushButtonXorDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        lineEditInputXor->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        pushButtonBackXor->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lineEditInputXor2->setText(QString());
        lineEditInputXor2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan Enkripsi", nullptr));
        lineOutputXor->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Hasil Akan Tampil Disini", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "XOR chiper", nullptr));
        lineEditInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        lineEditShift->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan shift (angka)", nullptr));
        pushButtonEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lineOutputCaesar->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Caesar Chiper", nullptr));
        pushButtonBackViginere->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lineEditInputViginere->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        lineEditInputViginere2->setText(QString());
        lineEditInputViginere2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan Enkripsi", nullptr));
        pushButtonEncryptViginere->setText(QCoreApplication::translate("MainWindow", "Encrypt ", nullptr));
        pushButtonDecryptViginere->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        lineOutputViginere->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Hasil Akan Tampil Disini", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Viginere Chiper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
