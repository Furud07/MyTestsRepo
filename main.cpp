//============================================================================
// Name        : tests.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Polymorph/Polymorph.h"
#include "Polymorph/NoPolymorph.h"

#include "abstraction/Module1.h"
#include "abstraction/Module2.h"

#include "SmartPointer.h"



using namespace std;


int main()
{
	fprintf(stderr, "POLY : \n");
	Polymorph poly = Polymorph::instance();
	fprintf(stderr, "1 -> %d\n", poly.example(1, 2));
	fprintf(stderr, "2 -> %f\n", poly.example(1, 2.2));
	fprintf(stderr, "3 -> %f\n", poly.example(1.0, 2.2));

	fprintf(stderr, "-----------------------------------------------------------\n\n\n");

	fprintf(stderr, "NO POLY : \n");
	NoPolymorph noPoly = NoPolymorph::instance();

	fprintf(stderr, "1 -> %d\n", noPoly.example1(1, 2));
	fprintf(stderr, "2 -> %f\n", noPoly.example2(1, 2.2));
	fprintf(stderr, "3 -> %f\n", noPoly.example3(1.0, 2.2));
	fprintf(stderr, "-----------------------------------------------------------\n\n\n");

	fprintf(stderr, "ABSTRACTION : \n");
	ModuleAbstract* module = Module_1::instance();
	module->function1(15);
	fprintf(stderr, "%d\n", module->communFunc());
	fprintf(stderr, "-----------------------------------------------------------\n\n\n");
	delete module;

	module = Module_2::instance();
	module->function1(20);
	fprintf(stderr, "%d\n", module->communFunc());
	fprintf(stderr, "-----------------------------------------------------------\n\n\n");
	delete module;

	fprintf(stderr, "SMART POINTER:\n");
	SmartPointer * ptrObj = new SmartPointer();

	ptrObj->use_unique_ptr();
	ptrObj->use_share_ptr();
	delete ptrObj;
}



