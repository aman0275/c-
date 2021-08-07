#include<bits/stdc++.h>
using namespace std;

long long counta(int n,vector<long long>&dp){

    if(n==0){
        return 1;
    }
    
    if(dp[n]!=0){
        return dp[n];
    }


    for(int i =1;i<=n || i<=6;i++){
        if(i>n)break;
        dp[n]= (dp[n]+counta(n-i,dp))%100000007;
    }

    return dp[n];

}


int main (){


int n;
cin>>n;
vector<long long> dp(n+1,0); 
long long ans = counta(n,dp);
cout<<ans<<endl;
}
