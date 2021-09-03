#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Map --"<<endl;

	string s = "hello";
	unordered_map<string,int>mp;
	mp["aman"]= 14;

	mp["aman"]++;
	mp["anay"]++;


	for (auto i = mp.begin(); i!=mp.end(); i++)
	{
		cout<<i->first<<" -> "<<i->second;
		cout<<endl;
	}
	cout<<"Set --"<<endl;

	unordered_set<int> st;
	st.insert(5);
	st.insert(9);
	

	for (auto i = st.begin(); i!=st.end(); i++)
	{
		cout<<*i;
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;



}

