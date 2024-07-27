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
            if(c==n||r==n-1||c==r+1||r==0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}