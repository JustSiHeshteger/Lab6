#include "AbstractSort.h"

AbstractSort::AbstractSort() {
	this->countCompare = 0;
	this->countSwap = 0;
}

AbstractSort::AbstractSort(std::vector<int>& arr) {
	this->countCompare = 0;
	this->arr = std::vector<int>(arr);
}

void AbstractSort::swapElements(size_t i, size_t j) {
	int temp = this->arr[i];
	this->arr[i] = this->arr[j];
	this->arr[j] = temp;
	this->countSwap++;
}

int AbstractSort::getCountCompare() {
	return this->countCompare;
}

void AbstractSort::resetCountCompare() {
	this->countCompare = 0;
}

int AbstractSort::getCountSwap() {
	return this->countSwap;
}

void AbstractSort::resetCountSwap() {
	this->countSwap = 0;
}

void AbstractSort::setArray(std::vector<int>& arr) {
	this->arr = std::vector<int>(arr);
}

std::vector<int> AbstractSort::getArray() {
	return this->arr;
}
