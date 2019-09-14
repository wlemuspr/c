//definition of function
#include "RunCount.h"
void write(){
    
    string file_name = "abc.txt";
    FILE *fo = fopen(file_name.c_str(),"r");
    //check if file is opened
    if(fo == 0)
    {
        cout<<"\nError: Unable to find file: "<<file_name<<endl;
        exit(1);
    }
    //count variable
    int count;
    //using fscanf copy the count
    fscanf(fo,"%d",&count);
    //close file
    fclose(fo);
    
    count++;
    if(count == 0)
    {
        cout<<"\nThis is the first time program has executed.";
    }
    else
    {
        cout<<"\nThe program has executed "<<count<<" number of times\n";
    }
    
    
    FILE *out = fopen(file_name.c_str(),"w");
    fprintf(out,"%d",count);
    fclose(out);
    
    
    
}



