#include <iostream>

using namespace std;

int main()
{
    // Nama: Hiskia Anggi Puji Pratama
    // NIM: A11.2020.12730
    
    int max_value;

    cout << "Program looping angka" << endl;
    cout << "Masukkan batas angka: ";
    cin >> max_value;

    for (int i = 1; i <= max_value; i = i + 1)
    {
        cout << i << endl;
    }

    return 0;
}