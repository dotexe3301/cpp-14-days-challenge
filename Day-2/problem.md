# Problem Statement

You are working on a text analytics tool that processes textual documents for various applications, such as content summarization and keyword extraction. The docurnent is a string that contains multiple words separated by spaces. Your task is to identify the most common word in the document. If there is a tie, return
the word that appears first.

## Input Format

- document: A string representing a document (length: 1 to (10^5)).
  - Contains only letters, numbers, and spaces.
  - Punctuation marks (such as commas, periods, etc.) are removed before processing.
  - Words are case-insensitive (i.e., "Hello" and "hello" are treated as the same word).


## Output Format

- Return the most common word in the document in lowercase.
- If there is a tie (i.e., multiple words with the same frequency), retum the word that appears first.

### Example Input

"Hello world Hello universe"

### Example Output

"hello"

### Constraints

- The string contains alphanumeric characters and spaces only. All punctuation marks are removed before processing.
