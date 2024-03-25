#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Masukkan ukuran array tiga dimensi (x y z): ";
    cin >> x >> y >> z;

    int arr[x][y][z];
    cout << "Masukkan nilai-nilai array: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Array tiga dimensi yang diinputkan:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
    return 0;
}