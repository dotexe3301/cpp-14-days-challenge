# Problem Statement

As an SDE at Meta, your manager has assigned you an important task to help the marketing team identify influential users on the platform. These influential users Will be key targets for focused marketing campaigns. In the context of a social network users are represented as nodes, and their connections are modeled as directed edges in a graph An edge from user u to user v indicates that u follows v. %yur goal is to determine the user with the highest influence score.The influence score of a user is defined as the total number of followers they have in the netb•vork. If there is a tie in influence scores, you must return the user with the smallest user ID.Your solution will serve as the backbone for the marketing teams targeted strategy, so accuracy and efficiency are crudal.

## Input Format

- An integer n representing the number of users (nodes) in the network where users are indexed from O to n-1
- An integer m representing the number of directed edges (connections) in the network
- m lines follow, each containing two integers u and v, representing a directed edge from uto v.

## Output Format

- Return a single integer representing the ID of the us«with the highst influence score. (0 <= ID < n)

## Example Input

6 4<br>
1 2<br>
2 3<br>
3 4<br>
4 5<br>

## Example Output

2

## Constraints

- 0 <= n <= 10^5
- 0 <= m <= 10^6
- 0 <= u,v <= n
- Self-loops and duplicate edges may exist in the input.
