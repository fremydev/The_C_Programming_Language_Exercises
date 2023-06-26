# The C Programming Language Second Edition Book Exercises

## Chapter 1. A tutorial Introduction

### Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.
### Exercise 1-2. Experiment to find out what happens when prinf's argument string contains \c, where c is some character no listed above.

### Exercie 1-3. Modify the temperature conversion program to print a heading above the table.
### Exercise 1-4. Write a program to write the corresponding Celsius to Fahrenheit table.

### Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degress to 0.

### Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
### Exercise 1-7. Write the program to print the value of EOF.

### Exercise 1-8. Write a program to count blanks, tabs, and newlines.
### Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
### Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.

### Exercise 1-11. How would you test the word count program ? What kinds of input are most likely to uncover bugs if there are any?
### Exercise 1-12. Write a program that prints its input one word per line.

### Exercise 1-13. Write a program to print a histogram of lengths of words in its input. It is easy to draw the histogram with bars horizontal; a vertical orientation is more challenging.
### Exercise 1-14. Write a program to print a histogram of different characters in its input.

### Exercise 1-15. Rewirte the temperature conversion program of Section 1.2 to use a function for conversion.

### Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.
### Exercise 1-17. Write a program to print all lines that are longer than 80 characters.
### Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
### Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.

### Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter ?
### Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference ?
### Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column
### Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
### Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don't forget about quotes, both single and double, escpae sequences, and comments. (This program is hard if you do it in full generality).

## Chapter 2. Types, Operators, and Expressions

### Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standart headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.

### Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.

### Exercise 2-3. Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.

### Exercise 2-4. Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2.
### Exercise 2-5. Write the function any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no character from s2. (The standard library function strpbrk does the same job but returns a pointer to the location).

### Exercise 2-6. Write a function setbits(x, p, n, y) that returns x with the n bits that begins at position p set to the rightmost n bits of y, leaving the other bits unchanged.
### Exercise 2-7. Write a function invert(x, p, n) that return x with the n bits at position p inverted (i.e., 1 changed to 0 and vice versa), leaving the others unchanged.
### Exercise 2-8. Write a function rightroot(x, n) that returns the value of the integer x rotated to the right by n bit positions.

### Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.

### Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.

## Chapter 3. Control Flow

### Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.

### Exercise 3-2. Write a function escape(s, t) that converts characters like newline and tab  into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.

### Exercise 3-3. Write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 an -a-z. Arrange that a leading or trailing - is take literally.

### Exercise 3-4. In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2^wordsize-1). Explain why not. Modify it to print the value correctly, regardless of the machine on which it runs.
### Exercise 3-5. Write the functions itob(n,s,b) that converts the integer n into a base b character representation in the string s. In particular, itob(n, s, 16) format n as a hexadecimal integer in s.
### Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.

## Chapter 4. Functions and Program Structure

### Exercise 4-1. Write the function strindex(s, t) which returns the position of the rightmost occurrence of t in s. Or -1 if there is none.

### Exercise 4-2. Extend atof to handle scientific notation form.

### Exercise 4-3. Given the basic framework, it's straightforward to extend the calculator. Add the % modulus operator and provisions for negative numbers.

### Exercise 4-12. Adapt the ideas of printd to write a recursive version of itoa; that is, convert an integer into a string by calling a recursive routine. 
### Exercise 4-13. Write a recursive version of the functions reverse(s), which reverses the string s in place.

### Exercise 4-14. Define a macro swap(t, x, y) that interchanges two arguments of type t.
