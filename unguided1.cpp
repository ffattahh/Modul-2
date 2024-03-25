#include <iostream>
using namespace std;

int main() {
    int angka[10];
    cout << "Masukkan angka : ";
    for (int i = 0; i < 10; ++i) {
        cin >> angka[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << angka[i] << " ";
    }

    cout << "\nNomor Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 == 0) {
            cout << angka[i] << " ";
        }
    }

    cout << "\nNomor Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 != 0) {
            cout << angka[i] << " ";
        }
    }
    return 0;
}