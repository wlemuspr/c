//created by Wendy Lemus
#include "Fish.h"
#include "Population.h"
#include <cstdio>
#include <iostream>

//setting size
Population::Population(){
    fishes = new Fish*[100];
    this->size = 0;
}
//cleaning up all the fishes
Population::~Population(){
    printf("delete populatoin\n");
    delete [] fishes;
    fishes = NULL;
}

void Population::add(Fish* f){
    fishes[size] = f;
    size++;
}

int Population::getSize() const{
    return size;
}

Fish* Population::get(int index) const{
    return fishes[index];
}

void Population::remove(Fish* f){
    int index = 0;
    while ((index<size) && (f!=fishes[index]))
        index++;
    if (index == size)
        printf("The fish is not here");
    else{
        size--;
        fishes[index] = fishes[size];
    }
}
