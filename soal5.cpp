#include <iostream>
using namespace std;

int main(){
    int angka, i;

    //meminta user menginput bilangan
    cout<<"masukkan bilangan: ";
    cin>>angka;

    //perulangan untuk mengecek apakah ada pembagi selain 1 dan dirinya sendiri
    //i dimulai dari 2, karena semua bilangan pasti habis dibagi 1
    //perulangan berjalan sampai angka/2 karena tidak mungkin ada pembagi lebih dari itu (kecuali angka itu sendiri)
    for (i = 2; i <= angka / 2; i++) {
        if (angka % i == 0) {
            //jika angka habis dibagi i, berarti bukan bilangan prima
            cout<<"bukan prima"<<endl;
            return 0; //program langsung berhenti
        }
    }

    //jika tidak ditemukan pembagi, berarti angka hanya bisa dibagi dengan 1 dan dirinya sendiri
    if (angka > 1)
        cout<<"prima"<<endl;
    else
    //bilangan <=1 bukan bilangan prima
        cout<<"bukan prima"<<endl;

    return 0;
}
