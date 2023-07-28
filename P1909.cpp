#include <bits/stdc++.h>
using namespace std;

/*
买n只铅笔 3种包装 只买同一种
买够至少n只铅笔最少需要花费多少钱
商店不允许将铅笔的包装拆开

输入 需要的铅笔数量n
    包装内铅笔的数量 包装的价格

如果需要的铅笔数量刚刚好 n % a[i] == 0
则需要的钱= (n / a[i]) * b[i];
如果除不尽 则 需要的钱则为 (n / a[i] + 1) * b[i]

输出一个整数 最少需要花费的钱
*/
int main(){
    int n;
    int a[3],b[3]; 
    int price[3];
    cin >> n;
    for (int i = 0;i < 3;i ++){
        cin >> a[i] >> b[i];
    if(n % a[i] == 0)
        price[i] = (n / a[i]) * b[i];
    else
        price[i] = (n / a[i] + 1) * b[i];
    }
    sort(price, price + 3);
    cout << price[0] << endl;
    return 0;
}