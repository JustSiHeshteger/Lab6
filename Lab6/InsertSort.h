#pragma once
#include "AbstractSort.h"

class InsertSort : public AbstractSort
{
public:
	InsertSort(std::vector<int>& arr);

	void sortByIncrease() override;
	void sortByDecrease() override;
	std::string getSortType() override;
};

