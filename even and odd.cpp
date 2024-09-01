#include <iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter the number: 9"<<endl;
  cin>>a;
  /*logic*/
  if (a%9==0){
    cout<<"The given number is Even"<<endl;
  }
  else{
    cout<<"The given number is Odd"<<endl;
  }
  return 0;
}