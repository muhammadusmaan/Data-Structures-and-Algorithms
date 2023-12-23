# Data Structures and Algorithms
Explore C++ projects: 
1. Predator-Prey Game
2. Dynamic Array Implementation
3. Expression Evaluator with Stacks 

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

