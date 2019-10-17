//
//  main.cpp
//  Created by wendy Lemus on 10/16/19.
//

#include "Angle.h"
#include <cstdio>
#include <iostream>


int main(){
    
    Angle x(-340);
    Angle y(350);
    
    Angle b = x+y;
    Angle a = x-y;
    //add and sub
    printf("The sum angle is %f\n", b.getAngle());
    printf("The angle subtracted is %f\n", a.getAngle());
    
    x+=y;
    y-=x;
    
    printf("The += angle is %f\n", b.getAngle());
    printf("The -= angle is %f\n", a.getAngle());
    Angle f(350);
    
    //multiply
    Angle m = f*3;
    printf("The m angle is %f\n ", m.getAngle());
    m+= 5;
    printf("The *= is %f\n", m.getAngle());
    

    //divide
    try{
    Angle w = y/5;
    y/=5;
    printf("The division angle is %f\n", w.getAngle());
    printf("The div angle is %f\n", y.getAngle());
    } catch (const char* msg){
        std::cout<<msg<<std::endl;
    }
    
    printf("Angle %f == Angel %f is %s\n", f.getAngle(), y.getAngle(), f==y ? "true" : "false");
    printf("angle x is %f\n",x.getAngle());
    x=y;
    printf("Angle y is after x=y %f\n",x.getAngle());
    x=40;
    printf("Angle is x after assign num %f\n",x.getAngle());
}
