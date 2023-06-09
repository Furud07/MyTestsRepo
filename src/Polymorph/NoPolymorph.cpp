/*
 * NoPolymorph.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#include "NoPolymorph.h"

NoPolymorph::NoPolymorph() {
	// TODO Auto-generated constructor stub

}

NoPolymorph &NoPolymorph::instance()
{
	static NoPolymorph noPoly;

	return noPoly;
}

NoPolymorph::~NoPolymorph() {
	// TODO Auto-generated destructor stub
}


int NoPolymorph::example1(int a, int b)
{
	return a + b;
}

double NoPolymorph::example2(int a, double b)
{
	return a;
}

double NoPolymorph::example3(double a, double b)
{
	return a + b;
}


