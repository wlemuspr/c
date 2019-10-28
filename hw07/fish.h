#ifndef fish_h
#define fish_h

#include <iostream>
#include <cstdlib>

class Angle;
class Population;

class Fish{
    friend class
    Population;
private:
    double x, y, speed;
    Angle* direction;
    Angle* turn_rate;
    Population p;
    
public:
    Fish();
    Fish(double x, double y, double speed, Angle direction, Angle turn_rate, Population* p);
    virtual~ Fish();
    
    void swim();
    
    double getX();
    
    double getY();
    
    friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};




#endif /* fish_hpp */
