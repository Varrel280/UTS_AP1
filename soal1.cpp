#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan kode: ";
    cin >> N;

    // Syarat dasar: angka harus lebih dari 0
    if (N <= 0) {
        cout << "bukan" << endl;
        return 0;
    }

    // Periksa apakah N adalah pangkat dua
    bool isPangkatDua = (N & (N - 1)) == 0;

    if (isPangkatDua) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }

}
