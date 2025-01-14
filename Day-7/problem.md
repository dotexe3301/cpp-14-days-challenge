# Problem Statement

You're a developer at Instagram building a new profile picture editor. When users upload square photos, they often need to be rotated to the correct orientation. Implement a feature that rotates a square photo by 90 degrees clockwise.

## Input

- An integer (n) representing the size of the matrix.
- A 2D array representing a square photo. Each element of the array contains an integer (for simplicity, think of it as pixel value).
  - The size of the matrix is (n x n) where (1 <= n <= 10^3).
  - The matrix contains only integers between 0 and 255, inclusive (simulating RGB pixel values).

## Output

- Return the rotated matrix after rotating it 90 degrees clockwise.
- Your task is to just write a function to rotate the image.

## Example

Input:<br>
3
1 2 3<br>
4 5 6<br>
7 8 9<br>

Output:<br>
7 4 1<br>
8 5 2<br>
9 6 3<br>

## Contraints

- 1 <= n <= 10^3
- 0 <= matrix[i][j] <= 255