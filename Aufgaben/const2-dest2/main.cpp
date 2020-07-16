#include <iostream>
#include <cstdlib>

using namespace std;

class hasard
{
    private:
        int val[10];
    public:
        hasard(int);
        void affiche();
};

hasard::hasard(int maxi)
{
    for(int i = 0; i < 10; i++)
    {
        val[i] = double (rand()) / RAND_MAX * maxi;
    }
}

void hasard::affiche()
{
    for(int i = 0; i < 10; i++)
    {
        cout << val[i] << " ";
    }
    cout << endl;
}

int main()
{
    hasard object1(97);
    object1.affiche();
}
