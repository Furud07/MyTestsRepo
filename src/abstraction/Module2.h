/*
 * Module2.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef MODULE2_H_
#define MODULE2_H_

#include "ModuleAbstract.h"

class Module_2: public ModuleAbstract
{
public:


	static Module_2 *instance();

	virtual ~Module_2();

	void function1(int a);

private:
	Module_2();

	static Module_2* modul_;
};

#endif /* MODULE1_H_ */
