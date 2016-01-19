//
//  ball.cpp
//  Bouncy Ball
//
//  Created by Jake Minns on 22/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ball.h"
#include "Wall.h"

using namespace std;

Ball::Ball(){
    radius =0.1;
    
}

vector<double> Ball::ball_collision_area(vector<double> velocity){//calculates velocity unit vector and multiplies by radius to calculate face of ball in contact with wall
    vector<double> ball_area(2);
    ball_area[0] = (velocity[0]/(sqrt((pow(velocity[0],2))+(pow(velocity[1],2)))))*radius;
    ball_area[1] = (velocity[1]/(sqrt((pow(velocity[0],2))+(pow(velocity[1],2)))))*radius;
    return ball_area;
}

