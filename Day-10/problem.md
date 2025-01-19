# Problem Statement

You're on YouTube's monetization team. Given data about viewer engagement during different times of a video, find the best times to place ads to maximize both revenue and user experience. You can place up to k ads in a video of length n seconds. This directly affects millions of creators' eamings and billions of viewers' experience. Finding the right balance is crucial!

## Input Format

- n : An integer (1 <= n <= 10^5) representing the length of the video in seconds.
- k: An integer (1 <= k <= n) representing the maximum number of ads allowed.
- viewer_retention : A list of integers (1 <= viewer_retention <= 100) representing the percentage of viewers at each second.
- ad_value : A list of integers (1 <= ad_value\[i] <= 1000) representing the potential revenue at each second.

## Output Format

- Return a list of integers representing the indices where ads should be placed to maximize the total score. (O-based)

## Constraints

1. 1 <= n\*k <= 10^6
2. 1 <= k <= n
3. 1 <= viewer_retention\[i] <= 100
4. 1 <= ad_value\[i] <= 1000
5. Ads cannot be placed consecutively that is if you place an ad at i-th second, you cannot place an ad at i+1-th second.
