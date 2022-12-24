// lab4.cpp
// to illustrate recursion & the scrum framework

/*************************************************************************
 * AUTHOR     : First Last
 * Lab #4     : recursion & the scrum framework
 * CLASS      : CS 1C
 * SECTION    : Tu,Th 2:30-5:20pm
 * DUE DATE   : 2-16-17
*************************************************************************/

#include <iostream>

using namespace std;

// function definitions go into Lab4.cpp:

// lab4.cpp

namespace Lab4 {

    // function definitions:

    //------------------------------------------------------------------------------

    void sandwich_recursive(int n)
        // print sandwich values out to the console
        // values increase from 1 to n and then decrease from n to 1
    {
        static int number = 0; // init number to zero, increment with each recrusive call
        number++;              // note: number is a STATIC INT, thus a global variable in function scope
        cout << number;
        // Q#1 anwswer
        // base case: middle of sandwich reached when number = n-1
        if (number < n) sandwich_recursive(n);
        cout << number;
        number--;              // note: number is a STATIC INT, thus a global variable in function scope
    }

    void sandwich_loop(int n)
        // print sandwich values out to the console
        // values increase from 1 to n and then decrease from n to 1
    {
        // increasing numbers
        for (int i = 1; i <= n; i++) cout << i;
        // decreasing numbers
        for (int i = n; i >= 1; i--) cout << i;
    }

    //------------------------------------------------------------------------------

    constexpr float factorial_recursive(int n)
        // factorial n!
    {
        return n > 1 ? n * factorial_recursive(n - 1) : 1;
    }

    constexpr float factorial_iterative(int n) // constexpr is ignored by compiler, see Q#3 answer below
        // Factorial(n) = n * (n - 1) * (n - 2) ... * 1
        // the factorial formula above suggests an iterative solution
        // n! = running product beginning with n, decreasing to n-1, n-2, ..., 1
        // with each loop increment, until one is reached
        //
        // with recursion, n! is found by breaking the problem down into increasinly smaller
        // subproblems (n-1)!, (n-2)! ... until the base case of 1! is reached
        // n! = running product beginning with the base case 1!, increasing to 2!, ..., n!
        // the value returned from successive iterative funciton calls
    {
        float sum = 1.0;
        for (int i = n; i > 1; i--) sum *= i;
        return sum;
    }

    //------------------------------------------------------------------------------

} // Lab4

//------------------------------------------------------------------------------

int main()
{
    // console header
    cout << endl;
    cout << "************************************** " << endl;
    cout << "*           Running Lab #4           * " << endl;
    cout << "*      Programmed by First Last      * " << endl;
    cout << "*      CS1C Tu Th 2:30-5:20 PM       * " << endl;
    cout << "************************************** " << endl;
    cout << endl;

    // print out sandwich sequence using recursive & iterative algorithms

    cout << "sandwich recursive: ";
    Lab4::sandwich_recursive(25);
    cout << endl;

    cout << "sandwich loop     : ";
    Lab4::sandwich_loop(25);
    cout << endl;

    cout << "factorial recursive: " << Lab4::factorial_recursive(25) << endl;

    cout << "factorial iterative: " << Lab4::factorial_iterative(25) << endl;

    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// Q#1: see sandwich_recursive() comments

// (footnote 1) The key value that you get from recursion is that you have a stack of function calls,
// rather than a single stack frame. Recursive algorithms can take advantage of having all of
// the extra information that is stored in each stack frame, whereas a loop only gets one set
// of local variables. As a result, a recursive function can wait for a recursive call to return
// and pick up right where it left off. To write a loop that would work this way, you would have
// to implement your own version of a stack.

// (footnote 1) The stack is a fixed size, which means that you cannot have limitless recursion. At some point,
// there won¡¦t be any more room for a new stack frame to be added onto the top of the stack¡Xjust like
// running out of space to stack up another plate in your cabinet.

// Q#2: see factorial_iterative() comments

// (footnote 1) Use recursion when¡K
// - The solution to a problem requires breaking down the problem into smaller versions of the same problem,
// and there isn¡¦t an obvious way of writing it as a loop.
// - The data structure you are working with is recursive (such as a linked list).

// (footnote 1) Use a loop when¡K
// - It¡¦s obvious how to solve the problem with a simple loop¡Xfor example, if you¡¦re adding a list of numbers
// together, you could write a recursive function, but it¡¦s not worth it.
// - When you¡¦re using a data structure that is indexed by number, such as an array.

// (footnote 1 - source) Allain, Alex. Jumping into C++ (Kindle Locations 4807-4811). Cprogramming.com. Kindle Edition. 

// Q#3

// (footnote 2) declairing factorial_recursive to be a constexpr will not alter the recursive nature of the function.
// however, constexpr factorial_recursive will be computed at compile time-rather than run-time.
// a constexpr function must:
// 1) constist of a single return statement
// 2) call only other constexpr functions
// 3) reference only other constexpr global variables
// factorial_iterative can't be written as a single return statement (1). it can not be expressed
// as a constexpr funtion.

// (footnote 2 - source) Constexpr - Generalized Constant Expressions in C++11 By Allain, Alex. http://www.cprogramming.com
//                       constexpr (C++) MSDN https://msdn.microsoft.com/en-us/library/dn956974.aspx

// Q#4

// CONSOLE IO

// C:\Users\jkath\Dropbox\CS1C Spring 17\Labs\Lab4
// £f g++ -std=c++1y -o0 -g3 lab4_solution.cpp -o lab4.exe

// C:\Users\jkath\Dropbox\CS1C Spring 17\Labs\Lab4
// £f lab4

// **************************************
// *           Running Lab #4           *
// *      Programmed by First Last      *
// *      CS1C Tu Th 2:30-5:20 PM       *
// **************************************

// sandwich recursive: 1234567891011121314151617181920212223242525242322212019181716151413121110987654321
// sandwich loop     : 1234567891011121314151617181920212223242525242322212019181716151413121110987654321
// factorial recursive: 1.55112e+025
// factorial iterative: 1.55112e+025