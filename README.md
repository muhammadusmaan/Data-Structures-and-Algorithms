# Data Structures and Algorithms
Explore C++ projects: 
1. Predator-Prey Game
2. Dynamic Array Implementation
3. Expression Evaluator with Stacks
4. Airport Simulation System with Queue

**Project 1: Predator-Prey Game (C++)**
Simulate a Predator-Prey scenario on a 2D array. The Predator is attracted to the Prey, while the Prey is repelled away from the Predator. The positions are denoted by Pi,j for the Predator and pij for the Prey. The attraction/repulsion is proportional to the distance between the Predator and Prey, calculated using the Cartesian formula. Movements are restricted to row or column-wise. Can the Predator catch the Prey? Is there an optimized algorithm to guarantee the Predator never catches the Prey?

**Project 2: Dynamic Array Implementation (C++)**
Develop a pure dynamic array class with the following features:

Dynamically set array size.
Dynamic growth and shrinkage: Double the size when approximately 95% utilized, halve when about 40% utilized.
Implement methods such as insertAt, insertInOrder, insertLast, deleteAt, deleteLast, searchAndDelete, etc.
Array traversal for screen output.
Menu-based program for array input, output, search, delete, insertInOrder, etc.


**Project 3: Stack-Based Expression Evaluator (C++)**
Create an expression evaluator with two main components:

Infix to Postfix converter.
Postfix expression evaluator.
Both components use stacks of different types. Core functionalities include:
Input an infix expression with single-digit operands and operators (+, -, *, /, ^).
Support for parentheses.
Output the postfix expression on the screen.
Calculate the solution of the postfix expression.
Indicate syntax errors in case of calculation errors.
Advanced Features (optional):
Multidigit and decimal operands.
Variable operands.
Complex operands like exp(x), sin(x), a+b(c+d), -a%b, etc.

**Project 3: Airport Simulation System with Queue Data Structure (C++)**

The C++ code implements an airport simulation system, employing a queue data structure to orchestrate the orderly flow of aircraft. The program defines a Plane class with attributes like ID and priority (airtime), randomly generated during initialization. The Queue class, functioning as an array-based queue, facilitates essential operations such as enqueue, dequeue, and status display.

In the simulation, aircraft arrive at random intervals, enqueued and sorted based on priority. Departures trigger dequeuing with subsequent airtime adjustments. The program accommodates diverting scenarios under specific conditions, providing real-time indications of diverted planes. The status of the landing queue, displaying aircraft IDs, is periodically presented.

The simulation runs until predefined conditions are met, showcasing effective time management for arrivals, departures, and diverting intervals. The key highlight is the utilization of the queue data structure to emulate the systematic flow observed in real-world airport operations.

