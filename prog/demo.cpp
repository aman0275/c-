#include<bits/stdc++.h>
using namespace std;

int main(){

int n ;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
    int temp;
    cin>>temp;
    arr[i] = temp;
}

int k;
cin>>k;


// yahan se likhiyo

int maxu = 0;
if(k==1){

for (int i = 1; i < n; ++i)
{
    maxu = max(maxu,arr[i]);
}

cout<<maxu;
}


sort(arr,arr + n);


int start = 0;
int end = start+k-1;
int ans = INT_MAX;
int ansindex =0;
for (; end < n; end++,start++)
{
    int tepu = arr[end]-arr[start];
    if(tepu<ans){
        ansindex = start;
        ans = min(arr[end]-arr[start],ans);
    }
}


struct Result res;

int l = 0;
for (int i = ansindex; i < ansindex+k; ++i)
{

  res.output1[l] = arr[i];
  l++;
}





}