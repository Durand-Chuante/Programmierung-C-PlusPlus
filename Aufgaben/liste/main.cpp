#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> a = {1,2,3,4,5,6,7,8,9};
    list<int> b = {11,12};

    a.splice(a.begin(), b);
    cout << "Ma liste contient: ";
    for(auto it = a.cbegin(); it != a.cend(); it++){
        cout << *it << " ";


    }
    return 0;
}
