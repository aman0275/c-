#include<bits/stdc++.h>
using namespace std;

class A
{
    private: int i;
};
  
class B :  A
{
    private: int j;
};
  
main()
{
  A a;
  B b;
  cout<<(sizeof(a));
  cout<<(sizeof(b));
}