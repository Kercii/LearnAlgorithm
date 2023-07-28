#include <bits/stdc++.h>
using namespace std;
/*
150以下按 0.4463/1记
151-400 按0.4663/1记
401以上 按0.5663/1记

输入 用电总计
输出 应缴电费 保留小数点后1位

*/

int main(){
    int exp;
    float price;
    cin >> exp;
    if(exp <= 150)
        price = exp * 0.4463;
    else if (exp > 150 && exp <= 400)
        price = (exp - 150) * 0.4663 + 150 * 0.4463;
    else price = ( exp - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
    cout << fixed << setprecision(1) << price << endl;
    return 0;
}