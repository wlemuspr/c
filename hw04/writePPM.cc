//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#include <cstdio>
#include "writePPM.h"
#include "readPPM.h"


void writeppm(int width, int height,int** array)
{
    int counter = 0;
    int size = width*height;
    unsigned char* pixel = new unsigned char [size*3];
    int* flat = *array;
    
    for(int i = size; i>=0; i--){
        unsigned char* ptr = (unsigned char*)(&flat[i]);
        pixel[counter] = ptr[1];
        pixel[counter+1] = ptr[2];
        pixel[counter+2] = ptr[3];
        counter =+3;
    }
    
    FILE* fw =fopen("rwrite.ppm", "wb");
    fprintf(fw, "%s\n%d %d\n%d\n","P6", width, height, 255);
    
    /*if(fw == NULL){
        printf("Error in Opening the output file\n");
        return;
    }*/
   
    //fprintf(nf, "%s\n%d %d\n%d\n", chill, width, height, max_pix);
    fwrite(pixel, sizeof(unsigned char),size*3,fw);
    fclose(fw);
    
}


