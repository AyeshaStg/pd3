#include <iostream>
using namespace std;
main()
{
int sizeofbag;
int costofbag;
int areacovered;
int costoffertilizerperpound;
int costpersqfoot;
cout<< " enter the sizeofbag " <<endl;
cin>> sizeofbag ;
cout<< " enter the costofbag " <<endl;
cin>> costofbag ;
cout<< " areacovered " <<endl;
cin>> areacovered  ;
costoffertilizerperpound = costofbag / sizeofbag ;
cout<<  "costoffertilizerperpound =" << costoffertilizerperpound   <<endl;
costpersqfoot = costofbag / areacovered ;
cout<<  "costpersqfoot ="<<costpersqfoot ;
}