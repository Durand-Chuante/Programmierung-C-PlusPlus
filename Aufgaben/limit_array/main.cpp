#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    array<double, 4> Zahl = {12.1, 23.2, 34.3, 45.1};
    double sum(0);

    for (double i : Zahl){
      sum += i;

    }
    cout << sum << endl;

    cout << (sum / Zahl.size()) << endl;
    return 0;
}
