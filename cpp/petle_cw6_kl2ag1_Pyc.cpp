#include <iostream>
 
using namespace std;
 
 
int main(int argc, char **argv)
{
    int dzielna =0 ;
    int dzielnik = 0;
    int iloraz = 0;
    int wynik = 0;
    int reszta = 0;
   
    while(dzielnik == 0)
    {
        cout<<"Podaj pierwsza liczbe: ";
        cin>>dzielna;
        cout<<"Podaj druga liczbe: ";
        cin>>dzielnik;
    }
    while(true)
    {
        wynik=dzielna-dzielnik;
        if(wynik >=0 )
        {
            iloraz++;
            dzielna = 0;
            dzielna+= wynik;
            reszta = wynik %10;
        }
        else break;
    }
    cout<<"Iloraz jest rowny: "<<iloraz << endl;
    cout<<"Reszta jest rowna: "<<reszta << endl;
   
    return 0;
}
