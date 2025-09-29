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
    0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
    0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
    0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
    0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
    0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
    0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
    0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
    0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
    0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
    0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
    0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
    0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
    0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
    0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
    0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
    0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16
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

// ubah desimal (hex) tiap karakter/bytes/state berdasarkan tabel sbox rijndael (misal hex h=68, pada tabel sbox (6,8) adalah 0x45 atau 45)
void SubBytes(uint8_t state[16]){
    for (int i=0;i<16;i++){
        state[i] = sbox[state[i]];
    }
}

// inverse untuk dekripsi menggunakan tabel inverse sbox rijndael
void InvSubBytes(uint8_t state[16]){
    for (int i=0;i<16;i++){
        state[i] = inv_sbox[state[i]];
    }
}

// geser kolom state (tiap 4 state) ke depan, 0 state untuk 4 state pertama, 1 kedua, 2 ketiga, 3 keempat
void ShiftRows(uint8_t state[16]) {
    for (int i = 0; i < 4; i++) {
        uint8_t temp[4];
        for (int j = 0; j < 4; j++)
            temp[j] = state[i*4 + j]; // salin 4 state pada baris i lalu disimpan di temp berdasarkan kolom j
        for (int j = 0; j < 4; j++)
            state[i*4 + j] = temp[(j + i) % 4]; // isi 4 state baris i dengan temp yang sudah digeser berdasarkan kolom j
    } // perulangan i hingga 4 baris karena matrix AES 4x4
}
//p.s: ini disimpannya bkn matrix wkwk masih array

// geser state sebaliknya (kalo yg tadi geser ke depan, ini geser ke belakang)
void InvShiftRows(uint8_t state[16]) {
    for (int i = 0; i < 4; i++) {
        uint8_t temp[4];
        for (int j = 0; j < 4; j++)
            temp[j] = state[i*4 + j];
        for (int j = 0; j < 4; j++)
            state[i*4 + j] = temp[(j - i + 4) % 4]; // krn sebaliknya, jadi -i dan +4 biar hasil ga negatif
    }
}

void mixColumn(uint8_t column[4]) {
    uint8_t temp[4];
    for (int i = 0; i < 4; i++)
        temp[i] = column[i];

    auto gm = [](uint8_t a, uint8_t b) {
        uint8_t p = 0;
        for (int i = 0; i < 8; i++) {
            if (b & 1) p ^= a;
            uint8_t hiBitSet = a & 0x80;
            a <<= 1;
            if (hiBitSet) a ^= 0x1b;
            b >>= 1;
        }
        return p;
    };

    column[0] = gm(temp[0], 2) ^ gm(temp[3], 1) ^
                gm(temp[2], 1) ^ gm(temp[1], 3);

    column[1] = gm(temp[1], 2) ^ gm(temp[0], 1) ^
                gm(temp[3], 1) ^ gm(temp[2], 3);

    column[2] = gm(temp[2], 2) ^ gm(temp[1], 1) ^
                gm(temp[0], 1) ^ gm(temp[3], 3);

    column[3] = gm(temp[3], 2) ^ gm(temp[2], 1) ^
                gm(temp[1], 1) ^ gm(temp[0], 3);
}

void InvMixColumn(uint8_t column[4]) {
    uint8_t temp[4];
    for (int i = 0; i < 4; i++)
        temp[i] = column[i];

    auto gm = [](uint8_t a, uint8_t b) {
        uint8_t p = 0;
        for (int i = 0; i < 8; i++) {
            if (b & 1) p ^= a;
            uint8_t hiBitSet = a & 0x80;
            a <<= 1;
            if (hiBitSet) a ^= 0x1b;
            b >>= 1;
        }
        return p;
    };

    column[0] = gm(temp[0], 14) ^ gm(temp[3], 9) ^
                gm(temp[2], 13) ^ gm(temp[1], 11);

    column[1] = gm(temp[1], 14) ^ gm(temp[0], 9) ^
                gm(temp[3], 13) ^ gm(temp[2], 11);

    column[2] = gm(temp[2], 14) ^ gm(temp[1], 9) ^
                gm(temp[0], 13) ^ gm(temp[3], 11);

    column[3] = gm(temp[3], 14) ^ gm(temp[2], 9) ^
                gm(temp[1], 13) ^ gm(temp[0], 11);
}

// menerapkan xor antar state dengan kunci
void roundKey(uint8_t state[16], uint8_t roundKey[16]) {
    for (int i = 0; i < 16; i++) {
        state[i] ^= roundKey[i]; // operasi xor state dengan kunci, kunci akan berulang jika < dari state
    } // ulangi operasi sejumlah menyesuaikan panjang key dan state
}

// round constant AES 128
uint8_t Rcon[11] = {
    0x00,
    0x01, 0x02, 0x04, 0x08,
    0x10, 0x20, 0x40, 0x80,
    0x1B, 0x36
};


// ekspansi kunci agar berubah tiap putaran
void keyExpansion(uint8_t key[16], uint8_t roundKeys[176]) {
    for (int i = 0; i < 16; i++)
        roundKeys[i] = key[i];

    int bytesGenerated = 16;
    int rconIndex = 1;
    uint8_t temp[4];

    while (bytesGenerated < 176) {
        for (int i = 0; i < 4; i++)
            temp[i] = roundKeys[bytesGenerated - 4 + i];

        if (bytesGenerated % 16 == 0) {
            // geser
            uint8_t t = temp[0];
            temp[0] = temp[1];
            temp[1] = temp[2];
            temp[2] = temp[3];
            temp[3] = t;

            // sbox
            for (int i = 0; i < 4; i++) {
                temp[i] = sbox[temp[i]];
            }

            // xor
            temp[0] ^= Rcon[rconIndex];
            rconIndex++;
        }

        for (int i = 0; i < 4; i++) {
            roundKeys[bytesGenerated] =
                roundKeys[bytesGenerated - 16] ^ temp[i];
            bytesGenerated++;
        }
    }
}

// Enkripsi Block AES sederhana (1 block = 16 byte)
void MainWindow::BlockEncrypt(QString &plain, QString key) {
    QByteArray input = plain.toUtf8();
    QByteArray k = key.toUtf8();

    // pad/truncate ke 16 byte
    input = input.leftJustified(16, '\0');
    k = k.leftJustified(16, '\0');

    uint8_t state[16];
    uint8_t roundKeys[176];
    keyExpansion((uint8_t*)k.data(), roundKeys);

    for (int i = 0; i < 16; i++)
        state[i] = (uint8_t)input[i];

    // Initial AddRoundKey (round 0)
    roundKey(state, &roundKeys[0]);

    // 9 full rounds
    for (int round = 1; round <= 9; round++) {
        SubBytes(state);
        ShiftRows(state);
        for (int c = 0; c < 4; c++) {
            mixColumn(&state[c * 4]);
        }
        roundKey(state, &roundKeys[round * 16]);
    }

    // Final round (no MixColumns)
    SubBytes(state);
    ShiftRows(state);
    roundKey(state, &roundKeys[10 * 16]);

    QByteArray result((char*)state, 16);
    plain = toHexString(result);
}

// Dekripsi Block AES sederhana
void MainWindow::BlockDecrypt(QString &cipher, QString key) {
    QByteArray input = QByteArray::fromHex(cipher.toUtf8());
    QByteArray k = key.toUtf8();

    // pad/truncate ke 16 byte
    input = input.leftJustified(16, '\0');
    k = k.leftJustified(16, '\0');

    uint8_t state[16];
    uint8_t roundKeys[176];
    keyExpansion((uint8_t*)k.data(), roundKeys);

    for (int i = 0; i < 16; i++)
        state[i] = (uint8_t)input[i];

    // Initial AddRoundKey dengan round ke-10
    roundKey(state, &roundKeys[10 * 16]);

    // 9 rounds inverse (round 9..1)
    for (int round = 9; round >= 1; --round) {
        InvShiftRows(state);
        InvSubBytes(state);
        roundKey(state, &roundKeys[round * 16]);
        for (int c = 0; c < 4; ++c) {
            InvMixColumn(&state[c * 4]);
        }
    }

    // final inverse round (round 0)
    InvShiftRows(state);
    InvSubBytes(state);
    roundKey(state, &roundKeys[0]);

    QByteArray result((char*)state, 16);
    cipher = QString::fromUtf8(result);
}


