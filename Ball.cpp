//
// Created by Khrastiik on 20.09.2021.
//

#include "Ball.h"

Ball::Ball(double radius) {
    this->radius = radius;
    
    calc_volume();
    calc_weight();
}

Ball::Ball(double radius, double density) {
    this->radius = radius;
    this->density = density;
    
    calc_volume();
    calc_weight();
}

void Ball::set_radius(double radius) {
    this->radius = radius;
    
    calc_volume();
    calc_weight();
}

void Ball::set_density(double density) {
    this->density = density;
    
    calc_volume();
    calc_weight();
}

void Ball::set_limit(double limit) {
    this->limit = limit;
    
    calc_limit();
}

void Ball::calc_volume() {
    volume = (4 * M_PI * pow(radius, 3)) / 3;
}

void Ball::calc_weight() {
    weight = volume * density;
}

void Ball::calc_limit() {
    double r1 = pow((3 * limit) / (4 * density * M_PI), 1./3);
    
    if(radius - r1)
        prevention_limit = std::ceil(radius - r1);
}

bool Ball::is_limit() {
    if(prevention_limit)
        return true;
    else
        return false;
}

double Ball::show_limit() {
    return prevention_limit;
}

double Ball::get_volume() {
    return volume;
}

double Ball::get_weight() {
    return weight;
}

double Ball::get_density() {
    return density;
}
double Ball::get_limit() {
    return limit;
}









