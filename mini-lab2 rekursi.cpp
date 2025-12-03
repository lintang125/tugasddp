#include <iostream>
using namespace std;

/* =======================================================
   CARA 1: Rekursi Dasar (Sesuai Soal)
   a^b = a * a^(b-1), base case: b == 0 ? 1
======================================================= */
long long pangkatDasar(int a, int b) {
    if (b == 0) return 1;
    return a * pangkatDasar(a, b - 1);
}

/* =======================================================
   CARA 2: Rekursi Cepat
   Lebih efisien:
       - Jika b genap  : (a*a)^(b/2)
       - Jika b ganjil : a * a^(b-1)
======================================================= */
long long pangkatCepat(long long a, long long b) {
    if (b == 0) return 1;
    if (b % 2 == 0)
        return pangkatCepat(a * a, b / 2);
    else
        return a * pangkatCepat(a, b - 1);
}

/* =======================================================
   CARA 3: Rekursi untuk Eksponen Negatif
   Jika b negatif ? 1 / a^|b|
======================================================= */
double pangkatNegatif(double a, int b) {
    if (b == 0) return 1;
    if (b > 0) return a * pangkatNegatif(a, b - 1);
    return 1.0 / pangkatNegatif(a, -b);
}

/* =======================================================
   MENU PILIH METODE
======================================================= */
void tampilMenu() {
	cout << endl;
    cout << "=== Pilih Metode Rekursi ==="<<endl;
    cout << "1. Rekursi Dasar (Sesuai Petunjuk Soal)"<<endl;
    cout << "2. Rekursi Cepat"<<endl;
    cout << "3. Rekursi Eksponen Negatif"<<endl;
    cout << "Pilih metode (1-3): ";
}

/* =======================================================
   PROGRAM UTAMA
======================================================= */
int main() {
    double a;
    int b;
    int pilihan;

    cout << "Masukkan bilangan (a): ";
    cin >> a;

    cout << "Masukkan eksponen (b): ";
    cin >> b;

    tampilMenu();
    cin >> pilihan;

	cout <<endl;
    cout << "=== HASIL ==="<<endl;

    switch (pilihan) {
        case 1:
            cout << a << "^" << b << " = " << pangkatDasar(a, b) << endl;
            break;

        case 2:
            cout << a << "^" << b << " = " << pangkatCepat(a, b) << endl;
            break;

        case 3:
            cout << a << "^" << b << " = " << pangkatNegatif(a, b) << endl;
            break;

        default:
            cout << "Pilihan tidak valid."<<endl;
    }

    return 0;
}
