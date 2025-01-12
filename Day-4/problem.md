# Problem Statement

You're implementing a browser's back/forward feature. Each tine a user visits a URL, it's added to history. Users can go back X steps or forward Y steps. Implement this browser history manager.

# Operations

- visit(string url) -User visits a URL
- back(int steps) -Go bad steps steps, return the current URL
- forward(int steps) -Go forward steps steps, return the curent URL

Your mmager only needs you to visit , back , and forward functionalities.

## Input Format

- An integer ( n ) represalting the rumber of op«ations.
- A list of operations. each is a string the nune and its argunents.

## Output Format

- A list of URLs, each URL is a representing the current URL after each operation.

## Example

Input :
6<br>
visit chaicode.com<br>
visit facebook.com<br>
visit youtube.com<br>
back 1<br>
back 1<br>
forward 1

Output:
chaicode.com facebook.com youtube.com facebook.com chaicode.com facebook.com

## Constraints

- 1 <= URL length <= 100
- 1 <= steps <= 100
- Test cases are in a way that the browser history is always valid.
