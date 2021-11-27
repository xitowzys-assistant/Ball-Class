//
// Created by Khrastiik on 20.09.2021.
//

#ifndef ANDREYCLASS_BALL_H
#define ANDREYCLASS_BALL_H

#include <cmath>

class Ball {

public:
    Ball(double radius);
    Ball(double radius, double density);

    void set_density(double density);
    void set_radius(double radius);
    void set_limit(double limit);

    double get_weight();
    double get_volume();
    double get_density();
    
    double get_limit();
    bool is_limit();
    double show_limit();
    
private:
    // Радиус, объем, масса, плотность, предел
    double radius, volume, weight, limit;
    
    // Стандартная плотность свинец
    double density = 11.350;
    
    // На сколько уменьшить радиус
    double prevention_limit = 0;

    void calc_volume();
    void calc_weight();
    void calc_limit();
};


#endif //ANDREYCLASS_BALL_H
