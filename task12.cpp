#include <iostream>
using namespace std;
main()
{
int Noofsqmeter;
int height;
int width ;
int areaofsinglewall;
int Noofwalls ;
cout<< " enter the Noofsqmter " <<endl;
cin>> Noofsqmeter ;
cout<< " enter the value of height " <<endl;
cin>> height ;
cout<< " enter the value of width " <<endl;
cin>> width ;
areaofsinglewall = height * width ;
cout<< "areaofsinglewall=" << areaofsinglewall <<endl;
Noofwalls = Noofsqmeter / areaofsinglewall ;
cout<< "Noofwalls=" << Noofwalls<<endl;
}