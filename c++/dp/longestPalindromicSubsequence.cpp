#include<bits/stdc++.h>
using namespace std;



int main (){
string str;
cin>>str;

int len = str.length();
int arr[len][len];
memset(arr,-1,sizeof(arr));


for (int g = 0; g < len; g++)
{
	for (int i = 0,j=g; j < len; j++,i++)
	{
		if(g==0){
			arr[i][j] =1;
		}else if(g==1){
			if(str[i]==str[j]){
				arr[i][j]=2;
			}else{
				arr[i][j]=1;
			}
		}else{
			if(str[i]==str[j]){
				arr[i][j] = arr[i+1][j-1]+2;
			}else{
				arr[i][j] = max(arr[i][j-1],arr[i+1][j]);
			}
		}
	}
}



for (int i = 0; i < len; ++i)
{
	for (int j = 0; j < len; ++j)
	{
		cout<<arr[i][j]<<" ";

	}
	cout<<endl;

}

}



