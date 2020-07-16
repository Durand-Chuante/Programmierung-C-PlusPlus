#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>

using namespace std;
void withpointer(int *p){
    cout << *p << endl;
    p++;
    cout << p[4] << endl;
}
void withreference(const vector<int> &r){
    for (int element : r){
        cout << element << endl;
    }
}

int main()
{
    const int p_leng = 4;
    int p[p_leng] = {1, 3, 4, 5};
    withpointer(p);
    //withreference(p);

    vector<int> r ={1, 2, 3, 4, 5};
    withreference(r);

    return 0;
}
