/*
 * Polymorph.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#include "Polymorph.h"

Polymorph::Polymorph()
{
	// TODO Auto-generated constructor stub
}

Polymorph::~Polymorph()
{
	// TODO Auto-generated destructor stub
}



Polymorph &Polymorph::instance()
{
	static Polymorph poly_;

	return poly_;
}

double Polymorph::example(int a, double b)
{
	return a;
}

int Polymorph::example(int a, int b)
{
	return a + b ;
}

double Polymorph::example(double a, double b)
{
	return a + b ;
}
