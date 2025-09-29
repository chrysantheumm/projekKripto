#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// pindah ke page Super
void MainWindow::on_pushButtonSuper_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageSuper);
}

// pindah ke page Viginere
void MainWindow::on_pushButtonViginere_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageViginere);
}

// pindah ke page Xor
void MainWindow::on_pushButtonXor_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageXor);
}

// pindah ke page Caesar
void MainWindow::on_pushButtonCaesar_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageCaesar);
}

// pindah ke page Block
void MainWindow::on_pushButtonBlock_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageBlock);
}

// Tombol Back dari Caesar
void MainWindow::on_pushButtonBack_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageUtama);
}

// Tombol Back Dari Viginere
void MainWindow::on_pushButtonBackViginere_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageUtama);
}

// Tombol Back Dari Xor
void MainWindow::on_pushButtonBackXor_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageUtama);
}

// Tombol Back Dari Super
void MainWindow::on_pushButtonBackSuper_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageUtama);
}

// Tombol Back Dari Block
void MainWindow::on_pushButtonBackBlock_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageUtama);
}


// Tombol Decrypt Super
void MainWindow::on_pushButtonDecryptSuper_clicked()
{

    QString text = ui->lineEditInputTextSuper->text();
    int shiftValue = ui->lineEditShiftSuper->text().toInt();
    QString kataKunci = ui->lineEditInputSuper2->text() ;
    QString kunciXor = ui->lineEditInputSuper3->text();

    XorDecrypt(text, kunciXor);
    decryptviginere(text, kataKunci);
    shiftASCII(text, -shiftValue);
    ui->lineOutputSuper->setText(text);

}

    // Tombol Encrypt Super
    void MainWindow::on_pushButtonEncryptSuper_clicked()
{
        QString text = ui->lineEditInputTextSuper->text();
        int shiftValue = ui->lineEditShiftSuper->text().toInt();
        QString kataKunci = ui->lineEditInputSuper2->text() ;
        QString kunciXor = ui->lineEditInputSuper3->text();

        //enkripsi caesar
        shiftASCII(text, shiftValue);
        //enkripsi viginere
        viginere(text, kataKunci);
        //enkripsi XOR
        XorEncrypt(text, kunciXor);
        ui->lineOutputSuper->setText(text);

}



// Tombol Encrypt Caesar
void MainWindow::on_pushButtonEncrypt_clicked()
{
    QString text = ui->lineEditInput->text();
    int shiftValue = ui->lineEditShift->text().toInt() ;

    shiftASCII(text, shiftValue);
    ui->lineOutputCaesar->setText(text);

}

// Tombol Decrypt Caesar
void MainWindow::on_pushButtonDecryptCaesar_clicked()
{

    QString text = ui->lineEditInput->text();
    int shiftValue = ui->lineEditShift->text().toInt() ;
    shiftValue = -shiftValue;
    shiftASCII(text, shiftValue);
    ui->lineOutputCaesar->setText(text);

}

//Tombol Encrypt Viginere
void MainWindow::on_pushButtonEncryptViginere_clicked()
{
    QString text = ui->lineEditInputViginere->text();
    QString kataKunci = ui->lineEditInputViginere2->text() ;

    viginere(text, kataKunci);
    ui->lineOutputViginere->setText(text);
}
//Tombol Dencrypt Viginere

void MainWindow::on_pushButtonDecryptViginere_clicked()
{
    QString text = ui->lineEditInputViginere->text();
    QString kataKunci = ui->lineEditInputViginere2->text();

    decryptviginere(text, kataKunci);
    ui->lineOutputViginere->setText(text);
}

// Tombol Encrypt XOR
void MainWindow::on_pushButtonXorEncrypt_clicked()
{
    QString text = ui->lineEditInputXor->text();
    QString key = ui->lineEditInputXor2->text();

    XorEncrypt(text, key);
    ui->lineOutputXor->setText(text);
}

// Tombol Decrypt XOR
void MainWindow::on_pushButtonXorDecrypt_clicked()
{
    QString text = ui->lineEditInputXor->text();
    QString key = ui->lineEditInputXor2->text();

    XorDecrypt(text, key);
    ui->lineOutputXor->setText(text);
}

// Tombol Encrypt Block
void MainWindow::on_pushButtonBlockEncrypt_clicked()
{
    QString text = ui->lineEditInputBlock->text();
    QString key = ui->lineEditInputBlockKey->text();

    BlockEncrypt(text, key);
    ui->lineOutputBlock->setText(text);
}

// Tombol Decrypt Block
void MainWindow::on_pushButtonBlockDecrypt_clicked()
{
    QString text = ui->lineEditInputBlock->text();
    QString key = ui->lineEditInputBlockKey->text();

    BlockDecrypt(text, key);
    ui->lineOutputBlock->setText(text);
}


QString toHexString(const QByteArray &data) {
    return QString(data.toHex());
}

QByteArray fromHexString(const QString &hex) {
    return QByteArray::fromHex(hex.toUtf8());
}



void MainWindow::decryptviginere(QString &plain, QString kataKunci)
{
    int j = 0;

    for (int i = 0; i < plain.length(); i++) {
        char c = plain[i].toLatin1();
        char kataKunciShift = kataKunci[j].toLatin1();

        int shift = 0;
        if (kataKunciShift >= 'a' && kataKunciShift <= 'z')
            shift = kataKunciShift - 'a';
        else if (kataKunciShift >= 'A' && kataKunciShift <= 'Z')
            shift = kataKunciShift - 'A';

        if (c >= 'a' && c <= 'z') {
            c = ( (c - 'a' - shift + 26) % 26 ) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ( (c - 'A' - shift + 26) % 26 ) + 'A';
        }

        plain[i] = c;

        j++;
        if (j >= kataKunci.length()) j = 0;
    }
}

void MainWindow::viginere(QString &plain, QString kataKunci)
{
    int j = 0;

    for (int i = 0; i < plain.length(); i++) {
        char c = plain[i].toLatin1();
        char kataKunciShift = kataKunci[j].toLatin1();

        int shift = 0;
        if (kataKunciShift >= 'a' && kataKunciShift <= 'z')
            shift = kataKunciShift - 'a';
        else if (kataKunciShift >= 'A' && kataKunciShift <= 'Z')
            shift = kataKunciShift - 'A';

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + shift) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + shift) % 26) + 'A';
        }

        plain[i] = c;

        j++;
        if (j >= kataKunci.length()) j = 0;
    }
}



// Fungsi Caesar Cipher
void MainWindow::shiftASCII(QString &plain, int shiftValue)
{
    for (int i = 0; i < plain.length(); i++) {
        char c = plain[i].toLatin1(); // ambil char ASCII

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + (shiftValue % 26) + 26) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + (shiftValue % 26) + 26) % 26) + 'A';
        }
        plain[i] = c;
    }
}

// XOR Encrypt (plaintext → hex)
void MainWindow::XorEncrypt(QString &plain, QString key)
{
    if (key.isEmpty()) return;

    QByteArray input  = plain.toUtf8();
    QByteArray k      = key.toUtf8();
    QByteArray result;
    result.resize(input.size());

    for (int i = 0; i < input.size(); i++) {
        result[i] = input[i] ^ k[i % k.size()];
    }

    // ubah hasil ke hex agar tampil rapi
    QString hexResult = toHexString(result);
    ui->lineOutputXor->setText(hexResult);

    plain = hexResult;
}

// XOR Decrypt (hex → plaintext)
void MainWindow::XorDecrypt(QString &cipherHex, QString key)
{
    if (key.isEmpty()) return;

    QByteArray input  = fromHexString(cipherHex);
    QByteArray k      = key.toUtf8();
    QByteArray result;
    result.resize(input.size());

    for (int i = 0; i < input.size(); i++) {
        result[i] = input[i] ^ k[i % k.size()];
    }

    QString plainText = QString::fromUtf8(result);
    ui->lineOutputXor->setText(plainText);

    cipherHex = plainText;
}


// deklarasi sbox rijndael
static const uint8_t sbox[256] = {
    0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
    0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
    0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
    0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
    0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
    0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
    0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
    0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
    0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
    0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,
    0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79,
    0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08,
    0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A,
    0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E,
    0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF,
    0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16
};

// deklarasi inverse sbox rijndael untuk dekripsi
static const uint8_t inv_sbox[256] = {
    0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
    0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
    0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
    0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
    0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
    0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
    0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
    0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
    0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x79,
    0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
    0x47, 0xf1, 0x1a, 0x71, 0x1f, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
    0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
    0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
    0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe4, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
    0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
    0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d
};

// mengubah tiap byte berdasarkan tabel sbox
void SubBytes(uint8_t enkripsi[16]){
    for (int i=0;i<16;i++){
        enkripsi[i] = sbox[enkripsi[i]];
    }
}

// menerapkan xor untuk tiap byte berdasarkan kunci awal
void AddRoundKey(uint8_t enkripsi[16], const uint8_t* roundKey) {
    for (int i = 0; i < 16; i++) {
        enkripsi[i] ^= roundKey[i];
    }
}

// menggeser isi tiap baris matrix ke kiri (0 untuk baris 1, 1 untuk baris 2, 2 untuk baris 3, 3 untuk baris 4)
void ShiftRows(uint8_t enkripsi[16]) {
    uint8_t tmp[16];
    tmp[0]  = enkripsi[0];   tmp[4]  = enkripsi[4];
    tmp[8]  = enkripsi[8];   tmp[12] = enkripsi[12];
    tmp[1]  = enkripsi[5];   tmp[5]  = enkripsi[9];
    tmp[9]  = enkripsi[13];  tmp[13] = enkripsi[1];
    tmp[2]  = enkripsi[10];  tmp[6]  = enkripsi[14];
    tmp[10] = enkripsi[2];   tmp[14] = enkripsi[6];
    tmp[3]  = enkripsi[15];  tmp[7]  = enkripsi[3];
    tmp[11] = enkripsi[7];   tmp[15] = enkripsi[11];
    memcpy(enkripsi, tmp, 16);
}



void MainWindow::BlockEncrypt(QString &plain, QString key) {
    QByteArray input = plain.toUtf8();
    QByteArray k = key.toUtf8();

    // genapin 16 byte
    input = input.leftJustified(16, '\0');
    k = k.leftJustified(16, '\0');

    uint8_t state[16];
    uint8_t roundKey[16];
    memcpy(state, input.data(), 16);
    memcpy(roundKey, k.data(), 16);

    // tahap 1 xor ke kunci
    for (int i = 0; i < 16; i++)
        state[i] ^= roundKey[i];

    // tahap 2 ubah sbox
    SubBytes(state);

    // tahap 3 geser
    ShiftRows(state);

    // mengubah hasil ke bentuk hex
    QByteArray result((char*)state, 16);
    plain = toHexString(result);
}

void MainWindow::BlockDecrypt(QString &cipher, QString key) {
    QByteArray input = fromHexString(cipher);  // convert hex back to bytes
    QByteArray k = key.toUtf8();

    k = k.leftJustified(16, '\0');

    uint8_t state[16];
    uint8_t roundKey[16];
    memcpy(state, input.data(), 16);
    memcpy(roundKey, k.data(), 16);

    // tahapp 1 inverse geser
    uint8_t tmp[16];
    tmp[0]  = state[0];   tmp[4]  = state[4];
    tmp[8]  = state[8];   tmp[12] = state[12];
    tmp[1]  = state[13];  tmp[5]  = state[1];
    tmp[9]  = state[5];   tmp[13] = state[9];
    tmp[2]  = state[10];  tmp[6]  = state[14];
    tmp[10] = state[2];   tmp[14] = state[6];
    tmp[3]  = state[7];   tmp[7]  = state[11];
    tmp[11] = state[15];  tmp[15] = state[3];
    memcpy(state, tmp, 16);

    // tahap 2 inverse xor
    for (int i = 0; i < 16; i++) {
        state[i] = inv_sbox[state[i]];
    }

    // tahap 3 inverse sbox
    for (int i = 0; i < 16; i++) {
        state[i] ^= roundKey[i];
    }

    // mengembalikan bentuk asli string
    QByteArray result((char*)state, 16);
    cipher = QString::fromUtf8(result).trimmed();
}


