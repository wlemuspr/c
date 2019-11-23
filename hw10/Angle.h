//
//  angle.hpp
//  
//
//  Created by wendy Lemus on 10/23/19.
//

#ifndef angle_h
#define angle_h

#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.14159265
template <class Angle> {


private:
    Angle x;
     double sinValue, cosValue;
     bool have_sin, have_cos;
    
public:
    Angle(){}
    Angle(Angle x){this->x =x;};
    virtual ~Angle(){}
    
    Angle getAngle() const{return x;}
    void setAngle(Angle x){this->x=x;}
    void correctAngle(Angle m){
        if (m > 360) m = std::fmod(d,360);
        if (m < 0) m = std::fmod(d, 360) + 360;
        this_x = m;
    }
    Angle operator+(const Angle& a) const{
        Angle answer.correctAngle( x + a.getAngle());
        return answer;
    }
    const Angle& operator+=(const Angle& a){
        x += a.getAngle();
        correctAngle(this->x);
        return *this;
    }
    Angle operator-(const Angle& a)const{
        Angle answer;
        double m = x - a.getAngle();
        answer.correctAngle(m);
        return answer;
    }
    const Angle& operator-=(const Angle& a){
        x-= a.getAngle();
        correctAngle(this->x);
        return *this;
    }
    Angle operator*(Angle a) const{
        Angle answer;
        double m = x - a.getAngle();
        answer.correctAngle(m);
        return answer;
    }
    const Angle& operator*=(Angle a){
        x *= a;
        correctAngle(this->x);
        return *this;
    }
    Angle operator/(Angle a) const{
        Angle answer;
        if (a == 0)throw "Division by zero";
        else{
            double m = x /a;
            answer.correctAngle(m);
            return answer;
        }
    }
    const Angle& operator/=(Angle a){
        if ( a== 0) throw "Division by zero";
        else{
            x /= a;
            correctAngle(this->x);
            return *this;
        }
    }
    bool operator==(const Angle& a) const{
        return x == a.getAngle();
    }
    bool operator!=(const Angle& a)const{
        return x != a.getAngle();
    }
    const Angle& operator=(const Angle& a){
        this->x = a.getAngle();
        return *this;
    }
    const Angle& operator=(const Angle m){
        this ->x=m;
        return *this;
    }
    double getSin() const{
        if(!have_sin){
            sinValue = std::sin(x*PI/180.0);
            have_sin = true;
        }
        return sinValue;
    }
    double getCos() const{
        if(!have_cos){
            cosValue = std::cos(x*PI/180.0);
            have_cos = true;
        }
        return cosValue;
    }
    friend std::ostream& operator<<(std::ostream& out, const Angle& a){
        out<<a.x<<"degree";
        return out;
    }
};

#endif /* angle_hpp */
