#include <bits/stdc++.h>
using namespace std;
/*
1.是偶数 num % 2 == 0；
2.大于4且不大于12 num > 4 && num <= 12
*/
int main(){
    int num;
    int a = 0,b = 0,c = 0,d = 0;
    cin >> num;
    if(num % 2 == 0 && (num > 4 && num <= 12))
        a = 1;
    if(num % 2 == 0 || (num > 4 && num <= 12))
        b = 1;
    if(num % 2 == 0 ^ (num > 4 && num <= 12))
        c = 1;
    if(num % 2 != 0 && (num <= 4 ^ num > 12))
        d = 1;

    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}