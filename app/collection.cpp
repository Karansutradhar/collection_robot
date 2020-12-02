#include "collection.hpp"

Collection::Collection() {
	range = 0;
}

Collection::Collection(double rangeIn) {
	range = rangeIn;
}

void Collection::setRange(double rangeIn) {
	range = rangeIn;
}

double Collection::getRange() {
	return range;
}

bool Collection::collectionAbility() {
	return false;
}

double Collection::collect() {
	return 0;
}

Collection::~Collection() {
}
