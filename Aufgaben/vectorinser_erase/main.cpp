#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
   // a.insert(a.begin() + 2, 123);
   a.erase(a.begin() + 2);
    for (int &b : a){
        cout << b << endl;
    }
    return 0;
}
