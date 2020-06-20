#include <iostream>
using namespace std;

int main ()
{
double pizzaDiameter;
int numSlices;
double area;

cout << "Enter pizza diameter: " ;
cin >> pizzaDiameter;

area = (pizzaDiameter/2.0) * (pizzaDiameter/2.0) * 3.14159;

numSlices = area/14.125;

cout << numSlices << " slices ";
}
