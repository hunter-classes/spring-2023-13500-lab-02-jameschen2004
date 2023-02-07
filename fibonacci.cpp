/** Spring 2023 - Lab 02

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Write a program fibonacci.cpp, which uses an array of ints 
to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main(){

    int fibonacci[60];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < 60; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    for(int i = 0; i < 60; i++){
    std::cout << fibonacci[i] << " ";
    }
// Numbers start diverging because the int type cannot store the required
// amount of digits needed to display the entire number, thus arbitrary
// values are given instead.
    return 0;
}