# Generic-Cycle-Finder

This project implements a generic version of Floyd’s Tortoise and Hare algorithm to detect and compute the length of a cycle in any function-defined sequence. The solution leverages C++ templates and is fully type-agnostic, enabling application to a wide variety of contexts.

📌 Description

The function findCycleLength<T, F>() accepts:
	•	T: a starting element of any type
	•	F: a function (or lambda/functor) of type T → T that defines the next element in the sequence

It returns the length of the first cycle encountered in the sequence:
x, f(x), f(f(x)), f(f(f(x))), ...
