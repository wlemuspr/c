//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#include <cstdio>
#include "readPPM.h"



unsigned char* ppmRead(int* height, int* width){
    //open file to read
    //char header[10];
    //int max_pix,size;
    FILE* fp = fopen("test.ppm","rb");
    fscanf(fp,"%d\n %d\n", height, width);
    
     int pixels = (*width * *height)*3;
    unsigned char* array_pix = new unsigned char [pixels];

    
    fread(array_pix, sizeof(unsigned char), (pixels), fp);
    fclose(fp);
    printf("done reading\n");
    return array_pix;
    
}



