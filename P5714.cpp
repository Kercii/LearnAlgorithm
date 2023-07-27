#include <bits/stdc++.h>
using namespace std;

int main(){
    double m,h;
    cin >> m >> h;
    double a = m / (h * h);
    if(a < 18.5)
        cout << "Underweight" << endl;
    else if (a >= 18.5 && a < 24)
        cout << "Normal" << endl;
    else if (a >= 24)
        cout << a << endl << "Overweight" << endl;
    return 0;
}