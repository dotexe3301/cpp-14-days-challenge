# Problem Statement

You are an SDE at a logistics company, and your manager has tasked you with optimizing delivery routes. You are given a list of ( n ) roads, where each road takes a specific amount of time to travel at a given speed. You need to determine the minimum speed ( s ) (in km/h) needed to travel all roads in less than or equal to a given time limit ( t ).

If it is impossible to complete thejoumey within the given time ( t ), return ( -1 ).

## Input Format
• An integer( n ) representing the number of roads.
• A floating-point number ( t) representing the maximum allowed time (In hours).
• An array(dist) of length (n), where ( dist\[i] ) represents the distance of the( i )-th road (in kilometers).

## Output Format
• Return the minimum speed (s ) (an integer) required to complete the joumey in less than or equal to (t) or ( -1 ) if it is not possible.
