#include <bits/stdc++.h>
using namespace std;
/*
每日250公里 周末休息
输入x 周几 n 共n天
输出 累计路程
*/

int main(){
    int x,n;
    int r = 0;
    cin >> x >> n;
    for(int i = 0;i < n;i ++)
    {
        if((x != 6) && (x != 7))
            r += 250;
        if(x == 7)
            x = 1;
        else
            x++;
    }
    cout << r << endl;
    return 0;
}