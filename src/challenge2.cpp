In this exercise you are asked to implement part of the functionality of an Emoji Alphabet Translator, which requires you to work with 2D vectors and use an emoji-based code where each letter of the alphabet is associated with an emoji. Details are given below. You are provided with the following files:

main.cpp - Sample code to help you develop your program. This is not used to test your code.
task.h - A read-only header file defining function signatures.
task.cpp - You will write your assessed C++ code for the tasks below in this file.
Task 1

Implement the following function:

std::vector<std::string> read_in_lines(std::string &inputFileName)
The function has the following parameter:

the function has 1 parameter, inputFileName, the name of the file to read lines from
Function details:

opens the file to read
if the file is not found then the function returns an empty vector (with size 0)
if the file is found, then it is opened and each line is read in and stored in a std::vector of string
the function returns the vector
File Format The format of the file to be read from is as follows:

A 🍎
B 🐝 
C 🐱 
D 🐶
E 🦅
where each line contains the following 2 entries, separated by whitespace

a letter
an emoji code
NOTE your code will only be tested with files containing lines of the format shown above

Example 1 For a file called "emojis.txt" containing the following lines:

A 🍎
B 🐝 
C 🐱 
D 🐶
E 🦅
for the following:

std::string inputFileName = "emojis.txt";
read_in_lines(inputFileName);
your function should return the following vector:

{"A 🍎", "B 🐝 ", "C 🐱 ", "D 🐶", "E 🦅"}
Example 2 For a file "not_found.txt" that isn't found, your function should return {} (an empty vector)

Task 2

Implement the following function:

std::vector<std::string> getEmojis(std::vector<std::string> &lines);
The function has the following parameter:

lines - A vector where each element is a string with 2 substrings, separated by a single space as follows:
the first is a letter (A to Z)
the second is an emoji which starts with the letter
for example, the string "A 🍎"
The function returns the following:

a std::vector<std::string> containing only the emojis (second elements of each row).
Example: for the following:

std::vector<std::string> {"A 🍎", "B 🐝", "C 🐱", "D 🐶", "E 🦅"};
getEmojis(lines); 
the function should return the following:

{"🍎", "🐝", "🐱", "🐶", "🦅"}
Task 3

Implement the following function:

std::string toEmojis(std::string &in_string, 
          std::vector<std::string> &letters, 
          std::vector<std::string> &emojis);
The function has the following parameters:

in_string - The word to translate into emoji codes.
letters - A vector containing letters of the alphabet characters (e.g. {A, B, C, D, E})
emojis - A vector of corresponding emojis for the characters (e.g. as returned from getEmojis {"🍎", "🐝", "🐱", "🐶", "🦅"}).
The function returns the following:

a std::string containing the emojis corresponding to each letter in in_string, separated by single spaces.
Note the following:
The input in_string contains only alphabetic characters (a-z, A-Z).
Uppercase and lowercase letters in in_string map to the same emoji (e.g., both G and g map to 🍇).
There should be no trailing space after the last emoji in the returned string.
Example: for the following:

std::string in_string = "Ace";
std::vector<std::string> letters = {"A", "B", "C", "D", "E"};
std::vector<std::string> emojis = {"🍎", "🐝", "🐱", "🐶", "🦅"};
toEmojis(in_string, letters, emojis);
The function should return:

"🍎 🐱 🦅"
NOTE

emojis separated by single space i.e. the character ' '
no space at the end of the string!!

#include <iostream>
#include <string>
#include <vector>
#include "task.h" 
#include "utilities.cpp" // (hidden) provide print_vector for use to test your code (see usage below)

int main()
{

   /***********************************************************************
   * This code is provided as a starting point for development and testing
   * Please modify the code below as you develop your program.
   * **********************************************************************/
   std::vector<std::string> lines;
   std::vector<std::string> letters;
   std::vector<std::string> emojis;
   
   // Task 1
   std::string inputFileName = "emojis.txt";
   lines = read_in_lines(inputFileName);  
   print_vector(lines);  

   // Task 2
   lines = {"A 🍎", "B 🐝", "C 🐱", "D 🐶", "E 🦅"};
   emojis = getEmojis(lines); 
   print_vector(emojis);

   // Task 3
   std::string transStr = "Ace";
   letters = {"A", "B", "C", "D", "E"};
   emojis = {"🍎", "🐝", "🐱", "🐶", "🦅"};
   std::string translated = toEmojis(transStr, letters, emojis); 
   std::cout << translated << "\n ";
  
  return EXIT_SUCCESS;
}



