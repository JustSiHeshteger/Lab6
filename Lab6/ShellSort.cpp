#include "ShellSort.h"

ShellSort::ShellSort(std::vector<int>& arr) {
	this->resetCountCompare();
	this->resetCountSwap();
	this->arr = arr;
}

void ShellSort::sortByIncrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t step = arrSize / 2; step > 0; step /= 2) {
		for (size_t i = step; i < arrSize; ++i) {
			for (int j = i - step; j >= 0; j -= step) {
				if (this->arr[j] > this->arr[j + step]) {
					this->swapElements(j, j + step);
				}

				this->countCompare++;
			}
		}
	}
}

void ShellSort::sortByDecrease() {
	this->resetCountCompare();
	this->resetCountSwap();
	size_t arrSize = this->arr.size();

	for (size_t step = arrSize / 2; step > 0; step /= 2) {
		for (size_t i = step; i < arrSize; ++i) {
			for (int j = i - step; j >= 0; j -= step) {
				if (this->arr[j] < this->arr[j + step]) {
					this->swapElements(j, j + step);
				}

				this->countCompare++;
			}
		}
	}
}

std::string ShellSort::getSortType() {
	return "Shell sort:";
}