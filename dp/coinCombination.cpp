#include<bits/stdc++.h>
using namespace std;

int main (){

int n,x;
cin>>n>>x;
vector<int> coin;
coin.push_back(0);
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    coin.push_back(temp);
}

int dp[n+1][x+1];

for(int i=1;i<=n;i++){
for(int sum=1;sum<=x;sum++){

    if(sum==0){
        dp[i][sum]=1;
    }else{

        int op1 = (coin[i]>sum)?0: dp[i][sum-coin[i]];
        int op2 = (i==1)?0:dp[i-1][sum];
        dp[i][sum]= op1+op2;

    }

}

}
cout<<"ans "<<dp[n-1][x-1]<<endl;

for(int i=1;i<=n;i++){
for(int sum=1;sum<=x;sum++){

    cout<<dp[i][sum]<<" ";

}
cout<<" "<<endl;
}




}



// int coin(iint ind , iint sum )
// {
//     if (ind == n)    return 0;
//     if (sum < 0)       return 0;
//     if (sum == 0)      return 1;
//     if (dp[ind][sum] != -1)  return dp[ind][sum];
//     return dp[ind][sum] = (coin(ind , sum - a[ind]) + coin(ind + 1 , sum)) % mod ;
// }







// LL solve(LL sum) {
//     if (sum == x)
//         return 0;
//     if (sum > x)
//         return INT_MAX;
//     if (dp[sum] != -1)
//         return dp[sum];
//     LL ans = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         ans = min(ans, solve(sum + c[i]) + 1);
//     }
//     return dp[sum] = ans;
// }