#include <assert.h>
/* Excercise 5
 * Returns the average of an array
 * Pre: n>0, list[0...n-1] is defined
 */
float average(int list[], int n) {
  assert(n > 0);
  // Find the sum of all elements
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += list[i];
  }
  // Computes average
  return (float)sum / (float)n;
}