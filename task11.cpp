#include <iostream>
using namespace std;
main()
{
int age ;
int moves ;
int Noofyearsinsinglehouse ;
cout<< " enter your age " <<endl;
cin>> age ;
cout<< "enter the times he moves " <<endl;
cin>> moves ;
Noofyearsinsinglehouse = age / (moves + 1) ;
cout<< " Noofyearsinsinglehouse = "<< Noofyearsinsinglehouse ;
}