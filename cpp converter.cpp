#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int Dolar;
float Euro;
float Rubble;
float Pound;
float Lari;
float Canadian;
string currency;

int main() {
    // Interface

    cout<<"Enter amount of money";

        cin>>Dolar;

            cout<<"which currency you want to convert in ?";

                cin>>currency;


    // Calculation


    Euro = Dolar * 0.91745;

    Rubble = Dolar * 69.3772;

    Pound = Dolar * 0.80661;

    Lari = Dolar * 2.61;

    Canadian = Dolar * 1.33692;


    // Output


    if (currency == "euro") cout<<Euro;

    else if (currency == "rubble") cout<<Rubble;

    else if (currency == "pound") cout<<Pound;

    else if (currency == "lari") cout<<Lari;

    else if (currency == "canadian dolar") cout<<Canadian;



}



