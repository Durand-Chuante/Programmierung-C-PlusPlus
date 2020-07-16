#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>

class Animal
{
protected:
    int patte;
    int poids;
    std::string race;
public:
    //Animal(int patte, int poids, std::string race);
    int getpatte();
    int getpoids();
    std::string getrace();
    void setpatte(int patte);
    void setpoids(int poids);
    void setrace(std::string race);
};

class chien : public Animal
{
private:
    std::string nom;
public:
    chien(std::string nom, int patte, int poids, std::string race);
    std::string getnom();
    void setnom(std::string nom);
};
void printanimal();



#endif // ANIMAL_H_INCLUDED
