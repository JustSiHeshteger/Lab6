#pragma once
#include <vector>
#include <string>

class AbstractSort
{
protected:
	int countCompare;
	int countSwap;
	std::vector<int> arr;

	void swapElements(size_t i, size_t j);
	void resetCountCompare();
	void resetCountSwap();

public:
	AbstractSort();
	AbstractSort(std::vector<int>& arr);

	virtual void sortByIncrease() = 0;
	virtual void sortByDecrease() = 0;
	virtual std::string getSortType() = 0;

	int getCountCompare();
	int getCountSwap();

	void setArray(std::vector<int>& arr);
	std::vector<int> getArray();
};