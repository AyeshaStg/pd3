#include <iostream>
using namespace std;
main()
{
int fourdigitNo ;
int digit1 ;
int digit2 ;
int digit3 ;
int digit4 ;
int sum ;
cout<< " enter the fourdigitNo " <<endl;
cin>> fourdigitNo ;
digit1 = fourdigitNo%10 ;
cout<< "digit1= "<<digit1 <<endl;
digit2 = (fourdigitNo/10)%10 ;
cout<< "digit2=" << digit2 <<endl;
digit3 = (fourdigitNo/100)%10 ;
cout<< "digit3="<<digit3 <<endl;
digit4 = (fourdigitNo/1000)%10 ;
cout<< "digit4= "<<digit4 <<endl;
sum = digit1 + digit2 + digit3 + digit4 ;
cout<< "sum=" << sum <<endl;
}