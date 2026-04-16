#include <iostream>
using namespace std;

int main() {
    int n; // n menyatakan jumlah pengulangan
    cout << "Masukkan nilai n: "; // meminta user untuk menginputkan nilai n
    cin >> n;

    cout << "H"; // menampilkan huruf H

    for (int i = 0; i < n; i++) // perulangan untuk menampilkan huruf 'o' sebanyak n kali
    {
        cout << "o";
    }

    cout << "r"; // menampilkan huruf 'r'

    for (int i = 0; i < n; i++) // perulangan untuk menampilkan huruf 'e' sebanyak n kali
    {
        cout << "e";
    }

    for (int i = 0; i < n; i++) // perulangan untuk menampilkan tanda seru sebanyak n kali
    {
        cout << "!";
    }
    return 0;
}
