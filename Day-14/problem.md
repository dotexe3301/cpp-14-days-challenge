# Problem Statement

You are tasked with designing an effcient system to answer multiple sun cw«ies over an array. The array contains integers, md you need to compute the sun of elements in a given subarray effciently. Given an array ( A ) of size ( n ) you need to process ( q ) queries, each asking for the sum of elements from index ( l ) to ( r ) (both inclusive). The naive approach of iterating over the üarray for each query world be especially for large arrays.

## Input Format

- An integer (n) representing the size of the array.
- An array (A) of (n) integers.
- An integer (q) representing the number of queries.
- (q)queries, each consisting of two integeres (l) and (r), where:
  - (l): The starting index of the subarray(1-based index).
  - (r): The ending index of the subarray(1-based index).

## Output Format

For each query, return the sum of elements from index (l) to (r) (both inclusive).

## Example

Input: <br>
5 1 2 3 4 5 <br>
3 <br>
1 3 <br>
2 4 <br>
3 5

Output:<br>
6 9 12<br>

Input: <br>
4 10 20 30 40 <br>
2<br>
1 2 <br>
2 4 <br>

Output:<br>
30 90
