#include "coloredobjects.hpp"

ColoredObjects::ColoredObjects() {
	objectColor = 0;
}

ColoredObjects::ColoredObjects(int objectColorIn) {
	objectColor = objectColorIn;
}

void ColoredObjects::setObjectColor(int objectColorIn) {
	objectColor = objectColorIn;
}

int ColoredObjects::getObjectColor() {
	return objectColor;
}

double ColoredObjects::adding() {
	return 0;
}

double ColoredObjects::removing() {
	return 0;
}

ColoredObjects::~ColoredObjects() {
}
