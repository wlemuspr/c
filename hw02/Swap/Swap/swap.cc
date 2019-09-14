//definition of function
#include "swap.h"
void swapNum(int* x, int* y){
    int temp; //temp variable to switch
    temp = *x; //loading 1 into temp
    *x = *y; //2 into x
    *y = temp;// 1 into y
}

