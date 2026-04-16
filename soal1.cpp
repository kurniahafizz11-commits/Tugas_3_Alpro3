#include <iostream>
using namespace std;

int main()
{
    int data,bilangan=1;
    cout<<"Input: ";
    cin>>data; // untuk menginput angka atau data awal

    for(int angka = 1; angka <= data;angka++){ // angka di inisialisasi 1, selama angka tidak melewati dari jumlah data maka akan terus mencetak, setelah mencetak satu angka dan menghitung pola nilai angka ditambah 1 (pindah ke urutan berikutnya)
        cout << bilangan <<" "; // menampilkan hasil perhitungan berdasarkan data yang diinput dan (" ") untuk memberikan spasi antar jawaban
        if (angka % 2 !=0){
            bilangan +=5; //jika urutan ganjil maka ditambah 5    
        }else{
            bilangan +=3; // jika urutan genap maka ditambah 3
        }
    }
    return 0;
}    
