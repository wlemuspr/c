//  Created by wendy Lemus on 10/23/19.


#include "log.h"
#include <string>
#include <iostream>

Log::Log(){}

Log::~Log(){}
    
    Log& Log::getInstance(){
        static Log instance;
        return instance;
    }
    void Log::print(const std::string& message){
        std::cout<<message<<std::endl;
    }

