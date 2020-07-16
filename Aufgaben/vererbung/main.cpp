#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

int main()
{
    chien chien1(4, 45, "chien de chasse");

    chien1.setnom("Rocki");
    chien1.setrace("Berger allemand");
    chien1.setpatte(5);
    chien1.setpoids(61);

    printanimal(chien1);

    return 0;
}

