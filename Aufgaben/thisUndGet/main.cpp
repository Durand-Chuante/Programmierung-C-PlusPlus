#include <iostream>

using namespace std;

class autoo
{
public:

    int ps = 32;
    int getps(void)
    {
        return this->ps;
    }

};

int main()
{
    autoo a;

    a.ps = 987;
    cout << a.getps();

    return 0;
}
