#include <iostream>
using namespace std;
int main() {
    system("cls");
    int nilai, total = 0, jumlah = 0;
    
    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri):" << endl;
    
    do {
        cout << "Nilai ke-" << (jumlah + 1) << ": ";
        cin >> nilai;

        if (nilai == -1) {
            break; }

        if (nilai < 0) {
            cout << "Masukkan Bilangan Bulat Positif" << endl;
            continue; }

        total += nilai;
        jumlah ++; } 
        
    while (true);

    if (jumlah > 0) {
        double rata_rata = static_cast<double>(total) / jumlah;
        cout << "Nilai rata-rata: " << rata_rata << endl; } 
    else {
        cout << "Tidak ada nilai yang dimasukkan." << endl; }

   return 0;
}
