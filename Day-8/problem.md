# Problem Statement

You are working at Dreamflix, a popular streaming service, on their adaptive streaming engine. Your task is to help the system automatically select the highest quality video that can be streamed without buffering, based on a user's available bandwidth.

Each video quality has a minimum bandwidth requirement, and the system must:
- Select the highest quality that fits within the available bandwidth.
- If no quality is suitable, return "No Quality Available".

This feature ensures smooth playback while maximizing video quality. Choosing the wrong quality may lead to either buffering(annoying) or unnecessarily low-quality playback.

## Input Format
- An integer(b) representing the user's current bandwidth in kbps.
- An array(q) of (n) elements, where each element is a dictionary with the following keys:
  - quality: A string representing the quality of the stream.
  - required: An integer representing the minimum bandwidth required for that quality.

## Output Format

- A string representing the highest quality stream that won't buffer.
- If no quality is available, return "No Quality Available".

## Example

Input:<br>
bandwidth = 5000 (kbps) <br>
qualities = [<br>
    {quality: "4k", required: 15000},<br>
    {quality: "1080p", required: 5000},<br>
    {quality: "720p", required: 3000},<br>
    {quality: "480p", required: 1000},<br>
]<br>

Output:<br>
1080p
