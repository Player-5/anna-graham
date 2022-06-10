# anna-graham
This is a C program that is designed to output all permutations of a given string.

# Usage
Below is some of the common ways to use the program.

## Basic
To use the program supply 1 argument on the command line

```bash
anna-graham EXAMPLE
```
this will output all the permutations of the string to the terminal.


If the string you wish to permute has a space place "" around the string

```bash
anna-graham "EXAMPLE TEXT"
```

## Save to File
Just use redirection to save the output to a file

```bash
anna-graham "Hello, World!" > Output.txt
```

## Remove Duplicates
Pipe the output of the program to `sort -u` and redirect that to a file

```bash
anna-graham "Hello, World!" | sort -u > DupFree.txt
```

# Copyright/Licensing
anna-graham is licensed under Version 3 of the GPL or any later version

anna-graham  Copyright (C) 2022  Player-5
