/*
 * FlyWeightFactory.hpp
 *
 *  Created on: 14 janv. 2019
 *      Author: chapoul
 */

#ifndef FLYWEIGHTFACTORY_HPP_
#define FLYWEIGHTFACTORY_HPP_

#include "Airplane.hpp"

class FlyweightFactory{

private:

	static Boeing * NewBoeing;

	static Bombardier * NewBombardier;

public:

	static FlyModel * getPlane ( int Number){

		if (Number == 380){

			if(NewBoeing == NULL){

				NewBoeing = new Boeing();

			}

			return NewBoeing;

		}
		else if (Number == 440){

			if(NewBombardier == NULL){

				NewBombardier = new Bombardier();

			}

			return NewBombardier;

		}

	}

};




#endif /* FLYWEIGHTFACTORY_HPP_ */
