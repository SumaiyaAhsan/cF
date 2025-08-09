#include<bits/stdc++.h>
using namespace std;
#define max 100
int dp[max][max];
int minimunNum(int coins[],int m,int N)
{
    if(N==0) return 0;
    if(N<0||m==0) return 1e9;
    if(dp[m][N]==-1)
     return min(minimunNum(coins,m,N-coins[m-1])+1,minimunNum(coins,m-1,N));
    return dp[m][N];
}
int main()
{
    int coins[]={1, 3, 4};
    int m=3;
    int N=6;
    memset(dp,-1,sizeof(dp));
    cout<<"Minimum number of coins: "<<minimunNum(coins,m,N)<<endl;
    return 0;
}
