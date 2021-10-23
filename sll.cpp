#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head, *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

int isEmpty()
{
    if (tail == NULL)
    {
        return true;
    }

    return false;
}

void create(int data)
{
    Node *node;
    node = new Node;
    node->data = data;
    node->next = NULL;
    if (isEmpty() == 1)
    {
        head = tail = node;
        tail->next = NULL;
    }
    else
    {
        node->next = head;
        head = node;
    }
    cout << "Deposit berhasil dicatat!" << endl;
}

void show()
{
    Node *node;
    int total = 0;
    node = head;
    if (isEmpty() == 0)
    {
        while (node != NULL)
        {
            total += node->data;
            cout << "Rp" << node->data << endl;
            node = node->next;
        }
        cout << "------------------ +" << endl;
        cout << "Total: Rp" << total << endl;
    }
    else
        cout << "Daftar Deposit kosong!" << endl;
}

void destroy()
{

    Node *node;
    int data;
    if (isEmpty() == 0)
    {
        if (head != tail)
        {
            // Proses Hapus Depan
            node = head;
            data = node->data;
            head = head->next;
            delete node;
        }
        else
        {
            data = tail->data;
            head = tail = NULL;
        }
        cout << "Deposit sebesar Rp" << data << " berhasil dihapus!" << endl;
    }
    else
        cout << "Deposit kosong!" << endl;
}

void clear()
{
    Node *node, *del;
    node = head;
    while (node != NULL)
    {
        del = node;
        node = node->next;
        delete del;
    }
    head = NULL;
    cout << "Semua data deposit berhasil dihapus!" << endl;
}

main()
{
    int menu, data;
    do
    {
        cout << endl;
        cout << "BANK SLL           " << endl;
        cout << "===================" << endl;
        cout << "1. Deposit         " << endl;
        cout << "2. Hapus Deposit   " << endl;
        cout << "3. Tampilkan Data  " << endl;
        cout << "4. Hapus Data      " << endl;
        cout << "5. Keluar          " << endl;
        cout << "===================" << endl;
        cout << "Masukan Kode Menu: ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            system("clear");
            {
                cout << "Masukan Nominal Deposit = Rp";
                cin >> data;
                create(data);
                break;
            }
        case 2:
            system("clear");
            {
                destroy();
                break;
            }
        case 3:
            system("clear");
            {
                show();
                break;
            }
        case 4:
            system("clear");
            {
                clear();
                break;
            }
        case 5:
            system("clear");
            {
                return 0;
                break;
            }
        default:
            system("clear");
            {
                cout << "\n Kode menu yang anda pilih tidak tersedia!";
            }
        }
        getch();
    } while (menu != 7);
}