/*
 * SmartPointer.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: hugo
 */

#include "NewFeature.h"

#include <iostream>

NewFeature::NewFeature() {
	// TODO Auto-generated constructor stub

}

NewFeature::~NewFeature() {
	// TODO Auto-generated destructor stub
}



void NewFeature::use_unique_ptr()
{
    std::unique_ptr<int> valuePtr(new int(15));
    std::unique_ptr<int> valuePtrNow(std::move(valuePtr));

    std::cout << "valuePtrNow = " << *valuePtrNow << '\n';
    std::cout << "Has valuePtr an associated object? "
              << std::boolalpha
              << static_cast<bool>(valuePtr) << '\n';
}


void NewFeature::use_share_ptr()
{

}
