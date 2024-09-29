#include <iostream>
using namespace std;
main()
{
string moviename ;
int adultticketprice ;
int childticketprice ;
int Noofadultticketsold ;
int Noofchildticketsold ;
float percentageofcharity ;
int totalgeneratedamount ;
int donationtocharity ;
int remainingamount ;
cout<< " Enter the moviename " <<endl;
cin>> moviename ;
cout<< "Enter the adultticketprice " <<endl;
cin>> adultticketprice ;
cout<< " Enter the childticketprice " <<endl;
cin>> childticketprice ;
cout<< " Enter the Noofadultticketsold " <<endl;
cin>> Noofadultticketsold ;
cout<< " Enter the Noofchildticketsold "<<endl;
cin>> Noofchildticketsold ;
cout<<  " enter the percentageofcharity " <<endl;
cin>> percentageofcharity ;
totalgeneratedamount = adultticketprice * Noofadultticketsold + childticketprice * Noofchildticketsold ;
cout<< "totalgeneratedamount="<<totalgeneratedamount <<endl;
donationtocharity = percentageofcharity * totalgeneratedamount / 100;
cout<<  "donationtocharity=" << donationtocharity <<endl;
remainingamount = totalgeneratedamount - donationtocharity ;
cout<<" remainingamount= "<< remainingamount  <<endl;
}
