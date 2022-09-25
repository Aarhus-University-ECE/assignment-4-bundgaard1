#include <assert.h>
/* Excercise 3
 * Returns the index in list of the logest sequence of zeros in list, -1 if no
 * zeros in list pre: n>0
 */
int longest_seq(int list[], int n) {
  assert(n > 0);

  int start = -1;       // Start index of longest sequence
  int curr_start = 0;   // Start index for the current sequence
  int counter = 0;      // Counts the number of 0's in row
  int max_counter = 0;  // Length of longest sequence

  for (int i = 0; i < n; i++) {
    if (list[i] == 0) {
      // Start a new sequence if first 0 in sequence
      if (counter == 0) {
        curr_start = i;
      }
      // Increment the counter if current number is a zero
      counter++;
      // Check if the current sequence is the longest
      if (counter > max_counter) {
        start = curr_start;
        max_counter = counter;
      }
    } else {
      // Reset counter if not an 0
      counter = 0;
    }
  }
  return start;
}