#ifndef NEWFEATURE_H_
#define NEWFEATURE_H_


#include <iostream>

SmartPointer::SmartPointer() {
	// TODO Auto-generated constructor stub

}

SmartPointer::~SmartPointer() {
	// TODO Auto-generated destructor stub
}



void SmartPointer::use_unique_ptr()
{
    std::unique_ptr<int> valuePtr(new int(15));
    std::unique_ptr<int> valuePtrNow(std::move(valuePtr));

    std::cout << "valuePtrNow = " << *valuePtrNow << '\n';
    std::cout << "Has valuePtr an associated object? "
              << std::boolalpha
              << static_cast<bool>(valuePtr) << '\n';
}


void SmartPointer::use_share_ptr()
{

}
