#include <iostream>


using namespace std;

class test
{
    public:
        int num;
        test (int); // constructeur
        ~test(); // destructeur
};
test::test(int n)
{
    num = n;
    cout <<"++ appel constructeur - num =" << num << endl;
}
test::~test()
{
    cout <<"-- appel destructeur - num =" << num << endl;
}

int main()
{
    void fct(int);
    test a(1);
    for (int i = 1; i<=2; i++) fct(i);
}
void fct (int p){
    test x(2*p);
}


