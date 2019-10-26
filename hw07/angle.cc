//
//  angle.cpp
//  
//
//  Created by wendy Lemus on 10/23/19.
//

#include "angle.h"
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cmath>
#define PI 3.14159265

Angle::Angle(){}

Angle::Angle(double x){
    this->x=x;
    have_sin = false;
    have_cos = false;
}
//destructor
Angle::~Angle(){
    printf("destroy it all %lf\n",x);
}

//get angle func
double Angle::getAngle() const{
    return x;
}
//set pionter to x
void Angle::setAngle(double  x){
    this->x=x;
}
//correct angle
void Angle::correctAngle(double m){
    //if angle is bigger than 360
    if (m > 360) m = std::fmod(m,360);
    //if angle is less than 360 add
    if(m < 0) m = std::fmod(m,360)+360;
    this->x=m;
}
// + op
Angle Angle::operator+(const Angle& a)const{
    Angle answer;
    answer.correctAngle( x + a.getAngle());
    return answer;
}
// += op
const Angle& Angle:: operator +=(const Angle& a){
    x += a.getAngle();
    correctAngle(this->x);
    return *this;
}
//-
Angle Angle::operator-(const Angle& a) const{
    Angle answer;
    double m = x-a.getAngle();
    answer.correctAngle(m);
    return answer;
}
//-=
const Angle& Angle:: operator-=(const Angle& a){
    x-= a.getAngle();
    correctAngle(this->x);
    return *this;
}
//* mul
Angle Angle:: operator*(double a) const{
    Angle answer;
    double m = x * a;
    answer.correctAngle(m);
    return answer;
    }
//*=
const Angle& Angle::operator*=(double a){
    x*= a;
    correctAngle(this->x);
    return *this;
}
// divide
Angle Angle::operator/(double a)const{
    Angle answer;
    if (a==0) throw "division by a zero angle";
    else{
        double m = x/a;
        answer.correctAngle(m);
        return answer;
    }
}
//  /=
const Angle& Angle::operator/=(double a){
    if (a==0) throw "division by a zero angle";
    else{
        x/=a;
        correctAngle(this->x);
        return *this;
    }
}
//equal
bool Angle::operator==(const Angle& a)const{
    return x ==a.getAngle();
}
//not equal
bool Angle::operator!=(const Angle& a)const{
    return x !=a.getAngle();
}

const Angle& Angle::operator=( const Angle& a){
    this->x = a.getAngle();
    return *this;
}

const Angle& Angle::operator=(const double m){
    this->x =m;
    return *this;
}
//  sin
double Angle::getSin() const{
    if(!have_sin){
        sinValue = std::sin(x*PI/180.0);
        have_sin = true;
    }
    return sinValue;
}
//  cos
double Angle::getCos() const{
    if(!have_cos){
        cosValue = std::cos(x*PI/180.0);
        have_cos = true;
    }
    return cosValue;
}
//degree
std::ostream& operator<<(std::ostream& out, const Angle& a){
    out<<a.x<<" degree";
    return out;
}
