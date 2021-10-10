#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 1000

using namespace std;

string name[MAX];
int head = -1, tail = -1;

bool is_emptyy()
{
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_full()
{
    if (tail == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void queue_in(string n)
{
    if (is_emptyy())
    {
        head = tail = 0;
    }
    else
    {
        tail++;
    }
    name[tail] = n;
}
void queue_out()
{
    if (is_emptyy())
    {
        cout << "Antrian sudah kosong!";
        getch();
    }
    else
    {
        for (int a = head; a < tail; a++)
        {
            name[a] = name[a + 1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
    }
}
void clear()
{
    head = tail = -1;
}
void view()
{
    if (is_emptyy())
    {
        cout << "Antrian sedang kosong!";
    }
    else
    {
        for (int a = head; a <= tail; a++)
        {
            cout << "==============================="
                 << "\n >> No. Antri      : [" << a + 1 << "]"
                 << "\n >> Nama Pelanggan : " << name[a]
                 << "\n===============================" << endl;
        }
        cout << ">> Antrian Sedang Menunggu: [" << tail << "]" << endl;
    }
}

int main()
{
    int choose, p = 1;
    string n;
    do
    {
        cout << "\n\n===== PROGRAM ANTRIAN SUPERMARKET JAYA STORE ====="
             << "\n==============================="
             << "\n|1. Tambah Antrian            |"
             << "\n|2. Panggil Antrian           |"
             << "\n|3. Daftar Antrian            |"
             << "\n|4. Hapus Semua Antrian       |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nPilih Menu: ";
        cin >> choose;
        cout << "\n";
        if (choose == 1)
        {
            if (is_full())
            {
                cout << "Antrian sudah penuh, mohon tunggu beberapa saat lagi!";
            }
            else
            {
                cout << "Nama Pelanggan: ";
                cin >> n;
                queue_in(n);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "               |" << endl;
                cout << "|         NAMA PELANGGAN        |" << endl;
                cout << "|             " << n << "            |" << endl;
                cout << "---------------------------------" << endl;
                cout << "|     Silahkan Mengantri ^_^    |" << endl;
                cout << "|       Menunggu " << tail << " Antrian      |" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if (choose == 2)
        {
            cout << "=================================" << endl;
            cout << "No. Antri : [" << head + 1 << "]";
            cout << "\nNama Pelanggan : [" << name[head] << "]";
            cout << "\n=================================" << endl;
            cout << "Silahkan ke kasir!";
            queue_out();
        }
        else if (choose == 3)
        {
            view();
        }
        else if (choose == 4)
        {
            clear();
            cout << "Antrian berhasil dikosongkan!";
        }
        else if (choose == 5)
        {
        }
        else
        {
            cout << "Menu tidak ditemukan!\n"
                 << endl;
        }
        getch();
    } while (choose != 5);
}