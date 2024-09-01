#include <iostream>
using namespace std;

int main(){
 int a;
 int b;
 int c;
 cout<<"Put any three numbers: 65 57 94"<<endl;
 cin>>a;
 cin>>b;
 cin>>c;
 if(a>=b&&a>=c)
 {
   cout<<"The largest number is: "<<a;
    }
    if (b>=a&&b>=c)
    {
      cout<<"The Largest number is: "<<b;
    }
    if (c>=a&&c>=b)
    {
      cout<<"The Largest number is: "<<c;
    }
  
  return 0;
}