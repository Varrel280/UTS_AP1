#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string biner;
    cout << "Input kode biner: ";
    cin >> biner;

    int desimal = 0;
    bool valid = true;
    int panjang = biner.length();

    for (int i = 0; i < panjang; i++) {
        char digit = biner[panjang - 1 - i];
        if (digit == '0' || digit == '1') {
            desimal += (digit - '0') * pow(2, i);
        } else {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;
    } else {
        cout << "Pesan Rusak!" << endl;
    }

}
