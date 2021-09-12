#include<bits/stdc++.h>
using namespace std;


int main(){
	string str;
	getline(cin,str);

	char a;
	cin>>a;

	while(str.find(a)!=string::npos){
		str.erase(str.find(a),1);
	}

	cout<<str;

}