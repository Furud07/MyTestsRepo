/*
 * NoPolymorph.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef NOPOLYMORPH_H_
#define NOPOLYMORPH_H_

class NoPolymorph {
public:
	virtual ~NoPolymorph();

	static NoPolymorph &instance();


	int example1(int a, int b);
	double example2(int a, double b);
	double example3(double a, double b);

private:

	NoPolymorph();


};

#endif /* NOPOLYMORPH_H_ */
