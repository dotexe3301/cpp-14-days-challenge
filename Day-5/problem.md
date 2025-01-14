# Problem Statement

You are developing a stock market analysis tool for a financial applicadtion. Traders and incestors often need to monitor peak stock prices over specific time windows to make better trading decisions. Your task is to implement a feature that analyzes historical stock prices and identifies the maximum price within a moving window.

For instance, in a trading day, the application will take the last k minutes stock prices as a sliding window and display the highest price during that period, This helps traders quicky spot trends and evaluates oppurtunities in real time.

## Input Format

- prices: A list of integers representing stock prices at regular intervals.
- K: An integer representing the size of the sliding window(number of consecutive intervals).

## Output Format

- Return a list of integers where each element represents the maximum price in the respective sliding window.

## Example

Input:<br>
prices = [10, 7, 12, 9, 8, 15]<br>
k = 3

Output:<br>
[12, 12, 12, 15]

## Constraints

- 1 <= prices.length <= 10^5
- 1 <= k <= prices.length
- 0 <= prices[i] <= 10^4
