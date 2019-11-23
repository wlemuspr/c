//  main.cpp
//  Created by wendy Lemus on 10/23/19.
//
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h>
#include "Angle.h"
#include "Fish.h"
#include <vector>
//#include "Population.h"


int main(){
    

    printf("Welcome");
    
    std::vector<Fish*> p;
    Fish f(0,0,0,Angle(30),Angle(60),&p);
    Fish g(0,0,0,Angle(45),Angle(45),&p);
    Fish n(0,0,0,Angle(-30),Angle(120),&p);
    Fish k(0,0,0,Angle(-45),Angle(-120),&p);
    
    int time = 0;
    std::cout<<"Fishes in the pool is "<<std::endl;
    for (int i; i<p.push_back[i]; i++){
        std::cout<<"/t"<< *(p.[i])<<std::endl;
    }
    
    while(p.getSize()>0){
        time++;
        std::cout<<" "<<std::endl;
        std::cout<<"time is: "<<time<<std::endl;
        std::cout<<"Fishes position is: "<<std::endl;
        
        for (int i =0; i< p.getSize(); i++){
            p[i]->swim();
            std::cout<<"/t"<<*(p[i])<<std::endl;
            
            double distance = sqrt(pow(p[i]->getX(),2)+(pow(p[i]->getY(),2)));
            
            if(distance>=100){
                std::cout<<"/t"<< *(p[i])<<" dead"<<std::endl;
                Fish* fnew = p[i];
                fnew->~Fish();
                std::cout<<"The current pool size is "<<p.getSize()<<std::endl;
                }
            
            if((p[i]->getX() == 0)&& (p[i]->getY() == 0)){
                std::cout<<"/t new fishes"<<std::endl;
                new Fish(0,0,(rand() * 10),Angle(30), Angle(120), &p);
                
            }
        }
        
    }
    std::cout<<"All Fishes is dead"<<std::endl;
    return 0;
}
