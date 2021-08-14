#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;

	// p1
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < i; ++j){
			cout<<"* ";
		}
		cout<<endl;
	}

cout<<endl;
cout<<endl;

	//p2
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if(j<i){
				cout<<"  ";
			}else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
cout<<endl;
cout<<endl;

	//p3

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j <n-1-i ; ++j)
	{
		cout<<"  ";
	}
	for (int j = 0; j < i; ++j)
	{
		cout<<"   *";
	}
	cout<<endl;
}
cout<<endl;
cout<<endl;

	//p4
for (int i = 0; i < n; ++i){
		for (int j = 0; j < i; ++j){
			cout<<"* ";
		}
		cout<<endl;
	}
for (int i = n; i > 0 ; i--){
		for (int j = 0; j < i; ++j){
			cout<<"* ";
		}
		cout<<endl;
	}


cout<<endl;
cout<<endl;

	//p5	

	return 0;
}