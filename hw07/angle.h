//
//  angle.hpp
//  
//
//  Created by wendy Lemus on 10/23/19.
//

#ifndef angle_h
#define angle_h

#include <iostream>

class Angle{
private:
    double x;
    mutable double sinValue, cosValue;
    mutable bool have_sin, have_cos;
    
public:
    Angle();
    Angle(double x);
    virtual ~Angle();
    
    double getAngle() const;
    void setAngle(double x);
    void correctAngle(double m);
    Angle operator+(const Angle& a) const;
    const Angle& operator+=(const Angle& a);
    Angle operator-(const Angle& a)const;
    const Angle& operator-=(const Angle& a);
    Angle operator*(double a) const;
    const Angle& operator*=(double a);
    Angle operator/(double a) const;
    const Angle& operator/=(double a);
    bool operator==(const Angle& a) const;
    bool operator!=(const Angle& a)const;
    const Angle& operator=(const Angle& a);
    const Angle& operator=(const double m);
    double getSin() const;
    double getCos() const;
    friend std::ostream& operator<<(std::ostream& out, const Angle& a);
};

#endif /* angle_hpp */
