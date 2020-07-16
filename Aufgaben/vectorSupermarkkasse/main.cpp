#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> Anzal;

    cout << "Anzahl eingeben ";

    while (true){
        double preis;
        cin >> preis;

        Anzal.push_back(preis);
        double sum(0);
        for (double element : Anzal){

            sum = sum + element;
        }
        cout << "biesherige anzahl " << sum << endl;
    }
    return 0;
}
