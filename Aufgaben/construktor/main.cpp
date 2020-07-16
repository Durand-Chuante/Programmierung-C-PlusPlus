#include <iostream>

using namespace std;

    class car
    {
    public:
        string marke;
        int ps;
        string farbe;

        car(){
            ps = 10;
            cout << "Ein neues Auto wird erstellt." << endl;
        }

        void printcar(){


            cout << marke << endl;
            cout << farbe << endl;
            cout << ps << endl << endl;

        }
    };
int main()
{
    car objekt1;
    car objekt2;
    car objekt3;

    objekt1.marke = "mercedes";
    objekt1.farbe = "schwarz";
    objekt1.ps = 330;

    objekt2.marke = "BMW";
    objekt2.farbe = "Rot";
    objekt2.ps = 320;

    objekt1.printcar();
    objekt3.printcar();
    return 0;
}
