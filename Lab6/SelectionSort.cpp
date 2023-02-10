#include "SelectionSort.h"

SelectionSort::SelectionSort(std::vector<int>& arr) {
	this->resetCountCompare();
	this->resetCountSwap();
	this->arr = arr;
}

void SelectionSort::sortByIncrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t i = 0; i < arrSize - 1; i++) {
		int min = this->arr[i];
		size_t minIndex = i;

		for (size_t j = i + 1; j < arrSize; j++) {
			if (this->arr[j] < min) {
				min = this->arr[j];
				minIndex = j;
			}

			this->countCompare++;
		}

		this->swapElements(i, minIndex);
	}
}

void SelectionSort::sortByDecrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t i = 0; i < arrSize - 1; i++) {
		int max = this->arr[i];
		size_t maxIndex = i;

		for (size_t j = i + 1; j < arrSize; j++) {
			if (this->arr[j] > max) {
				max = this->arr[j];
				maxIndex = j;
			}

			this->countCompare++;
		}

		this->swapElements(i, maxIndex);
	}
}

std::string SelectionSort::getSortType() {
	return "Selection sort:";
}