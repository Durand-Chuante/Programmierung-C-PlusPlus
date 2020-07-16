#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a, b;
    cout <<"Kommazahl eingeben" << endl;
    cin >> a;
    cout <<"Noch eine.!" << endl;
    cin >> b;
    cout <<"Summe = " << a + b << endl << endl << endl;
    string name;
    cout <<"name eingeben" << endl;
    cin >> name;
    cout <<"Hello " + name << endl;

    return 0;
}

