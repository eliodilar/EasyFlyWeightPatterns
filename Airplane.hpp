/*
 * Airplane.hpp
 *
 *  Created on: 14 janv. 2019
 *      Author: chapoul
 */

#ifndef AIRPLANE_HPP_
#define AIRPLANE_HPP_

#include "FlyModel.hpp"

class Boeing : public FlyModel{

private:

	string Name;

	string size;

	string compagny;

public:

	Boeing(){

		Name = "A380";

		size = "70 Mètres";

		compagny = "Air france";


	};

	~Boeing(){};


	void coutPlane(){

		cout<< "Plane model: "<<Name<<endl;

		cout<< "Plane size: "<<size<<endl;

		cout<< "Plane compagny: "<<compagny<<endl;


	}

};


class Bombardier : public FlyModel{

private:

	string Name;

	string size;

	string compagny;

public:

	Bombardier(){

		Name = "A440";

		size = "5 Mètres";

		compagny = "ryan air";


	};

	~Bombardier(){};


	void coutPlane(){

		cout<< "Plane model: "<<Name<<endl;

		cout<< "Plane size: "<<size<<endl;

		cout<< "Plane compagny: "<<compagny<<endl;


	}


};



#endif /* AIRPLANE_HPP_ */
