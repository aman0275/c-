#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> arr;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}

	sort(arr.begin(),arr.begin()+k);
	sort(arr.begin()+k,arr.end(),greater<int>());

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

}