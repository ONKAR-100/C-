#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n*2;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}