#include <iostream>
#include "car.cpp"

using namespace std;


int main()
{


    Car c1(359, "Mercedes", "Black");

    Car c2(400, "BMW", "Black");

    Car c3(300, "Opel", "Rot");
    //c2.marke = "Audi";
    /*c2.farbe = "Yellow";
    c1.ps = 450;*/

    cout << c2.getps() << endl;
    c1.tune();
    c1.printcar();
    c2.printcar();
    c3.setps(500);

    cout << "Ps of Car 3 is " << c3.getps() << endl;



    return  0;
}
