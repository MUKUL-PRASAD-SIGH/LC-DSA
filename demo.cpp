#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{for(int i=0;i<n;i++)
    
     { for(int j=0;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        }


void pattern2(int n)
{for(int i=1;i<=n;i++)
    
    { for(int j=1;j<=i;j++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
       }

void pattern3(int n)
{
    {for(int i=1;i<=n;i++)
    
        { for(int j=1;j<=i;j++)
           {
               cout<<j;
           }
           cout<<endl;
       }
           }
}
void pattern4(int n)
{
    {for(int i=1;i<=n;i++)
    
        { for(int j=1;j<=i;j++)
           {
               cout<<i<<"  ";
           }
           cout<<endl;
       }
           }
}

void pattern5(int n)
{
    {for(int i=0;i<n;i++)
    
        { for(int j=0;j<n-i;j++)
           {
               cout<<"*"<<"  ";
           }
           cout<<endl;
       }
           }
}

void pattern6(int n)
{
    {for(int i=1;i<=n;i++)
    
        { for(int j=1;j<=n-i+1;j++)
           {
               cout<<j<<"  ";
           }
           cout<<endl;
       }
           }
}

void pattern7(int n)
{
    {
        int k=0;
        for(int i=0;i<n;i++)
        { 
            
            for(int j=k;j<=i;j++)
            
           {
               cout<<"*"<<"  ";
           }
           cout<<endl;
           k--;
       }
    }
}
int main()
{
int t;
cin>>t;
for (int k=0;k<t;k++)
{
int n;
cin>>n;
pattern7(n);
}
  
    
}