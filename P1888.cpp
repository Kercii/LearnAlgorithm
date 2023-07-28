#include<iostream>
#include<algorithm>
using namespace std;
 
int gcd(int x, int y) 
{	
    int z = y;
    while(x%y!=0)
    {
        z = x%y;
        x = y;
        y = z;	
    }
    return z;
}

int main()
{
    int MC[3],i; 
    for (int i=0;i<3;i++) cin>>MC[i];
    sort(MC,MC+3); 
    cout<<MC[0]/gcd(MC[0],MC[2])<<"/"<<MC[2]/gcd(MC[0],MC[2]);
    return 0;
}