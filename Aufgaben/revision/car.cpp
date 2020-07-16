#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:

        void tune()
        {
            this->ps+=20;
        }
        void printcar ()
        {
            cout << farbe <<": " << marke << ": " << ps << endl;
        }
        Car(int ps, string marke, string farbe){
            this->ps = ps;
            this->farbe= farbe;
            this->marke = marke;
            cout << "Ein neues auto wurde erstellt!" << endl;
        }
        int getps()
        {
            return ps;
        }
        void setps(int ps)
        {
            if (ps > 500){
                cout << "Das kann nicht sein" << endl;
            }
            else{
                this->ps = ps;
            }
        }
    private:
        string marke;
        string farbe;
        int ps;
};
