#include <iostream>
#include <cmath>

using namespace std;

struct counterwr
{
    float match, wr, req;
};

struct counterwr data[2];

main()
{
    float win, lose, remain, result, percent, final;
    for (int i = 0; i < 2; i++)
    {
        cout << "\n\n-------------------------------\n";
        cout << " Penghitung Target WR Mobile Legends ";
        cout << "\n-------------------------------\n";
        cout << "\nTotal match Anda: ";
        cin >> data[i].match;
        cout << "Total Win Rate Anda: ";
        cin >> data[i].wr;
        cout << "Berapa Win Rate yang anda inginkan?: ";
        cin >> data[i].req;

        win = data[i].match * (data[i].wr / 100);
        lose = data[i].match - win;
        remain = 100 - data[i].req;
        result = 100 / remain;
        percent = lose * result;
        final = round(percent - data[i].match);

        cout << endl;

        cout << "\n\n-------------------------------\n";
        cout << " Output ";
        cout << "\n-------------------------------\n";
        cout << "\nTotal match Anda                     = " << data[i].match;
        cout << "\nTotal Win Rate Anda                  = " << data[i].wr;
        cout << "\nBerapa Win Rate yang anda inginkan?  = " << data[i].req;
        cout << "\nKamu memerlukan sekitar " << final << " win tanpa lose untuk mendapatkan win rate " << data[i].req << "%";
        cout << endl
             << endl;
    }
}