#include <iostream>
using namespace std;
main()
{
float vegetablepriceperKg ;
float fruitpriceperKg ;
int totalKgofvegetables ;
int totalKgoffruits ;
int totalearninginRps ;
cout<< " enter the vegetablepriceperKg " <<endl;
cin>> vegetablepriceperKg ;
cout<< " enter the fruitpriceperKg " <<endl;
cin>> fruitpriceperKg ;
cout<< " enter the totalKgofvegetables " <<endl;
cin>> totalKgofvegetables ;
cout<< "enter the totalKgoffruits " <<endl;
cin>> totalKgoffruits ;
totalearninginRps = 1/1.94 * (vegetablepriceperKg * totalKgofvegetables) + 1/1.94 * (fruitpriceperKg * totalKgoffruits );
cout<< "totalearninginRps=" << totalearninginRps <<endl;
}