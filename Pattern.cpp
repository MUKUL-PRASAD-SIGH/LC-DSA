#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
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
void pattern7B (int n)
{
    {
        int k = 1; // Start from 1 star (the first odd number)

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << "*" << "  "; // Print stars with space
        }
        cout << endl;
        k += 2;
       
    }
}}

void pattern8 (int n)
{
    {
        

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " " ; // Print space
        }
        

     
        for(int j = 0; j<(2*i+1); j++) {
            cout << "*"; // Print stars
            }
            
    
        for(int j = 0; j < n-i-1; j++) {
            cout << " "; // Print space
            }
            
            cout << endl;

    }}}





void pattern9(int n)
    {
        {
            
    
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                cout << " " ; // Print stars with space
            }
            int k;
          
          k=n-i;
            for(int j = 0; j<(2*k-1); j++) {
                cout << "*"; // Print stars
                

                }
                
        
            for(int j = 0; j < i; j++) {
                cout << " "; // Print space
                }
                
                cout << endl;
                

    
    
        }}}
    
void pattern9a(int n)
{
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++)
        {
            cout << " " ; // Print stars with space
        }

        for(int j = 0; j < 2*n-2*i-1; j++)
        {
            cout << "*"; // Print stars
        }
        for(int j = 0; j < i; j++)
        {
            cout << " " ; // Print stars with space
            cout << endl;
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
pattern8(n);
}
}
