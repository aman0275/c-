#include<bits/stdc++.h>
using namespace std;


void grphColor(){

int res[v];
bool availaible[v];
res[0]=0;
for (int i = 1; i < v; ++i)
{
    res[i]=-1
}
for (int i = 0; i < v; ++i)
{
    availaible[i]= false;

}




for (int i = 0; i < v; ++i)
{
    for(auto x:g[i]){
        if(res[x]!=-1){
        availaible[res[x]]=true;
        }
    }

    int cr;
    for (int cr = 0; cr < v; ++cr)
    {
        if(availaible[cr]==false){
            break;
        }
    }



    res[i]= cr;
    cn=max(cn,cr+1);

    for(auto x:g[i]){
        if(res[x]!=-1){
            availaible[res[x]]=false;
        }
    }


}




}