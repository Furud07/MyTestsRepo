/*
 * Module1.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef MODULE1_H_
#define MODULE1_H_

#include "ModuleAbstract.h"

class Module_1: public ModuleAbstract
{
public:

	static Module_1 *instance();

	virtual ~Module_1();

	void function1(int a);

private:
	Module_1();

	static Module_1 *modul_;
};

#endif /* MODULE1_H_ */
