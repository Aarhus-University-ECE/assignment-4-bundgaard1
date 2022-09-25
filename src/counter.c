/* Excercise 4
 * pre:  a contains numbers between 1..20
 * post: count[i] is equal to the numers af i+1 in a
 */
void count_1_to_20(int a[100][150], int count[20]) {
  // Loop over all rows
  for (int i = 0; i < 100; i++) {
    // Loop over all columns
    for (int j = 0; j < 150; j++) {
      // Add one to the count array of the corresponding value

      int number = a[i][j];
      if (number > 0 && number <= 20) {
        count[number - 1]++;
      }
    }
  }
  return;
}