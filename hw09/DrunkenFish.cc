//
//  DrunkenFish.c
//  
//
//  Created by wendy Lemus on 11/5/19.
//to much booze class

#include "DrunkenFish.h"
#include "Angle.h"
#include <cstdlib>

DrunkenFish::DrunkenFish(){
   : Fish();
}


void DrunkenFish::~swim(){
    int choice = rand() % 4;
    
    if ( choice == 0) x += speed;
    else if (choice == 1) y+= speed;
    else if (choice == 2) x-= speed;
    else
        y-= speed;
} //end of swim method
