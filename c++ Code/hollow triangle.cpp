#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int r=0;r<n;r++)
   {
        for(int c=0;c<=r;c++)
        {
            if(r==n-1||c==0||c==r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
   }
}