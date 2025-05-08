#include <iostream>
using namespace std;

int main() {
    double x, y, hasil;
    char perintah;
    char tambah = '+';
    char kurang = '-';
    char kali = '*';
    char bagi = '/';
    char selesai;

    cout << "========================================" << endl;
    cout << "        [K A L K U L A T O R]           " << endl;
    cout << "Anda Dapat Memasukkan Operasi *, /, -, +" << endl;

    do {
        cout << "========================================" << endl;
        cout << "Masukkan angka pertama = "; 
        cin >> x;
        cout << "Masukkan operasi (+, -, *, /) : ";
        cin >> perintah;

        if (perintah == '+' || perintah == '-') {
            cout << "Masukkan angka kedua = "; 
            cin >> y;
            if (perintah == '+') {
                hasil = x + y;
            } else {
                hasil = x - y;
            }
        }
        else if (perintah == '*' || perintah == '/') {
            cout << "Masukkan angka kedua = "; 
            cin >> y;
            if (perintah == '*') {
                hasil = x * y;
            } else if (perintah == '/') {
                if (y == 0) {
                    cout << "Pembagian dengan 0 tidak valid!" << endl;
                    continue;
                }
                hasil = x / y;
            }
        }

        cout <<"Hasil akhir = " << hasil << endl;
        cout <<"Ingin Kembali Menggunakan Kalkulator?"<<endl; 
        cout <<"(Y untuk menggunakan kembali , N untuk keluar): ";
        cin >> selesai;

    } while (selesai == 'Y' || selesai == 'y');

    cout << "Terima Kasih Telah Menggunakan Kalkulator!" << endl;
    cout << "==========================================" << endl;

    return 0;
}
