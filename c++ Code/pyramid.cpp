#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int r=0;r<n;r++)
    {
        //space
        for(int c=0;c<n-r-1;c++)
        {
            cout<<" ";
        }
        //stars
        for(int c=0;c<r+1;c++)
        {
            cout<<"* ";//space after start for printing space in stars 
        }
        cout<<endl;
    }
}