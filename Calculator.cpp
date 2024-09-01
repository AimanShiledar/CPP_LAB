#include <iostream>
using namespace std;

//Driver code
int main(){
  char op;
  float num1,num2;
  
  //it allows user to enter operator
  // +,-,*,/
  cin>>op;
  
  //it allows user to enter the operands
  cin>>num1>>num2;
  
  //Switch statement begins
  switch(op){
    //if user Enter +
    case'+':
    cout<<num1 + num2;
    break;
    
    //if user enter-
    case'-':
    cout<<num1-num2;
    break;
    
    //if user enter *
    case'*':
    cout<<num1*num2;
    break;
    
    //if user enter /
    case'/':
    cout<<num1/num2;
    
    //if the operator is other than +,-,* or /
    //error message will display
    default:
    cout<<"Error! Operator is not correct";
    
}
//switch statement ends
    return 0;
}