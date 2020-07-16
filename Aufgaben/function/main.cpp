#include <iostream>

using namespace std;
int maxi(int a, int b){
    cout << "Function mit 2 Parameter!" << endl;
    if (a > b){
        return a;
    }
    else
        return b;
}
int maxi (int a, int b, int c){
    cout << "\"Function mit 3 Parameter!\"" << endl;
    int d;
    if (a > b){
        d = a;
    }
    else {
        d = b;
    }
    if (d > c){
        return d;
    }
    else
        return c;
}

int maxi (int a, int b, int c, int d){
    cout << "Function mit 4 Parameter!" << endl;
    int e, f;
    if (a > b){
        e = a;
    }
    else{
        e = b;
    }
    if (e > c){
      f = e;
    }
    else{
        f = c;
    }
    if (f > d ){
        return f;
    }
    else{
        return d;
    }
}
int main()
{
    cout << maxi(13, 3, 23, 4) << endl;
    return 0;
}
