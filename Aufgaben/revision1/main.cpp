#include <iostream>

using namespace std;

class point
{
    private:
        int x;
        int y;
    public:
        point(int, int);
        void affiche();
        void modifie(int, int);
};

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}
void point::affiche()
{
    cout <<"x = " << x << " y = " << y << endl;
}

void point::modifie(int ax, int by)
{
    x += ax;
    y += by;
}

int main()
{
    point a(3, 8);
    a.affiche();
    a.modifie(1, 1);
    a.affiche();

    point b(12, 21);
    b.affiche();
    b.modifie(-2, -2);
    b.affiche();

}
