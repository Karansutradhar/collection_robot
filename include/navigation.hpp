#pragma once

#include <iostream>

class Navigation {
public:
	double detector;
	Navigation();
	Navigation(double detector);
	double explore();
	double goToColor();
	~Navigation();
};
