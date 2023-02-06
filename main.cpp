/** Spring 2023 - Lab 02

* Last name: Chen

* First name: James

* GitHub username: jameschen2004

* Notes: Write a ~void~ function named ~print_interval(int L,int U)~ 
that will accept two integer parameters and will print the output as 
specified in the main lab. Test this function by calling it
from the ~main~ function which should be defined in ~main.cpp~. 
*/

#include "funcs.h"

int main(){

    int lower_num = -10;
    int upper_num = 10;

    print_interval(lower_num,upper_num);

    print_interval(1,20);

    print_interval(0,10);

    return 0;
}
