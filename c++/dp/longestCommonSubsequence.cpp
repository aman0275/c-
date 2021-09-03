//   						lcs("AXYT", "AYZX")
//                        /                 \
//          lcs("AXY", "AYZX")            lcs("AXYT", "AYZ")
//          /           \                   /               \
// lcs("AX", "AYZX") lcs("AXY", "AYZ")   lcs("AXY", "AYZ") lcs("AXYT", "AY")


#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int lcs(string X , string Y, int m, int n){
	if(m==-1 || n==-1){
		return 0;
	}
	if(dp[m][n]!=-1)return dp[m][n];


	if(X[m] == Y[n]){
		return dp[m][n] = 1 + lcs(X,Y,m-1,n-1);
	}

	int a = lcs(X,Y,m-1,n);
	int b = lcs(X,Y,m,n-1);

	return dp[m][n] = max(a,b);
}


int main (){
  	string X = "AGGTAB";
    string Y = "GXTXAYB";
    int m = X.length();
    int n = Y.length();
    memset(dp, -1, sizeof(dp));
    cout << "Length of LCS: " << lcs(X, Y, m-1, n-1);
 
    return 0;
 
}