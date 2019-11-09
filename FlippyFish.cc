//
//  FlippyFish.cpp
//  
//
//  Created by wendy Lemus on 11/5/19.
//

#include "FlippyFish.h"
#include "Angle.h"
#include <cstdlib>

FlippyFish::FlippyFish(){
    :Fish(){
}

//FlippyFish::FlippyFish(double x, double y,double speed, Angle direction, Angle turn_rate, Population* p){
   // Fish(x,y,speed,direction, turn_rate,p){
      
    
//}

    void FlippyFish::swim(){ //provided
        int choice = rand() % 3;
        if( choice == 0) *direction -= *turn_rate;
        else if(choice == 2) *direction += *turn_rate;
        
        this->x += speed * direction->getCos();
        this->y += speed * direction->getSin();
    }
}
