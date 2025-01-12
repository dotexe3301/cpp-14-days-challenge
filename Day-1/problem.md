# Problem Background

You are a software engineer at FreeFIix. a leadng video streaming platform. The platform processes millons of video frames every second, converting them into binary streams for transmission. Recently, customers reported seeing occasional frame
glitches in their favorite shows.
The team discovered that these glitches occur when certain in the video stream. You task is
to develop a system that can quickly identify these problematic patterns before they reach user's device.

# Problem Statement

You need to implement a function that can efficiently detect if a specific "glitch pattern" exists within a larger stream of video data. This will help prevent corrupted frames from reaching users's devices.

## Input Format

- videostream: A string representng a segment of the video data stream (length: 1 to 10^5)
  - Contains only '0' and '1' characters.

- glitchpattern: A string the known probknatic pattern (lerwth: 1 to 100).
  - Contains only '0' and '1' characters.

## Output Format

Retum true if the glitch pattem is found in the video stream.
Retum false otherwise.
