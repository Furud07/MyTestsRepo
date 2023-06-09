/*
 * Module2.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#include "Module2.h"

#include <iostream>

Module_2* Module_2::modul_ = nullptr;

Module_2::Module_2() {
	// TODO Auto-generated constructor stub

}

Module_2::~Module_2() {
	// TODO Auto-generated destructor stub
}

Module_2 *Module_2::instance()
{
	if (modul_ == nullptr)
		modul_ = new Module_2();

	return modul_;
}

void Module_2::function1(int a)
{
	fprintf(stdout, "module 2 --> %d\n", a);
}

