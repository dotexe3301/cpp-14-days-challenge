# Problem Statement
You work at Amazon's Returns Department. A sequence of returned electronics arrives in the order they were processed by the customer service counter. Each item is marked either as "Reusable" (even product ID) or "Needs Repair" (odd product ID).

### Goal<br>
- Group all resuable items first so they can be quickly restocked.
- Follow with all repair itens so they can be routed for inspection.
- Maintain FIFO (First In, First Out) order within each category to preserve warranty claim tracking.

### Example<br>
- Returns Received: iPhone(1) → Laptop(4) → iPad(3) → Kindle(2) → Headphones(6) → Watch(5) → Speaker(7).
- Optimized Processing Order: : Laptop(4) → Kindle(2) → Headphones(6) → iPhone(1) → iPad(3) → Watch(5) → Speaker(7).

Here, items with IDs 1, 3, 5, 7 are odd, so they come later; items 4, 2, 6 are even and go first.

## Input Format
- An integer n (number of returned items).
- n integers representing products IDs:
  - Even -> "Reusable"
  - Odd -> "Needs Repair"

## Output Format
- A sequence of product IDs rearranged so that all even IDs appear first, followed by odd IDs, retaining the original order within each group.

## Example

Input:<br>
5 <br>
1 2 3 4 5

Output:<br>
2 4 1 3 5

## Constraints
- 1 <= n <= 10^5
- 1 <= A[i] <= 10^9