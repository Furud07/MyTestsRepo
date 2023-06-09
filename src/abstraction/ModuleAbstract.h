/*
 * ModuleAbstract.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef MODULEABSTRACT_H_
#define MODULEABSTRACT_H_

class ModuleAbstract
{
public:
	ModuleAbstract(){
		number = 2;
	}


	virtual ~ModuleAbstract()
	{
	}

	virtual void function1(int a){};

	int communFunc()
	{
		return number;
	};


protected:
	int number;
};

#endif /* MODULEABSTRACT_H_ */
