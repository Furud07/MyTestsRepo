/*
 * Module1.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#include "Module1.h"

#include <iostream>

Module_1 *Module_1::modul_ = nullptr;

Module_1::Module_1() {
	// TODO Auto-generated constructor stub

}

Module_1::~Module_1() {
	// TODO Auto-generated destructor stub
}


Module_1 *Module_1::instance()
{
	if (modul_ == nullptr)
		modul_ = new Module_1();

	return modul_;
}


void Module_1::function1(int a)
{
	number = a;
	fprintf(stdout, "module 1\n");
}

