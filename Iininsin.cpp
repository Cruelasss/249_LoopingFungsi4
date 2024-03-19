#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNb, nCompass, nNike;
int hAdidas = 300, hNb = 250, hPuma = 150, hNike =350; 

void input ()
{
        cout << "Masukkan Jumlah Adidas =";
        cin >> nAdidas;

        cout << "Masukkan Jumlah Puma =";
        cin >> nPuma;

        cout << "Masukkan Jumlah New Balance =";
        Cin >> nNb;

        cout << "Masukkan Jumlah Compass =";
        cin >> nCompass;

        cout << "Masukkan Jumlah Nike = ";
        cin >> nNike;
}

int totalharga ()
{
    return (nAdidas*hAdidas) + (nPuma*hPuma) + (nNb*nNb) +(nNike*hNike)
}
    void display ()
    {
        cout << endl;
        cout <<===========> endl;
        cout << endl;
        cout << "Jumlah Puma =" << nPuma << endl;
        cout << "Jumlah Adidas = " <<nAdidas << endl;
        cout << endl;
        cout << "Total Harga = Rp." totalharga() << endl;
    }