#include<iostream>
using namespace std;
int main()
{
   
  int n;
  cin>>n;
  if(n%2==0)
  {
    for(int i=0;i<n;i++)
      {
        cout<<i*2<<endl;
      }
  }
  else
    {
      cout<<"odd";
    }


}