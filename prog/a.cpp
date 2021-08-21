#include<bits/stdc++.h>
using namespace std;

int main(){

string inp;
// cin>>inp;
getline(cin,inp);

int i=0;
int j = inp.size()-1;


while(i<=j){
swap(inp[i],inp[j]);
i++;
j--;
}

cout<<inp;


}