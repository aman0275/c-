#include<bits/stdc++.h>
using namespace std;
int main(){

 	int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
	int n = sizeof(a)/ sizeof(a[0]);
	
	//bubble sort
	// for optimization we can use isSwap variable

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < n-i; ++j)
		{
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;


	// Selection Sort


	int b[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 ,89};
	n = sizeof(b)/ sizeof(b[0]);

	for (int i = 0; i < n; ++i)
	{
		int mini = i;
		for (int j = i; j < n; ++j)
		{
			if(b[j]<b[mini]){
				mini = j; 
			}
		}
		swap(b[i],b[mini]);
	}

	for (int i = 0; i < n; ++i)
		{
			cout<<b[i]<<" ";
		}
	cout<<endl;
}