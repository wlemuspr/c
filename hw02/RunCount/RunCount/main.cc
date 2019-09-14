//
//  main.cpp
//  RunCount
//
//  Created by wendy Lemus on 9/11/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//Problem
/*Write a program that prints the number of times you have run it. The first time you run
 it, it should print “1”. The next time it should print “2”, etc. Hint: how can you store
 information when the program is not running?*/

#include <iostream>
#include <stdio.h>
#include "RunCount.h"
using namespace std;

void write(){

        string file_name = "abc.txt";
        FILE *fo = fopen(file_name.c_str(),"r");
        //check if file is opened
        if(fo == 0)
        {
            cout<<"\nError: Unable to find file: "<<file_name<<endl;
            exit(1);
        }
        //count variable
        int count;
        //using fscanf copy the count 
        fscanf(fo,"%d",&count);
        //close file
        fclose(fo);
        
        count++;
        if(count == 0)
        {
            cout<<"\nThis is the first time program has executed.";
        }
        else
        {
            cout<<"\nThe program has executed "<<count<<" number of times\n";
        }
        
        
    FILE *out = fopen(file_name.c_str(),"w");
    fprintf(out,"%d",count);
    fclose(out);
    
    
    
    }
    



int main(int argc, const char * argv[]){

    write();
    
   
    //return 0;
   
    
}


    
   



