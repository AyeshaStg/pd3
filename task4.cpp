#include <iostream>
using namespace std;
main()
{
int impostercount;
int playercount;
float chanceofimposter;
cout<< " enter impostercount "<<endl;
cin>> impostercount;
cout<< " enter playercount " <<endl;
cin>> playercount;
chanceofimposter = 100 * impostercount / playercount ;
cout<< "chanceofimposter="<<chanceofimposter <<endl;
}