#include <iostream>

using namespace std;

int main()
{
    int price;
    string name;
    int days;
    int first_farm;
    int total_farm = 0;
    int total_money = 0;

    cout << "Harga cabai per kg: ";
    cin >> price;
    cout << "Nama Petani: ";
    cin >> name;
    cout << "Lama panen: ";
    cin >> days;
    cout << "Panen pertama: ";
    cin >> first_farm;

    int before = first_farm;
    for (int i = 2; i <= days; i += 1)
    {
        before = before * 2;
        total_farm += before;
    }

    total_money = total_farm * price;

    cout << "== DETAIL ==" << endl;
    cout << "Harga cabai /kg: " << price << endl;
    cout << "Nama petani: " << name << endl;
    cout << "Lama panen: " << days << endl;
    cout << "Panen pertama: " << first_farm << endl;
    cout << "Total panen: " << total_farm << endl;
    cout << "Total uang yang dihasilkan: " << total_money << endl;

    return 0;
}