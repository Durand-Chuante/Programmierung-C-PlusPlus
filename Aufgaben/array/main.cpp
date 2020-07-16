#include <iostream>
#include <string>
#include <array>

using namespace std;

int calculatewinnnwe(const array<array<int, 3>, 3> &field){
     for (int i = 0; i <= 2; i++){
        if (field[i][0] != 0 && field[i][0] == field[i][1] && field[i][0] == field[i][2]){
            return field[i][0];
        }
    }
    for (int i = 0; i<= 2; i++){
        if (field[0][i] != 0 && field[0][i] == field[1][i] && field[0][i] == field[2][i]){
            return field[0][i];
        }
    }
    if (field[0][0] != 0 && field[0][0] == field[1][1] && field[0][0] == field[2][2]){
        return field[0][2];
    }
     if (field[0][2] != 0 && field[0][2] == field[1][1] && field[0][2] == field[2][0]){
        return field[0][2];
    }
}
int main()
{
    array<array<int, 3>, 3> field;
    field[0] = {4, 1, 37};
    field[1] = {1, 4, 3};
    field[2] = {2, 2, 2};

    int winner = calculatewinnnwe(field);
    cout << winner << " hat das spiel gewonnen." << endl;

    for (int b = 0; b <= 2; b++){

        cout  << field[b][0] << " | " << field[b][1] << " | " << field[b][2] << endl;
    }


    return 0;
}
