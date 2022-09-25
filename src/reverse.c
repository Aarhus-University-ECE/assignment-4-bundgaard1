
#include <assert.h>
/* Exercise 2
 * Returns in rev_array the elements of list in reversed order
 * Pre: n>0, list[0...n-1] is defined
 */
void reverse(int list[], int rev_array[], int n) {
  assert(n > 0);  // Precondition
  for (int i = 0; i < n; i++) {
    // Fill in the reverse array from the back
    rev_array[n - i - 1] = list[i];
  }
  return;
}