#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maksimimaara;
    cout << "Valitse maksimiluku, johon asti voi arvata" << endl;
    cin >> maksimimaara;
    int yritykset = game(maksimimaara);
    cout << "Sait numeron oikein " << yritykset << " yrityksella. " << endl;
    return 0;
}

int game(int maxnum) {
    srand(time(NULL));
    int luku = rand() % maxnum + 1;
    int kayttajaLuku;
    int yritykset;
    cout << "Arvaa luku valilta 1-" << maxnum << endl;
    do{
        cin >> kayttajaLuku;
        yritykset++;
        if(kayttajaLuku < luku) {
            cout << "Arvaus liian pieni!" << endl;
        } else if (kayttajaLuku > luku) {
            cout << "Arvaus liian suuri!" << endl;
        } else {
            cout << "Oikein!" << endl;
        }
    } while (luku != kayttajaLuku);
    return yritykset;
}
