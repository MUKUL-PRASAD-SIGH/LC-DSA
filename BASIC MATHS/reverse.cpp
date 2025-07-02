
#include <iostream>
using namespace std;
    int reverseNumber(int n) {
      
      int revno=0;
      
      while (n>0)
      {int a=n%10;
      n=n/10;
      revno=revno*10+a;
      }
      return revno;

    }
int main() {
    int n;
    cout<<"Enter a number "  ;
    cin>>n;
    cout<<"Reverse of the number is "<<reverseNumber(n);
    return 0;
}