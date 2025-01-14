# Problem Statement

Developers often struggle naming variables. Companies like JetBrains and Microsoft use smart naming suggestions in their IDEs to improve code readability. You're building a smart code editor that helps developers choose variable names. The editor suggests palindromic variable names (like "level" or "radar") as they're easy to remember. Your feature should detect if a string can become a palindrome by removing just one character.

## Input

- A single string (s) (length <= 10^5)
  - The string contains only lowercase letters('a' to 'z')

## Output

- Return true if the string can become a palindrome by removing at most one character, otherwise return false.

## Example

Input: <br>
raceecar

Output: <br>
true

## Example

Input: <br>
abccba

Output: <br>
true

## Constraints

- The input string contains only lowercase alphabets.
- Strings are guaranteed to have a minimum length of 1.
