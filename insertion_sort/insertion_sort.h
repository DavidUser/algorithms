/* Insertion sort Algorithm
 *
 * From the 2th element to the end of collection put each element called key on
 * sorted collection at left of iteration, 
 * at first iteration has only one element at left
 * so it's left elements are trivialy sorted.
 *
 * Put element on sorted array is made shifting right greater elements
 * when key element is not lower than element on current position, 
 * that's the correct sorted position to put key.
 *
 */

template <typename Iterator>
void InsertionSort(Iterator *begin, Iterator *end) {
  // from 2th element to the end
  for (Iterator* ivariant = begin + 1; ivariant != end; ++ivariant) {
    // save key element because this in-place sort will overwrite those value
    auto key = *ivariant; // element to insert sorted

    // insert key on orded [begin, ivariant)
    Iterator* sorter = ivariant - 1; 
    while (sorter != (begin - 1) // guard clause, should be at least on begin
        && key < *sorter) { // key should be put somewhere at left
      *(sorter + 1) = *sorter; // move greater value to the right 
      --sorter;
    }
    // all greater elements are shifted right
    // but cursor is moved left so fix it adding one
    *(sorter + 1) = key; // put key on correct position
  }
}
