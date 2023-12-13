20#include <iostream>
using namespace std;

int main () {
    double alas, tinggi;
    double luas;

    cout << " Perhitungan Luas Segitiga " << endl;
    cout << " ==========================\n" << endl;
    cout << " Masukkan Panjang Alas : ";
    cin >> alas;
    cout << " Masukkan Tinggi : ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;

    cout << " Luas Segitiga adalah : " << luas << endl;

    if (luas < 10) {
        cout << "Ini adalah segitiga kecil." << endl;
    } else if (luas >= 10 && luas < 50) {
        cout << "Ini adalah segitiga sedang." << endl;
    } else {
        cout << "Ini adalah segitiga besar." << endl;
    }

    return 0;
}
