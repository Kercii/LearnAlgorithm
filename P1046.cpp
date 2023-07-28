#include <bits/stdc++.h>
using namespace std;

/*
30cm高的板凳摘苹果

*/

int main(){
    int a[10];
    int h;
    int ans;
    for(int i = 0;i < 10;i ++)
        cin >> a[i];
    cin >> h;
    for(int i = 0;i < 10;i ++){
        if(a[i] <= h)
            ans++;
        else{
            if(a[i] <= h + 30)
                ans ++;
        }
    }
    cout << ans << endl;
}