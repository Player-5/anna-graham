/*
 *   The code to permute strings is implemented in this file.
 *   Copyright (C) 2022  Player-5
 *
 *   anna-graham is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   anna-graham is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with anna-graham.  If not, see <https://www.gnu.org/licenses/>
 */

#include <stdio.h>

void swap(char *a, char *b) {

  // creates a char to hold the value at a's memory location
  char temp = *a;

  // swaps a and b
  *a = *b;
  *b = temp;

  // returns void to show end of the function
  return;
}

void permute(char *phrase, const int left, const int right) {
  // when no swaps are possible outputs the permuted string
  if (left == right) {
    // prints the phrase to the terminal
    printf("%s\n", phrase);
  }
  else {
    // loops over each char in the swap range
    for (int ii = left; ii < right; ii++) {

      // preforms a swap on the leftest char and the ii char
      swap(phrase + left, phrase + ii);

      // recursively repeats until all possible swaps are made
      permute(phrase, left + 1, right);

      // undoes the swap operation
      swap(phrase + left, phrase + ii);
    }
  }
  // returns void to show the end of the function
  return;
}
