//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#inclde "writePPM.h"
#include "readPPM.h"
#include <cstdio>

void writeppm(int* width, int* height, int* size, unsigned char* pixel){
    FILE* fw =fopen("C:\\Pictures\\rwrite.ppm", "wb");
    //error
    if(fw == NULL){
        printf("Error in Opening the output file\n");
        return;
    }
    fprintf(fw, "%s\n%d %d\n%d\n","P6", *width, *height, 255);
    //fprintf(nf, "%s\n%d %d\n%d\n", chill, width, height, max_pix);
    fwrite(pixel, sizeof(unsigned char),*size,fw);
    fclose(fw);
    
}


