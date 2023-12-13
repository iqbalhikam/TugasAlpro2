#include <iostream>
using namespace std;

int main() {
    double panjang, lebar;
    double luas;

    cout << " Perhitungan Luas Persegi Panjang " << endl;
    cout << " ===============================\n" << endl;
    cout << " Masukkan Panjang : ";
    cin >> panjang;
    cout << " Masukkan Lebar : ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << " Luas Persegi Panjang adalah : " << luas << endl;

    if (luas < 10) {
        cout << "Ini adalah persegi panjang kecil." << endl;
    } else if (luas >= 10 && luas < 50) {
        cout << "Ini adalah persegi panjang sedang." << endl;
    } else {
        cout << "Ini adalah persegi panjang besar." << endl;
    }

    return 0;
}
