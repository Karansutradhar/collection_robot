#include "navigation.hpp"

Navigation::Navigation() {
	detector = 0;
}

Navigation::Navigation(double detectorIn) {
	detector = detectorIn;
}

double Navigation::explore() {
	return 0;
}

double Navigation::goToColor() {
	return 0;
}

Navigation::~Navigation() {
}
