/*
 * PhysicalAircraft.hpp
 *
 *  Created on: 14 janv. 2019
 *      Author: chapoul
 */

#ifndef PHYSICALAIRCRAFT_HPP_
#define PHYSICALAIRCRAFT_HPP_

#include "FlyWeightFactory.hpp"

class PhysicalAircraft{

private:

	FlyModel * NewAircraftType;

	int SerialNumber, Passenger;

public:

	PhysicalAircraft(FlyModel * NewType, int SerialNum, int PassengerNumber){

		NewAircraftType = NewType;

		SerialNumber = SerialNum;

		Passenger = SerialNum;

	};

	void coutPlane(){

		NewAircraftType->coutPlane();
		cout<< "serial num: "<< SerialNumber<<endl;
		cout<< "Number of passenger: "<< Passenger<<endl;
		cout<< "----------------------------"<<endl;

	}

};



#endif /* PHYSICALAIRCRAFT_HPP_ */
