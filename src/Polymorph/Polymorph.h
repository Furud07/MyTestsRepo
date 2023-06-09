/*
 * Polymorph.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef EXAMPLE_POLYMORPH_H_
#define EXAMPLE_POLYMORPH_H_



class Polymorph
{
public:

	static Polymorph &instance();

	int example(int a, int b);

	double example(int a, double b);

	double example(double a, double b);


	virtual ~Polymorph();

private:
	Polymorph();

//	static Polymorph* poly_;
};

#endif /* EXAMPLE_POLYMORPH_H_ */
