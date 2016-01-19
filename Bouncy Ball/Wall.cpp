//
//  Wall.cpp
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
#include "Wall.h"
using namespace std;


Wall::Wall(){

    
}

vector<double> Wall::rebound(vector<double> velocity){ // 0 = horizontal, 1 = vertical
    
    if(orientation == 0){
    
    velocity[1]=-velocity[1];
    
    return velocity;
        
    }else{
    
        velocity[0] = -velocity[0];
        return velocity;
    }
    
}


