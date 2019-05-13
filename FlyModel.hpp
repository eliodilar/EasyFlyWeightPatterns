/*
 * FlyModel.hpp
 *
 *  Created on: 14 janv. 2019
 *      Author: chapoul
 */

#ifndef FLYMODEL_HPP_
#define FLYMODEL_HPP_

#include <string>
#include<stdlib.h>
#include <iostream>

using namespace std;

class FlyModel {



protected:

	string Name;

	string size;

	string compagny;

public:
	virtual void coutPlane()=0;

	FlyModel(){};

	virtual ~FlyModel(){};

};



#endif /* FLYMODEL_HPP_ */
