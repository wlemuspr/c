//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//

#include <cstdio>
#include <jpeglib.h>
#include <setjmp.h>
#include "readPPM.h"
#include "writeJPEG.h"

int main() {
    //const char* fileName = "test.ppm";
    int height =0;  //width of image
    int width=0;    //height of image
    int max_pixel_val =255;
    char magic[5] = "p6";
    
    unsigned char* array = ppmRead(&width,&height);
    
    writeJPEG(array, magic, width, height, max_pixel_val);
    

    
    }
    
    

