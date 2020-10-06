// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef laba1_EXPORTS
#define laba1_API __declspec(dllexport)
#else
#define laba1_API __declspec(dllimport)
#endif

extern "C" laba1_API class Point;


// Produce the next value in the sequence.
// Returns true on success and updates current value and index;
// false on overflow, leaves current value and index unchanged.


// Get the current value in the sequence.
extern "C" laba1_API float dist(Point p1, Point p2);
extern "C" laba1_API float bruteForce(Point P[], int n);



