#include <iostream>

#include "BubbleSort.h"
#include "InsertSort.h"
#include "SelectionSort.h"
#include "ShellSort.h"
#include "QuickSort.h"

int main()
{
    srand(time(0));
    std::vector<int> arr;

    for (int i = 0; i < 30; i++) {
        arr.push_back(rand() % 30);
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    std::vector<std::unique_ptr<AbstractSort>> sorts;
    sorts.push_back(std::make_unique<BubbleSort>(arr));
    sorts.push_back(std::make_unique<InsertSort>(arr));
    sorts.push_back(std::make_unique<SelectionSort>(arr));
    sorts.push_back(std::make_unique<ShellSort>(arr));
    sorts.push_back(std::make_unique<QuickSort>(arr));

    for (auto&& sort : sorts) {
        std::cout << sort->getSortType() << std::endl;
        sort->sortByIncrease();

        arr = sort->getArray();
        for (auto number : arr) {
            std::cout << number << " ";
        }

        std::cout << std::endl;
        std::cout << "Count compare: " << sort->getCountCompare() << std::endl;
        std::cout << "Count swap: " << sort->getCountSwap() << std::endl;
        std::cout << std::endl;

        sort->sortByDecrease();

        arr = sort->getArray();
        for (auto number : arr) {
            std::cout << number << " ";
        }

        std::cout << std::endl;
        std::cout << "Count compare: " << sort->getCountCompare() << std::endl;
        std::cout << "Count swap: " << sort->getCountSwap() << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }

    system("pause");
}