#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);

    cout << "Nilai Algoritma dan Pemrograman: ";
    cin >> nilai1;
    cout << "Nilai Probabilitas dan Statistika: ";
    cin >> nilai2;
    cout << "Nilai Sistem Operasi: ";
    cin >> nilai3;

    float rata2 = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "\n--- Hasil Penilaian ---\n";
    cout << "Algoritma dan Pemrograman: " << (nilai1 >= 60 ? "Lulus." : "Tidak Lulus.") << endl;
    cout << "Probabilitas dan Statistika: " << (nilai2 >= 60 ? "Lulus." : "Tidak Lulus.") << endl;
    if (nilai3 >= 60)
        cout << "Sistem Operasi: Lulus." << endl;
    else
        cout << "Sistem Operasi: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Nilai Rata-rata Semester ini: " << rata2 << endl;

}
