#include <iostream>
using namespace std;

int main(){
    int n,total=0; 
    //variabel total diinisialisai dengan 0 terlebih dahulu agar nilainya tidak acak (garbage value)

    //meminta user menginput bilangan
    cout<<"masukkan bilangan: ";
    cin>>n;

    //perulangan untuk mengambil semua bilangan genap dari 2 sampai n
    //i+=2 agar langsung lompat ke bilangan genap selanjutnya
    for(int i=2; i<=n; i+=2){
        //menambahkan kuadrat dari bilangan genap ke variabel total
        total+= i*i;
    }

    //menampilkan hasil total penjumlahan kuadrat bilangan genap
    cout<<"total: "<<total;
    return 0;
}
