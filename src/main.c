/*
 *   The main file of the program, handles arguments and the program as a whole.
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
#include <stdlib.h>

#include <string.h>

#include "permute.h"

int main(const int argc, char *argv[]) {
  // checks for a valid number of arguments
  if (2 != argc) {
    // prints error message as well as returning a fail state
    printf("Only 1 argument allowed %d were passed.\n", argc - 1);
    return EXIT_FAILURE;
  }

  // gets the length of the given string
  const int LENGTH = strlen(argv[1]);

  // calls the permutation code
  permute(argv[1], 0, LENGTH);

  // returns that the program has executed successfully
  return EXIT_SUCCESS;
}
