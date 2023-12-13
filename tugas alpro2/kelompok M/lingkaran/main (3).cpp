#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double luas;

    cout << " Perhitungan Luas Lingkaran " << endl;
    cout << " ==========================\n" << endl;
    cout << " Masukkan Jari-Jari Lingkaran : ";
    cin >> radius;

    luas = M_PI * pow(radius, 2); // Menggunakan nilai pi dari library cmath

    cout << " Luas Lingkaran adalah : " << luas << endl;

    if (luas < 10) {
        cout << "Ini adalah lingkaran kecil." << endl;
    } else if (luas >= 10 && luas < 50) {
        cout << "Ini adalah lingkaran sedang." << endl;
    } else {
        cout << "Ini adalah lingkaran besar." << endl;
    }

    return 0;
}
