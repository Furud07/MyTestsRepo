#ifndef NEWFEATURE_H_
#define NEWFEATURE_H_

#include <memory>

class NewFeature {
public:
	NewFeature();
	virtual ~NewFeature();

	void use_unique_ptr();

	void use_share_ptr();

};

#endif /* SMARTPOINTER_H_ */