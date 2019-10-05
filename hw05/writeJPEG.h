// these preprocessor directives are a guard against this header filed
// being included twice
#ifndef WRITEJPEG_H
#define WRITEJPEG_H

void writeJPEG (unsigned char* array, char* magic, int width, int height, int max_pix);

#endif
