#   A Makefile to automatically compile the program.
#   Copyright (C) 2022  Player-5
#
#   anna-graham is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   anna-graham is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with anna-graham.  If not, see <https://www.gnu.org/licenses/>

CC=gcc
CFLAGS=-g -Wall -Werror -O3 -pipe

NAME=anna-graham
FILES=main.o permute.o

anna: $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)
clean:
	rm *.o
