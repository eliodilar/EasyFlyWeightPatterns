//============================================================================
// Name        : Flyweight.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "PhysicalAircraft.hpp"
#include <iostream>
using namespace std;

Boeing * FlyweightFactory::NewBoeing;

Bombardier * FlyweightFactory::NewBombardier;

int main() {

cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

PhysicalAircraft one = PhysicalAircraft(FlyweightFactory::getPlane(380), 10048, 500 );

PhysicalAircraft two = PhysicalAircraft(FlyweightFactory::getPlane(380), 20048, 450 );

PhysicalAircraft three = PhysicalAircraft(FlyweightFactory::getPlane(440), 150, 700 );

PhysicalAircraft four = PhysicalAircraft(FlyweightFactory::getPlane(440), 160, 455 );

one.coutPlane();

two.coutPlane();

three.coutPlane();

four.coutPlane();

cout<< "add:" <<&one <<endl;
cout<< "add:" <<&two <<endl;
cout<< "add:" <<&three <<endl;
cout<< "add:" <<&four <<endl;

cout<<"rgg: "<< sizeof(one)<<endl;
	return 0;
}
