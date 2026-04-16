#include <iostream>
using namespace std;

bool kabisat(int tahun)// fungsi untuk mengecek apakah tahun kabisat 
{
    
    if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0))
    //mengecek tahun kabisat, dengan aturan:
    // jika habis dibagi 400 maka tahun kabisat
    // jika habis dibagi 4 tapi tidak habis dibagi 100 maka tahun kabisat
    {
        return true;
    }
    return false;
}

int main()
{
    int A, B; // A = tahun, B = interval

    cout << "Masukkan tahun (A): "; // meminta user menginputkan tahun
    cin >> A;
    cout << "Masukkan interval (B): "; // meminta user menginputkan interval
    cin >> B;

    if (B >= 0) // jika interval positif (maju)
    {
        for (int i = 0; i <= B; i++) {
            int tahun = A + i;
            if (kabisat(tahun)) // cek kabisat atau tidak
            {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    }
    else // jika interval negatif (mundur)
    {
        for (int i = 0; i >= B; i--)
        {
            int tahun = A + i;
            if (kabisat(tahun)) // cek kabisat atau tidak
            {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    }
    return 0; // program selesai
}
