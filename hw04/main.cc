//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//

#include <cstdio>
#include "readPPM.h"
#include "writePPM.h"

int main() {
    //const char* fileName = "test.ppm";
    int height =0;  //width of image
    int width=0;    //height of image
    
    int** pixels = ppmRead(width,height);
    
    writeppm(width, height, pixels);
    
    delete [] *pixels;
    delete [] pixels;
    pixels = NULL;
    
    }
    
    

