#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

/*Animal::Animal(int patte, int poid, string race){
    this->patte = patte;
    this->poids = poids;
    this->race = race;
}*/
int Animal::getpatte(){
    return patte;
}
int Animal::getpoids(){
    return poids;
}
string Animal::getrace(){
    return race;
}
void Animal::setpatte(int patte){
    this->patte = patte;
    /*if (patte > 4){
        cout << "ceci est un montre." << endl;
    }*/
}
void Animal::setpoids(int poids){
    this->poids = poids;
    /*if (poids > 60){
        cout << "Il se doit de faire un regime alimentaire." << endl;
    }*/
}
void Animal::setrace(string race){
    this->race = race;
}
    chien::chien(string nom, int patte, int poids, string race){
    this->nom = nom;
    this->patte = patte;
    this->poids = poids;
    this->race = race;

}
string chien::getnom(){
    return nom;
}
void chien::setnom(string nom){
    this->nom = nom;
}
void printanimal(const chien &sujet){
    cout << "Nom: " << sujet.getnom()
        << " Race: " << sujet.getrace()
        << " nombre de patte: " << sujet.getpatte()
        << " poids: " << sujet.getpoids()
        << endl;
}
