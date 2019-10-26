//
//  fish.cpp
//  
//
//  Created by wendy Lemus on 10/23/19.
//
#include "angle.h"
#include "fish.h"
#include "population.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>

Fish::Fish{}

Fish::Fish(double x, double y, double speed, Angle direction, Angle turn_rate, population* p){
    this->x = x;
    this->y = y;
    this->speed = speed;
    this->direction = &direction;
    this->p = p;
    p->add(this);
}
Fish::~Fish(){
    std::cout<<"bye bye fishy "(<<this->x<<" ,"<<this->y<<")"<<std::endl;
    p->remove(this);
}
void Fish::swim(){ //provided
    int choice = rand() % 3;
    if( choice == 0) *direction -= *turn_rate;
    else if(choice == 2) *direction += *turn_rate;
    x += speed * (direction->getCos());
    y += speed * (direction->getSin());
}

double Fish::getX(){
    return this->x;
}
double Fish::getY(){
    return this->y;
}
std::ostram& operator<<(std::ostream& out, const Fish& f){
    out<<"("<<f.x<<","<<f.y<<")";
    return out; 
}
