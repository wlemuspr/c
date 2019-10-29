//  main.cpp
//  Created by wendy Lemus on 10/23/19.
//
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>
#include "Angle.h"
#include "Fish.h"
#include "Population.h"


int main(){
    

    printf("Welcome");
    
    Population p;
    Fish f(0,0,5,Angle(30),Angle(60),&p);
    Fish g(0,0,6,Angle(45),Angle(45),&p);
    Fish n(0,0,5,Angle(-30),Angle(120),&p);
    Fish k(0,0,4,Angle(-45),Angle(-120),&p);
    
    int time = 0;
    std::cout<<"Fishes in the pool is "<<std::endl;
    for (int i; i<p.getSize(); i++){
        std::cout<<"/t"<< *(p.get(i))<<std::endl;
    }
    
    while(p.getSize()>0){
        time++;
        std::cout<<" "<<std::endl;
        std::cout<<"time is: "<<time<<std::endl;
        std::cout<<"Fishes position is: "<<std::endl;
        
        for (int i =0; i< p.getSize(); i++){
            p.get(i)->swim();
            std::cout<<"/t"<<*(p.get(i))<<std::endl;
            
            double distance = sqrt(pow(p.get(i)->getX(),2)+(pow(p.get(i)->getY(),2)));
            
            if(distance>=100){
                std::cout<<"/t"<< *(p.get(i))<<" dead"<<std::endl;
                Fish* fnew = p.get(i);
                fnew->~Fish();
                std::cout<<"The current pool size is "<<p.getSize()<<std::endl;
                }
            
            if((p.get(i)->getX() == 0)&& (p.get(i)->getY() == 0)){
                std::cout<<"/t new fishes"<<std::endl;
                new Fish(0,0,(rand() * 10),Angle(30), Angle(120), &p);
                
            }
        }
        
    }
    std::cout<<"All Fishes is dead"<<std::endl;
    return 0;
}
