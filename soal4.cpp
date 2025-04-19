#include <iostream>
#include <string>
using namespace std;

int main() {
    string mantra;
    cout << "Masukkan Mantra: ";
    getline(cin, mantra);

    int jumlahVokal = 0;
    int i = 0;

    while (i < mantra.length()) {
        char c = tolower(mantra[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            jumlahVokal++;
        }
        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

}
