#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //ofstream file ("/home/durand/Schreibtisch/output.txt");
    //file << "Hello Welt!" << endl;

    ifstream file ("/home/durand/Schreibtisch/fichier.txt");
    if ( file.is_open()){

        //string b;

        while (!file.eof()){
            string a;
            file >> a;
            //file >> b;

            cout << a << endl;
            //cout << b << endl;
        }
        file.close();
    }
    else
        cout <<"Datei konnte nicht gelesen werden" << endl;
        return 0;
}
