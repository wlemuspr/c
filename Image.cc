//
//  Image.cpp
//  
//
//  Created by wendy Lemus on 10/30/19.
//

#include "Image.h"
#include <stdlib.h>
#include <jpeglib.h>
#include <cstdio>


    
    //reading PPM
    void Image::ppmRead(){
        //open file to read
        //char header[10];
        //int max_pix,size;
        FILE* fp = fopen("test.ppm","rb");
        fscanf(fp,"%d %d\n", &height, &width);
        
         int pixels = (width * height)*3;
        unsigned char* array_pix = new unsigned char [pixels];

        
        fread(array_pix, sizeof(unsigned char), (pixels), fp);
        fclose(fp);
        printf("done reading\n");
        
        
    }


    //write ppm
    void Image::writeppm()
    {
        
        int size = width*height;
        
    
        
        
        FILE* fw =fopen("rwrite.ppm", "wb");
        fprintf(fw, "%s\n%d %d\n%d\n","P6", width, height, 255);
        
        /*if(fw == NULL){
            printf("Error in Opening the output file\n");
            return;
        }*/
       
        //fprintf(nf, "%s\n%d %d\n%d\n", chill, width, height, max_pix);*
        fwrite(pixels, sizeof(unsigned char),size*3,fw);
        fclose(fw);
        
    }
//unsigned char* array, char* magic, int width, int height, int max_pix
    
//write JPEG

    void Image::writeJPEG()
    {
        FILE* fw =fopen("new.JPEG", "wb");
        int pixels = width * height *3;
        
        //jpeg structs compress and error just in case it booms
        //jpeg_create_compress_ptr;
        //struct jpeg_compress_struct cinfo;
        struct jpeg_error_mgr jerr;
        struct jpeg_compress_struct cinfo;
        cinfo.err = jpeg_std_error(&jerr);
        //jpeg_create_compress JPP(&cinfo); //memory
        
     
        jpeg_stdio_dest(&cinfo,fw);
        
        cinfo.image_width = width;
        cinfo.image_height = height;
        cinfo.input_components = 3;
        cinfo.in_color_space = JCS_RGB;
        
        jpeg_set_defaults(&cinfo);
        //jpeg_start_compress(&cinfo, true);
        
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




