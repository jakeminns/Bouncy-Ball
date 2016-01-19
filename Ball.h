//
//  Ball.h
//  Bouncy Ball
//
//  Created by Jake Minns on 22/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#ifndef Bouncy_Ball_Ball
#define Bouncy_Ball_Ball
#include <vector>
#include <stdio.h>

using namespace std;
#endif

class Ball{
    
public:
    Ball();
    double radius;
    vector<double> ball_collision_area(vector<double> velocity);

private:
    
};