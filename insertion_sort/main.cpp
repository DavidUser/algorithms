#include <iostream>
#include "insertion_sort.h"

int main(void) {
  int numbers[] = { 31, 41, 59, 26, 41, 58 };

  InsertionSort(numbers, numbers + 6);

  for (int number : numbers)
    std::cout << number << ' ';
  std::cout << std::endl;

  return 0;
}
