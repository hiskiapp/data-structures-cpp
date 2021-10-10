#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct data
{
    int data[5];
    int top;
};

data mining;

void initialise();
void push(int data);
void pop();
int is_emptyy();
int is_full();

main()
{
    system("cls");
    int select, input, i;
    int price = 15000; // harga emas per gram
    int total = 0;
    initialise();
    do
    {
        cout << "1. Tambah data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Print Data" << endl;
        cout << "4. Bersihkan Data" << endl;
        cout << endl;
        cout << "Pilih : ";
        cin >> select;
        cout << endl;
        switch (select)
        {
        case 1:
        {
            if (is_full() == 1)
            {
                cout << "Data penuh!";
            }
            else
            {
                cout << "Jumlah emas yang di dapat (gram): ";
                cin >> input;

                push(input * price);
            }
            cout << endl;
            getch();
            break;
        }
        case 2:
        {
            if (is_emptyy() == 1)
            {
                cout << "Data kosong!";
            }
            else
            {
                cout << "Data yang akan di hapus = " << mining.data[mining.top] << endl;
                pop();
            }
            cout << endl;
            getch();
            break;
        }
        case 3:
        {
            if (is_emptyy() == 1)
            {
                cout << "Data kosong!" << endl;
            }
            else
            {
                cout << "Total Pendapatan: " << endl;
                for (i = 0; i <= mining.top; i++)
                {
                    total += mining.data[i];
                    cout << mining.data[i] << endl;
                }
                cout << "---------- +" << endl;
                cout << total << endl;
            }
            cout << endl;
            getch();
            break;
        }
        case 4:
        {
            initialise();
            cout << "Data telah dibersihkan!" << endl;
            cout << endl;
            getch();
            break;
        }
        default:
        {
            cout << "Menu yang dipilih tidak valid!" << endl;
        }
        }
    } while (select >= 1 && select <= 4);
    getch();
}

void initialise()
{
    mining.top = -1;
}

int is_emptyy()
{
    if (mining.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full()
{
    if (mining.top == 5 - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    mining.top++;
    mining.data[mining.top] = data;
}

void pop()
{
    mining.top = mining.top - 1;
    if (mining.top < 0)
    {
        mining.top = -1;
    }
}