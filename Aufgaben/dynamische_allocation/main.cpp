#include <iostream>

using namespace std;

int main()
{
    int nbr;
    int *ptr;
    cin >> nbr;
    cout << endl;
    ptr = new int [nbr];

    for(int i = 0; i < nbr; i++)
    {
        ptr[i] = i;
        cout << ptr[i] << endl;
    }
    delete[] ptr;
    //cout << "Hello world!" << endl;
    return 0;
}
