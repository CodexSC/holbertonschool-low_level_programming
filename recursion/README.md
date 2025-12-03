Recursion

Iterative programming

Iteration in computing is the repetition of
a block of statements within a computer
program (using a loop).

Recursion

Recursion is a method where
the solution to a problem
depends on solutions to smaller
instances of the same problem.
A recursive function is a
function that calls itself.

Factorial!

Iteration
5! = 5 * 4 * 3 * 2 * 1
5! = 5 * 4 * 3 * 2
5! = 5 * 4 * 6
5! = 5 * 24
5! = 120

Recursion
5! = 5 * 4!
4! = 4 * 3!
3! = 3 * 2!
2! = 2 * 1!
1! = 1 * 0!
0! = 1

!n = n * !(n - 1)
factorial(n) = n * factorial(n - 1);
