#pragma once

#include <iostream>
#include "navigation.hpp"

class Collection : public Navigation {
private:
	double range;

public:
	Collection();
	Collection(double range);
	void setRange(double rangeIn);
	double getRange();
	bool collectionAbility();
	double collect();
	~Collection();
};
