/*
Schreibe ein Programm, was alle nicht-Schaltjahre zwischen
 2010 und 2022 ausgibt (einschließlich dem Jahr 2010 sowie
dem Jahr 2022)
*/
#include <iostream>

using namespace std;

int main()
{
    int jahr2, schaltjahr;
    for (jahr2 = 2022; jahr2 > 2009; jahr2--)
    {
        schaltjahr = jahr2 % 4;
            if (schaltjahr != 0){
                cout << jahr2 << endl;
            }
            /*if(jahr2 == 2012 || jahr2 == 2016 || jahr2 == 2020){
                continue;
            }
            cout << jahr2 << endl;*/
    }

    return 0;
}
