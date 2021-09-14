#include <iostream>

using namespace std;

int main()
{
    // Nama: Hiskia Anggi Puji Pratama
    // NIM: A11.2020.12730
    
    string answer = "semarang";
    string input;

    cout << "Di mana letak kota UDINUS: "; << endl;
    cout << "1. Merah";
    cout << "2. Hijau";
    cout << "3. Biru";
    cout << "4. Kuning";
    cout << "5. Putih";


    getline(cin, input);

    if (answer == input)
    {
        cout << "Anda benar.";
    }
    else
    {
        cout << "Anda salah.";
    }
    return 0;
}