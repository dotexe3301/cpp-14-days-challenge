# Problem Statement

You are a software engineer at a Google working on google maps. and your team is tasked with designing a route optimization system. The system models the road network as a directed weighted graph where nodes represent locations, and edges represent roads with weights corresponding to the travel time between locations.

Given the number of locations ( n ) the number of roads ( m ) the roads' details, and a starting location (s), your task is to find the shortest travel time from ( s ) to every other location. If a location is unreachable, the travel time should be reported as ( -1 ).

Your solution must efficiently handle large graphs. as the road network can have up to ( 10^5 ) locations and (10^6) roads.

## Input Format

- An integer (n) reppresenting the number of locations.
- An integer (m) represeting the number of roads.
- (m) lines follow, each containing three integers (u), (v), and (w), where:
  - (u): The starting location of the road
  - (v): The ending location of the road
  - (w): The travel time of the road(w > 0)
- An integer (s), representing the starting location.

## Output Format

- Return (n) integers, where the (i)-th integer represents the shortest travel time from location (s) to location (i). If a location is unreachable, print(-1).

## Example Input
6 9<br>
0 1 4<br>
0 2 2<br>
1 2 5<br>
1 3 10<br>
2 4 3<br>
4 3 4<br>
3 5 11<br>
4 5 2<br>
5 0 7<br>
0

## Example Output
0 4 2 9 5 7