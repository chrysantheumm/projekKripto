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
    QWidget *pageUtama;
    QPushButton *pushButtonCaesar;
    QPushButton *pushButtonViginere;
    QLabel *labelChoice;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonXor;
    QPushButton *pushButtonBlock;
    QPushButton *pushButtonSuper;
    QWidget *pageBlock;
    QLineEdit *lineOutputBlock;
    QPushButton *pushButtonBlocDecrypt;
    QLabel *label_13;
    QLineEdit *lineEditInputBlock;
    QPushButton *pushButtonBackBlock;
    QPushButton *pushButtonBlockEncrypt;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEditInputBlockKey;
    QWidget *pageXor;
    QPushButton *pushButtonXorEncrypt;
    QPushButton *pushButtonXorDecrypt;
    QLineEdit *lineEditInputXor;
    QPushButton *pushButtonBackXor;
    QLineEdit *lineEditInputXor2;
    QLineEdit *lineOutputXor;
    QLabel *label_12;
    QWidget *pageSuper;
    QPushButton *pushButtonBackSuper;
    QWidget *pageCaesar;
    QLineEdit *lineEditInput;
    QLineEdit *lineEditShift;
    QPushButton *pushButtonEncrypt;
    QPushButton *pushButtonBack;
    QLineEdit *lineOutputCaesar;
    QLabel *label_10;
    QWidget *pageViginere;
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
        pageUtama = new QWidget();
        pageUtama->setObjectName("pageUtama");
        pushButtonCaesar = new QPushButton(pageUtama);
        pushButtonCaesar->setObjectName("pushButtonCaesar");
        pushButtonCaesar->setGeometry(QRect(180, 110, 200, 40));
        pushButtonViginere = new QPushButton(pageUtama);
        pushButtonViginere->setObjectName("pushButtonViginere");
        pushButtonViginere->setGeometry(QRect(410, 110, 200, 40));
        labelChoice = new QLabel(pageUtama);
        labelChoice->setObjectName("labelChoice");
        labelChoice->setGeometry(QRect(270, 30, 250, 40));
        labelChoice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(pageUtama);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 80, 151, 20));
        label_2 = new QLabel(pageUtama);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 170, 191, 20));
        label_3 = new QLabel(pageUtama);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 290, 171, 20));
        pushButtonXor = new QPushButton(pageUtama);
        pushButtonXor->setObjectName("pushButtonXor");
        pushButtonXor->setGeometry(QRect(180, 220, 201, 41));
        pushButtonBlock = new QPushButton(pageUtama);
        pushButtonBlock->setObjectName("pushButtonBlock");
        pushButtonBlock->setGeometry(QRect(410, 220, 201, 41));
        pushButtonSuper = new QPushButton(pageUtama);
        pushButtonSuper->setObjectName("pushButtonSuper");
        pushButtonSuper->setGeometry(QRect(310, 330, 201, 41));
        stackedWidget->addWidget(pageUtama);
        pageBlock = new QWidget();
        pageBlock->setObjectName("pageBlock");
        lineOutputBlock = new QLineEdit(pageBlock);
        lineOutputBlock->setObjectName("lineOutputBlock");
        lineOutputBlock->setGeometry(QRect(200, 380, 371, 41));
        pushButtonBlocDecrypt = new QPushButton(pageBlock);
        pushButtonBlocDecrypt->setObjectName("pushButtonBlocDecrypt");
        pushButtonBlocDecrypt->setGeometry(QRect(250, 320, 94, 26));
        label_13 = new QLabel(pageBlock);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(310, 70, 151, 41));
        QFont font;
        font.setPointSize(12);
        label_13->setFont(font);
        lineEditInputBlock = new QLineEdit(pageBlock);
        lineEditInputBlock->setObjectName("lineEditInputBlock");
        lineEditInputBlock->setGeometry(QRect(230, 160, 300, 30));
        pushButtonBackBlock = new QPushButton(pageBlock);
        pushButtonBackBlock->setObjectName("pushButtonBackBlock");
        pushButtonBackBlock->setGeometry(QRect(280, 440, 200, 40));
        pushButtonBlockEncrypt = new QPushButton(pageBlock);
        pushButtonBlockEncrypt->setObjectName("pushButtonBlockEncrypt");
        pushButtonBlockEncrypt->setGeometry(QRect(410, 320, 94, 26));
        label_14 = new QLabel(pageBlock);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(360, 130, 31, 20));
        label_15 = new QLabel(pageBlock);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(290, 210, 171, 20));
        lineEditInputBlockKey = new QLineEdit(pageBlock);
        lineEditInputBlockKey->setObjectName("lineEditInputBlockKey");
        lineEditInputBlockKey->setGeometry(QRect(230, 240, 300, 30));
        stackedWidget->addWidget(pageBlock);
        pageXor = new QWidget();
        pageXor->setObjectName("pageXor");
        pushButtonXorEncrypt = new QPushButton(pageXor);
        pushButtonXorEncrypt->setObjectName("pushButtonXorEncrypt");
        pushButtonXorEncrypt->setGeometry(QRect(270, 280, 94, 26));
        pushButtonXorDecrypt = new QPushButton(pageXor);
        pushButtonXorDecrypt->setObjectName("pushButtonXorDecrypt");
        pushButtonXorDecrypt->setGeometry(QRect(400, 280, 94, 26));
        lineEditInputXor = new QLineEdit(pageXor);
        lineEditInputXor->setObjectName("lineEditInputXor");
        lineEditInputXor->setGeometry(QRect(230, 160, 300, 30));
        pushButtonBackXor = new QPushButton(pageXor);
        pushButtonBackXor->setObjectName("pushButtonBackXor");
        pushButtonBackXor->setGeometry(QRect(280, 410, 200, 40));
        lineEditInputXor2 = new QLineEdit(pageXor);
        lineEditInputXor2->setObjectName("lineEditInputXor2");
        lineEditInputXor2->setGeometry(QRect(230, 220, 300, 30));
        lineOutputXor = new QLineEdit(pageXor);
        lineOutputXor->setObjectName("lineOutputXor");
        lineOutputXor->setGeometry(QRect(300, 320, 171, 71));
        label_12 = new QLabel(pageXor);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(330, 80, 101, 20));
        stackedWidget->addWidget(pageXor);
        pageSuper = new QWidget();
        pageSuper->setObjectName("pageSuper");
        pushButtonBackSuper = new QPushButton(pageSuper);
        pushButtonBackSuper->setObjectName("pushButtonBackSuper");
        pushButtonBackSuper->setGeometry(QRect(310, 340, 94, 26));
        stackedWidget->addWidget(pageSuper);
        pageCaesar = new QWidget();
        pageCaesar->setObjectName("pageCaesar");
        lineEditInput = new QLineEdit(pageCaesar);
        lineEditInput->setObjectName("lineEditInput");
        lineEditInput->setGeometry(QRect(250, 100, 300, 30));
        lineEditShift = new QLineEdit(pageCaesar);
        lineEditShift->setObjectName("lineEditShift");
        lineEditShift->setGeometry(QRect(250, 150, 300, 30));
        pushButtonEncrypt = new QPushButton(pageCaesar);
        pushButtonEncrypt->setObjectName("pushButtonEncrypt");
        pushButtonEncrypt->setGeometry(QRect(250, 200, 300, 40));
        pushButtonBack = new QPushButton(pageCaesar);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(250, 360, 300, 40));
        lineOutputCaesar = new QLineEdit(pageCaesar);
        lineOutputCaesar->setObjectName("lineOutputCaesar");
        lineOutputCaesar->setGeometry(QRect(250, 270, 300, 30));
        label_10 = new QLabel(pageCaesar);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 50, 91, 20));
        stackedWidget->addWidget(pageCaesar);
        pageViginere = new QWidget();
        pageViginere->setObjectName("pageViginere");
        pushButtonBackViginere = new QPushButton(pageViginere);
        pushButtonBackViginere->setObjectName("pushButtonBackViginere");
        pushButtonBackViginere->setGeometry(QRect(320, 410, 200, 40));
        lineEditInputViginere = new QLineEdit(pageViginere);
        lineEditInputViginere->setObjectName("lineEditInputViginere");
        lineEditInputViginere->setGeometry(QRect(270, 160, 300, 30));
        lineEditInputViginere2 = new QLineEdit(pageViginere);
        lineEditInputViginere2->setObjectName("lineEditInputViginere2");
        lineEditInputViginere2->setGeometry(QRect(270, 220, 300, 30));
        pushButtonEncryptViginere = new QPushButton(pageViginere);
        pushButtonEncryptViginere->setObjectName("pushButtonEncryptViginere");
        pushButtonEncryptViginere->setGeometry(QRect(310, 280, 94, 26));
        pushButtonDecryptViginere = new QPushButton(pageViginere);
        pushButtonDecryptViginere->setObjectName("pushButtonDecryptViginere");
        pushButtonDecryptViginere->setGeometry(QRect(440, 280, 94, 26));
        lineOutputViginere = new QLineEdit(pageViginere);
        lineOutputViginere->setObjectName("lineOutputViginere");
        lineOutputViginere->setGeometry(QRect(340, 320, 171, 71));
        label_11 = new QLabel(pageViginere);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(370, 90, 111, 20));
        stackedWidget->addWidget(pageViginere);
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
        pushButtonSuper->setText(QCoreApplication::translate("MainWindow", "Super", nullptr));
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
        pushButtonBackSuper->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
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
