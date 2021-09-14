#include <iostream>

using namespace std;

int main()
{
    // Nama: Hiskia Anggi Puji Pratama
    // NIM: A11.2020.12730

    int number;
    cout << "Coba pilih angka 1-3: ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Itu adalah angka satu. ";
        break;
    case 2:
        cout << "Itu adalah angka dua.";
        break;
    case 3:
        cout << "Itu adalah angka tiga. ";
        break;
    default:
        cout << "Angka tidak terdaftar di sistem.";
    }
    return 0;
}