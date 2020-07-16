#include <iostream>

using namespace std;

class point
{
    private:
        int abs;
        int ord;
    public:
        point();
        point(int);
        point(int, int);
        void affiche();
        ~point();
};
point::point()
{
    abs = 0;
    ord = 0;
    cout << "le constructeur 1 a ete appeler" << endl;
}
point::point(int abs)
{
    this->abs = abs;
    cout << "le constructeur 2 a ete appeler" << endl;
}
point::point(int abs, int ord)
{
    this->abs = abs;
    this->ord = ord;
    cout << "le constructeur 3 a ete appeler" << endl;
}
point::~point()
{
    cout << " Objet detruit" << endl;
}
void point::affiche()
{
    cout << abs << endl;
    cout << ord << endl;
}
int main()
{
    point a;
    a.affiche();
    //cout << "Hello world!" << endl;
    return 0;
}
