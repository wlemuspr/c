//
//  main.cc
//  Pmg
//
//  Created by wendy Lemus on 9/18/19.
//  Copyright © 2019 wendy Lemus. All rights reserved.
//
#include <cstdio>
#include <stdlib.h>
#include <jpeglib.h>
#include "writeJPEG.h"
#include "readPPM.h"



void writeJPEG(unsigned char* array, char* magic, int width, int height, int max_pix)
{
    FILE* fw =fopen("new.JPEG", "wb");
    int pixels = width * height *3;
    
    //jpeg structs compress and error just in case it booms
    //jpeg_create_compress_ptr;
    //struct jpeg_compress_struct cinfo = new;
    struct jpeg_error_mgr jerr;
    struct jpeg_compress_struct cinfo;
    cinfo.err = jpeg_std_error(&jerr);
    jpeg_create_compress JPP(&cinfo); //memory
    
    jpeg_create_compress(&cinfo);
    jpeg_stdio_dest(&cinfo,fw);
    
    cinfo.image_width = width;
    cinfo.image_height = height;
    cinfo.input_components = 3;
    cinfo.in_color_space = JCS_RGB;
    
    jpeg_set_defaults(&cinfo);
    jpeg_start_compress(&cinfo, true);
    
    unsigned char* row_pointer;
    
    int row_stride = cinfo.image_width *3;
    while(cinfo.next_scanline < cinfo.image_height){
        row_pointer = &array[cinfo.next_scanline * row_stride];
        jpeg_write_scanlines( &cinfo,&row_pointer,1);
    }
    //finish
    jpeg_finish_compress(&cinfo);
    jpeg_destroy_compress(&cinfo);
    fclose(fw);
    }
    
    



