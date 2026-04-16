#include <iostream>
#include <string> //library khusus untuk mengolah teks (string)
using namespace std;

int main() {
    string kalimat, hasil ; //'kalimat' untuk input, 'hasil' untuk menampung teks baru 
    char target; // untuk menyimpan satu huruf yang ingin dihapus
    int hitung = 0; //'hitung' dimulai dari 0 untuk menjumlahkan huruf yang dibuang

    cout << "Input Kalimat: ";
    getline(cin, kalimat); //menginput satu baris kalimat utuh (termasuk spasi)
    cout << "Input Huruf: ";
    cin >> target;// menginput satu karakter huruf yang akan dicari dan dihapus

    for (char c : kalimat) { // untuk setiap karakter 'c' yang ada di dalam variabel 'kalimat'
        if (c == target) {
            hitung++; //jika 'c' sama dengan huruf 'target', maka jumlah terhapus bertambah,bagian ini tidak memasukkan huruf ke 'hasil', sehingga huruf tersebut hilang
        } else {
            hasil += c; // jika 'c' tidak sama dengan 'target', masukkan huruf itu ke variabel 'hasil'
        }
    }

    cout << "Output: " << hasil << endl; //mencetak kalimat yang sudah bersih dari huruf target
    cout << "Karakter terhapus = " << hitung << endl; //mencetak total berapa kali huruf target ditemukan

    return 0;
}
