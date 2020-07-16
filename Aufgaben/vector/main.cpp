#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> names;

    while(!cin.eof()){
        string name;
        cin >> name;
        names.push_back(name);

        cout << names.size() << ". Teilenhmer " << name << endl;
    }


    return 0;
}
