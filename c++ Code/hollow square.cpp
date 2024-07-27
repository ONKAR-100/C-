#include<iostream>
using namespace std;
int main()
{
   for(int r=0;r<4;r++)
   {
    if(r==0||r==3)
    {
      for(int c=0;c<4;c++)
      {
         cout<<"*";
      }
    }
    else{
      cout<<"*";
      for(int c=1;c<3;c++)
      {
         cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
   }
}