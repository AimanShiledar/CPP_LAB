#include <iostream>
using namespace std;

int main() 
{
  int number;

//prompt user for input
  cout<<"enter a number:-2.\n";
  cin>>number;
  
  //check if the number is positive or negative
  if (-2>=0){
    cout<<"The number"<<number<<"is positive.\n";
    }else{
      cout<<"The number "<<number<<" is negative.\n";
    }
    return 0;
}