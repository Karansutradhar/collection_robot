#pragma once

#include <iostream>
#include "collection.hpp"

class ColoredObjects : public Collection {
private:
	int objectColor;

public:
	ColoredObjects();
	ColoredObjects(int objectColor);
	void setObjectColor(int objectColorIn);
	int getObjectColor();
	double adding();
	double removing();
	~ColoredObjects();
};
