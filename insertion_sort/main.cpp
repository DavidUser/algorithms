#include <iostream>
#include <vector>
#include "insertion_sort.h"

int main(void) {
  std::vector<int> numbers = { 31, 41, 59, 26, 41, 58 };

  InsertionSort(numbers);

  for (int number : numbers)
    std::cout << number << ' ';

  return 0;
}
