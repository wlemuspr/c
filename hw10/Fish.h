#ifndef Fish_h
#define Fish_h

#include <iostream>
#include <cstdlib>

class Angle;
class Population;

class Fish{
    friend class Population;
protected:
    double x, y, speed;
    Angle* direction;
    Angle* turn_rate;
    std::vector<Fish*>* p;
    
public:
    Fish();
    Fish(double x, double y, double speed, Angle direction, Angle turn_rate, std::vector<Fish*>* p);
    virtual~ Fish();
    
    void swim();
    
    double getX();
    
    double getY();
    
    friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};




#endif /* fish_hpp */
