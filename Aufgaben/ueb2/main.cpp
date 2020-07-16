#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b;
    cout <<"Alter eigeben" << endl;
    cin >> a;
    cout << "Wie Alt ist dein Führerschein?" << endl;
    cin >> b;
    double c;
    cout <<"Promille Alcool im Blut eingeben. Z:B 0.2" << endl;
    cin >> c;
    if ((a < 21 || b <= 2) && c == 0.0){
        cout << " Sehr gut! Du muss komplet nuechtern beim Auto fahren sein." << endl;
    }
    else{
        if ((a <21 || b <= 2) && c > 0.0){
            cout << "Du Solltest Kein Promil Alcool im Blut haben! Wir nehmen Ihre Führeschein weg." << endl;
        }
        else{
                if (a >= 21 && b > 2 && c <= 0.3){
                    cout << "Sehr Gut. Sie duerfen Maximal 0.3 Promil im Blut haben.\n";

                }
                else
                if(a > 21 && b >2 && c > 0.3){
                        cout << "Du Solltest max 0.3 Promil Alcool im Blut haben! Wir nehmen Ihre Führeschein weg." << endl;
                }

        }


    }

    return 0;
}
