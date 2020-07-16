#include <iostream>

using namespace std;

class Animal
{
    public:
        double poid;
        int patte;
};
class chat : public Animal
{
    public:
        string nom;
        void affiche();
};
void chat::affiche()
{
    poid = 21.3;
    cout << " nombre de patte: " << patte << "weight: " << poid << " nom: " << nom << endl;
}
int main()
{
    chat c;
    c.affiche();
    return 0;
}
