/*
 * SmartPointer.h
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

#include <memory>

class SmartPointer {
public:
	SmartPointer();
	virtual ~SmartPointer();

	void use_unique_ptr();

	void use_share_ptr();

};

#endif /* SMARTPOINTER_H_ */
