//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#include "readPPM.h"
#include <cstdio>


unsigned char* ppmRead(int* height, int* width, int* size){
    //open file to read
    char header[10];
    int max_pix;
    FILE* fd = fopen("C:\\Pictures\\test.ppm","rb");
    
    //error
    if(fd == NULL){
        printf("Error in Opening the file\n");
        return NULL;
    }
    //reader
    printf("Header reader\n");
    fscanf(fd,"%s %d %d %d\n",header, width, height, &max_pix);
    printf("PSix: %s\n", header);
    printf("Width: %s\n", *width);
    printf("Height: %d\n", *height);
    printf("maximum: %d\n", max_pix);
    
    *size = (*width* *height)*3;
    
    unsigned char* pixels = new unsigned char[*size];
    
    fread(pixels, sizeof(unsigned char), *size, fd);
    fclose(fd);
    return pixels;
}



