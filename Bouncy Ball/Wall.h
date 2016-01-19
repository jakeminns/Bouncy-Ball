//
//  Wall.h
//  Bouncy Ball
//
//  Created by Jake Minns on 22/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#ifndef Bouncy_Ball_Wall
#define Bouncy_Ball_Wall
#include <vector>
#include <stdio.h>


#endif
using namespace std;
class Wall{
    
public:
    
    Wall();
    
    double centre_x;
    double centre_y;
    double width;
    double height;
    int orientation;
    
    vector<double> rebound(vector<double> velocity);
    
private:

    
};