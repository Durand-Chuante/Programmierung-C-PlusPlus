#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

    int calculatewinner(const vector<vector<int>> &field){

     for (int i = 0; i <= 2; i++){
        if (field.at(i).at(0) != 0 &&
            field.at(i).at(0) == field.at(i).at(1) &&
            field.at(i).at(0) == field.at(i).at(2)){

            return field.at(i).at(0) ;
        }
    }
    for (int i = 0; i<= 2; i++){
        if (field.at(0).at(i) != 0 &&
            field.at(0).at(i)  == field.at(1).at(i)  &&
            field.at(0).at(i)  == field.at(2).at(i) ){

            return field.at(0).at(i) ;
        }
    }
    if (field.at(0).at(0)  != 0 &&
        field.at(0).at(0)  == field.at(1).at(1)  &&
        field.at(0).at(0)  == field.at(2).at(2)){

        return field.at(0).at(0) ;
    }
     if (field.at(0).at(2)  != 0 &&
         field.at(0).at(2)  == field.at(1).at(1)  &&
         field.at(0).at(2)  == field.at(2).at(0) ){

        return field.at(0).at(2) ;
    }
}
int main()
{
    vector<vector<int>> field{
        {4, 1, 7},
        {1, 7, 3},
        {7, 2, 2}
    };

    int winner = calculatewinner(field);
    cout << winner << " hat das spiel gewonnen." << endl;

    for (const auto &b : field ){
        cout << " | ";
        for (const auto &c : b){
            cout << c << " | ";
        }
        cout << endl;

    }

    //cout  << b.at(0) << " | " << b.at(1) << " | " << b.at(2) << endl;
    return 0;
}
