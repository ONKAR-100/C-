#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int r=0;r<n;r++)
    {
      for(int c=n;c>r;c--)
      {
        cout<<" ";
      }
      for(int c=0;c<r+1;c++)
      {
        cout<<"* ";
      }
      cout<<endl;
    }
     for(int r=0;r<n;r++)
     {
        for(int c=0;c<r;c++)
      {
        cout<<" ";
      }
      for(int c=n;c>r;c--)
      {
        cout<<" *";
      }
      cout<<endl;
     }
}