#include "InsertSort.h"

InsertSort::InsertSort(std::vector<int>& arr) {
	this->resetCountCompare();
	this->resetCountSwap();
	this->arr = arr;
}

void InsertSort::sortByIncrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t i = 1; i < arrSize; i++) { 
		size_t k = i;

		while (k > 0) {
			if (this->arr[k] < this->arr[k - 1]) {
				this->swapElements(k, k - 1);
			}

			k--;
			this->countCompare++;
		}
	}
}

void InsertSort::sortByDecrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t i = 1; i < arrSize; i++) { 
		size_t k = i;

		while (k > 0) {
			if (this->arr[k] > this->arr[k - 1]) {
				this->swapElements(k, k - 1);
			}

			k--;
			this->countCompare++;
		}
	}
}

std::string InsertSort::getSortType() {
	return "Insert sort:";
}