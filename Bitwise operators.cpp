#include <iostream>
using namespace std;

int main() 
{
    int a=2,b=4;
    //Binary AND operator
    cout<<"a&b is "<<(a & b)<< endl;
    //binary OR operator
    cout<<"a|b is "<<(a|b)<< endl;
    //binary XOR operator
    cout<<"a^b is "<<(a^b)<<endl;
    //left shift operator
    cout<<"a<<1 is "<<(a<<1)<<endl;
    //right shift operator
    cout<<"a>>1 is "<<(a>>1)<<endl;
    //one's complement operator 
    cout<<"~ a is "<<(~a)<<endl;
    return 0;
}