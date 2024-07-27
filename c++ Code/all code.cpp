#include <iostream>
using namespace std;
int main() {
 
  
  

  for (int i = 100; i > 0; i = i / 2) {
    cout << i << endl;
  }

  for(int i=0;i<5;i++)
    {
      cout<<"*"<<endl;
    }

  for(int r=0;r<6;r++)
    {
      for(int c=0;c<2;c++)
        {
          cout<<"*";
        }
      cout<<"\n";
    }

  for (int r = 0; r < 3; r++) {
    if (r == 0 || r == 2) {
      for (int c = 0; c < 4; c++) {
        cout << "*";
      }
    } else {
      cout << "*";
      for (int c = 0; c < 2; c++)

      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

  for (int r = 0; r < 4; r++) {
    if (r == 0 || r == 3) {
      for (int c = 0; c < 5; c++) {
        cout << "*";
      }
    } else {
      cout<<"*";
    }
    cout<<endl;
  }

  for(int r=0;r<4;r++)
    {
      if(r==0||r==3)
      {
        for(int c=0;c<4;c++)
          {
            cout<<"*";
          }
      }
      else
      {
        for(int c=0;c<3;c++)
          {
            cout<<" ";
          }
        cout<<"*";
      }
      cout<<endl;
    }

  for(int r=0;r<5;r++)
    {
      if(r==0)
      {
        for(int c=0;c<5;c++)
          {
            cout<<"*";
          }
      }
      else
      {
        cout<<"  ";
        for(int c=0;c<1;c++)
          {
            cout<<"*";
          }
        cout<<"  ";
      }
      cout<<endl;
    }

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  int n;
  cin>>n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<i+1;j++)
        {
          cout<<j+1;
        }
      cout<<endl;
    }

  int n;
  cin>>n;
  for (int i=0;i<n;i++)
    {
      for(int j=0;j<n-i;j++)
        {
          cout<<j+1;
        }
      cout<<endl;
    }

  chat gpt code for star pyramid
   int n;
       cin >> n;
       for (int i = 1; i <= n; ++i) {
           // Print spaces
           for (int j = 1; j <= n - i; ++j) {
               cout << " ";
           }
           // Print stars
           for (int k = 1; k <= 2 * i - 1; ++k) {
               cout << "*";
           }
           // Move to the next line
           cout << endl;
       }
       return 0;

  int n;
    cin>>n;
    for(int r=n;r>0;r--)
        {
            for(int c=0;c<r;c++)
                {
                    cout<<"*";
                }
            cout<<endl;
        }

  int n;
  cin >> n;
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < 2 * r + 1; c++) {
      cout << "*";
    }
    cout << endl;
    }

  int n;
  cin>>n;
  for(int r=n;r>0;r--)
    {
      cout<<r<<endl;
    }
  cout<<endl;
  
}
