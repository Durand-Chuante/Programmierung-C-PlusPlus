/*
Lernen, wie man die for-Schleife benutzt.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int b, i = 1, c, a;
    cout << "Quelle age avez vous? ";
    cin >> a;
    for (i = 1; i < a; i++){
        b = log10(i);
        for (c = 0; c <= b; c++){
            cout << " ";
        }
    cout << i << ": " << a << endl;
    }

    return 0;
}
