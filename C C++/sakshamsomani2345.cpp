#include <algorithm>
#include <iterator>
#include <iostream>
 template<typename ForwardIterator> void selection_sort(ForwardIterator begin,
                                                       ForwardIterator end) {
  for(auto i = begin; i != end; ++i) {
    std::iter_swap(i, std::min_element(i, end));
  }
}
 
int main() {
 int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
  std::cout << "Original numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
  selection_sort(std::begin(a), std::end(a));
 std::cout << "Sorted numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
    return 0;

}
