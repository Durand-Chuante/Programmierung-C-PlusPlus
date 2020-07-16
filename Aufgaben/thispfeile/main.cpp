#include <iostream>

using namespace std;

class car
{
    private:
        string marke;
        int ps;
    public:
        car(string marke, int ps){
            this->marke = marke;
            this->ps = ps;
            cout <<"Ein Konstruktor ist ergestellt!" << endl;
        }
        void Tune(){
            this->ps+=20;
        }
        void printCar (){
            cout << marke << ": " << ps << endl;

        }
};



int main()
{
    car taxi("bmw", 300);
    car bus("Mercedes", 500);

    cout << taxi.marke taxi.ps << endl;
}
