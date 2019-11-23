//
//  FlippyFish.cpp
//  
//
//  Created by wendy Lemus on 11/5/19.
//

#include "FlippyFish.h"
#include <cstdlib>

FlippyFish::FlippyFish()
    :Fish() {
        
}


    void FlippyFish::swim(){ //provided
        int choice = rand() % 3;
        if( choice == 0) direction -= turn_rate;
        else if(choice == 2) direction += turn_rate;
        
        this->x += speed * direction->getCos();
        this->y += speed * direction->getSin();
    }

