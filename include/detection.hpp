#pragma once

#include <iostream>
#include <vector>
#include "navigation.hpp"

class Detection : public Navigation {
private:
	double correctnessLevel;
	std::vector <int> detect();

public:
	Detection();
	Detection(double correctnesslevel);
	void setCorrectnessLevel(double correctnesslevelIn);
	double getCorrectnessLevel();
	~Detection();
};
