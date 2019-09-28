//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#include <cstdio>
#include "readPPM.h"



int** ppmRead(int height, int width){
    //open file to read
    char header[10];
    int max_pix;
    FILE* fp = fopen("test.ppm","rb");
    
    /*error
    if(fd == NULL){
        printf("Error in Opening the file\n");
        return NULL;
    }
    */
    //reader
    printf("Header reader\n");
    fscanf(fp,"%s %d %d %d\n",header, width, height, &max_pix);
    printf("PSix: %s\n", header);
    printf("Width: %d\n", width);
    printf("Height: %d\n", height);
    printf("maximum: %d\n", max_pix);
    
     int size = (width*height)*3;
    
    unsigned char* pixels = new unsigned char[size];
    
    fread(pixels, sizeof(unsigned char), size, fp);
    fclose(fp);
    int nsize = width * height;
    int** array = new int*[height];
    *array = new int[nsize];
    
    for(int k = 1; k< height; k++){
        array[k] = array[k-1] + width;
    }
    
    int f = 255;
    unsigned char* ff = (unsigned char*)(&f);
    int counter =0;
    
    int*  flat = *array;
    for (int i=0; i<nsize; i++){
        
        unsigned char* ptr = (unsigned char*)(&flat[i]);
        ptr[0] = ff[0];
        ptr[1] = pixels[counter];
        ptr[2] = pixels[counter+1];
        ptr[3] = pixels[counter+2];
        counter+=3;
    }
    return array;
}



