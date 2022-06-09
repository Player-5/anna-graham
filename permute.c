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
  char temp = *a;
  *a = *b;
  *b = temp;
  return;
}

void permute(char *phrase, const int left, const int right) {
  if (left == right) {
    printf("%s\n", phrase);
  }
  else {
    for (int ii = left; ii < right; ii++) {
      swap(phrase + left, phrase + ii);
      permute(phrase, left + 1, right);
      swap(phrase + left, phrase + ii);
    }
  }
  return;
}
