#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> names = {"max", "bbn", "aaa", "hgz", "monika"};

    sort(names.begin(), names.end());

    for (const string &name : names){
        cout << name << endl;
    }

    /*for (vector<string>::iterator i = name.begin(); i < name.end(); i++){
        cout << *i << endl;
    }*/
    /*vector<string>::iterator j =name.end();
    vector<string>::iterator i =name.begin();

    //i++;
    cout << *i << endl;
    cout << *j << endl;
*/

    return 0;
}
