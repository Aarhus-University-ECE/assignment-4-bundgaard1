#include <assert.h>
/* Exercise 1
 * Returns the smallest of the first n values in list
 * Pre: n>0, list[0...n-1] is defined
 */
int get_min(int list[], int n) {
  assert(n > 0);      // Precondition
  int min = list[0];  // Smallest value set to the first value
  for (int i = 1; i < n; i++) {
    // Is list[i] the smallest value yet?
    if (list[i] < min) {
      min = list[i];
    }
  }
  return min;
}