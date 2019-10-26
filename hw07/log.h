#ifndef log_h
#define log_h

#include <string>

class Log;

    private:
        Log();
    
    public:
        virtual~Log();
        static Log& getInstance();
    
    void print(const std::string& message);

};


#endif /* log_hpp */
