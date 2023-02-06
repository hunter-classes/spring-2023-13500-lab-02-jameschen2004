#include <iostream>
#include "funcs.h"

void print_interval(int lower_num, int upper_num){

    std::cout << "The interval range will be between \n" 
    << lower_num << " and " << upper_num << ". \n";
    for(int num = lower_num; num <= upper_num; num++){
        std::cout << num << " ";
    }
    std::cout << "\n";
}
