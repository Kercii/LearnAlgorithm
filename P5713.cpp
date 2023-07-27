#include <bits/stdc++.h>
using namespace std;
/*
    自己电脑配置 5min/1题
    团队上传题目 3min/1题 +11min
*/
int main(){
    int n;
    cin >> n;
    int a = n * 5;
    int b = n * 3 + 11;
    if (a > b)
        cout << "Luogu" << endl;
    else
        cout << "Local" << endl;
    return 0;
}