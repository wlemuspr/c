//
//  main.cpp
//  Swap
//
//  Created by wendy Lemus on 9/10/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//problem
/*Write a function that swaps the values of two variables. Write a program that calls this
 function, taking input from stdin and writing the values to stdout. Don’t print from
 inside the function. Put the function in a separate file from your main. Hint: use
 pointers.*/

#include <iostream>
#include "swap.h"

int main(int argc, const char * argv[]) {
    int x=1; int y =2; //values to swtich
    swapNum(&x,&y); //calling function
    printf("%d\n",x); //new x
    printf("%d\n",y); //new y
}



