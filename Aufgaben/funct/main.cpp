#include <iostream>

using namespace std;

int max(int n, int m){

    if (n > m){
        return n;
    }
    else
        return m;
}

double max(double n, double m){

    if (n > m){
        return n;
    }
    else
        return m;
}




int main()
{
    cout << max(12, 21) << endl;
    cout << f(2.5, 21.32) << endl;



    return 0;
}
