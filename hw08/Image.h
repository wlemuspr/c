//
//  Image.hpp
//  
//
//  Created by wendy Lemus on 10/30/19.
//

#ifndef Image_h
#define Image_h

#include <stdio.h>


class Image{

private:
int width;
int height;
unsigned char* pixels;
    unsigned char* array;
    //int cinfo = new;

    void ppmRead();
    void writeppm();
    void writeJPEG();
};
#endif /* Image_hpp */
