#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCaesar_clicked();
    void on_pushButtonEncrypt_clicked();
    void on_pushButtonBack_clicked();


    void on_pushButtonViginere_clicked();
    void on_pushButtonEncryptViginere_clicked();
    void on_pushButtonDecryptViginere_clicked();
    void on_pushButtonBackViginere_clicked();

    void on_pushButtonXor_clicked();
    void on_pushButtonXorEncrypt_clicked();
    void on_pushButtonXorDecrypt_clicked();
    void on_pushButtonBackXor_clicked();
    void on_pushButtonSuper_clicked();
    void on_pushButtonBackSuper_clicked();

    void on_pushButtonBlock_clicked();
    void on_pushButtonBlockEncrypt_clicked();
    void on_pushButtonBlockDecrypt_clicked();
    void on_pushButtonBackBlock_clicked();

    void on_pushButtonDecryptCaesar_clicked();
    void on_pushButtonEncryptSuper_clicked();
    void on_pushButtonDecryptSuper_clicked();

private:
    Ui::MainWindow *ui;

    void viginere(QString &text, QString kataKunci);
    void decryptviginere(QString &text, QString kataKunci);

    void shiftASCII(QString &text, int shiftValue);

    void XorEncrypt(QString &plain, QString key);
    void XorDecrypt(QString &cipher, QString key);

    void BlockEncrypt(QString &plain, QString key);
    void BlockDecrypt(QString &cipher, QString key);
};

#endif // MAINWINDOW_H
