#include <iostream>
using namespace std;
main()
{
int initialvilocity;
int acceleration;
int time;
int finalvilocity;
cout<< " enter initialvilocity " <<endl;
cin>> initialvilocity;
cout<< " acceleration " <<endl;
cin>> acceleration ;
cout<< " enter time " <<endl;
cin>> time;
finalvilocity = acceleration * time + initialvilocity ;
cout<< "finalvilocity="<<finalvilocity <<endl;
}
