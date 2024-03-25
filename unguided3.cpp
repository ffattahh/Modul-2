#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    float sum = 0, avg;
    int max, min;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan " << n << " elemen:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (i == 0) {
            max = arr[i];
            min = arr[i];
        } else {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }
    }
    avg = sum / n;
    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << avg << endl;

    return 0;
}