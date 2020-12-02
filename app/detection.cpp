#include "detection.hpp"

Detection::Detection() {
	correctnessLevel = 0;
}

Detection::Detection(double correctnessLevelIn) {
	correctnessLevel = correctnessLevelIn;
}

void Detection::setCorrectnessLevel(double correctnesslevelIn) {
	correctnessLevel = correctnesslevelIn;
}

double Detection::getCorrectnessLevel() {
	return correctnessLevel;
}

Detection::~Detection() {
}
