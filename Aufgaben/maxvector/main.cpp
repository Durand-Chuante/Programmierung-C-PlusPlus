#include <iostream>
#include <vector>
#include <string>

using namespace std;

int maximum(vector<int> &vec){
    int m = -1;
    for (vector<int>::iterator i=vec.begin(); i != vec.end(); i++){
        if (*i > m){
            m = *i;
        }
    }
   // return m;
}

//using namespace std;

int main()
{
    vector<int> a = {1, 4, 3, 8, 3, 2};
    cout << a << endl;
    cout << maximum(a);

    return 0;
}
