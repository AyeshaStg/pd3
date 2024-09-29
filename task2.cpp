#include <iostream>
using namespace std;
main()
{
int minutes;
int framepersecond;
int seconds;
int frames;
cout<< "enter the number of minutes" <<endl;
cin>> minutes;
seconds = minutes * 60 ;
cout<< " enter framepersecond " <<endl;
cin>> framepersecond;
frames =seconds * framepersecond ;
cout<< "frames="<<frames <<endl;  
}