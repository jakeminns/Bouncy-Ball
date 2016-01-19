//
//  main.cpp
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

vector<double> initial_velocity(double theta_deg, double v_mag);
double grav_acc(double position,int co_ord);
bool Collision_check(vector<double> position, Wall wall, Ball ball, vector<double> ball_area);

vector<double> position(2);
vector<double> velocity(2);
vector<double> ball_area1(2);

double time_count=0;
double time_itr = 0.005;

bool check;

enum axis{x,y};








int main(){
    
    position[x] = 0;
    position[y] = 10;
    
double    v_mag = 5;
double    theta_deg = 45;
    
    velocity[0]=initial_velocity(theta_deg,v_mag)[0];
    velocity[1]=initial_velocity(theta_deg,v_mag)[1];
    
    Wall wall1;
    wall1.centre_x=0;
    wall1.centre_y=0;
    wall1.width=20;
    wall1.height=-1;
    wall1.orientation = 0;
    
    Wall wall2;
    wall2.centre_x=12;
    wall2.centre_y=20;
    wall2.width=1;
    wall2.height=-20;
    wall2.orientation = 1;
    
    Ball ball1;

    
    for(int i=0;i<1000;i++){
        
        for(int co_ord=0;co_ord<2;co_ord++){
            
            velocity[co_ord] = velocity[co_ord] + grav_acc(velocity[co_ord],co_ord)*time_itr;
            position[co_ord] = position[co_ord] + velocity[co_ord]*time_itr;
            
        }
        
        cout << position[x] << "   " <<position[y]<< endl;
        ball_area1 = ball1.ball_collision_area(velocity);
        
        
        if(Collision_check(position, wall1, ball1, ball_area1) == true || Collision_check(position, wall2, ball1, ball_area1)==true){
            
            velocity = wall1.rebound(velocity);

            
        }
        
        time_count+= time_itr;
        
        
    }
    
}












double grav_acc(double position,int co_ord){
    
    if(co_ord == 0){
        
        return 0;
        
    }else{
        
        return (-9.81);
        
    }
    
}




vector<double> initial_velocity(double theta_deg, double v_mag){ //Function to calculate velocity vector given angle and magnitude
    
    vector<double> velocity(2);
    
double    theta_rad = theta_deg*(3.14159265359/180);
    
    velocity[0] = v_mag * cos(theta_rad); //X velocity componant
    velocity[1] = v_mag * sin(theta_rad); //Y velocity componant
    
    return velocity; // returns velocity vector
}



bool Collision_check(vector<double> position, Wall wall, Ball ball, vector<double> ball_area){
    
    if((position[0] + ball_area[0]>=wall.centre_x)&&(position[0] + ball_area[0]<=wall.centre_x+wall.width)&&(position[1] + ball_area[1]<=wall.centre_y)&&(position[1] + ball_area[1]>=wall.centre_y+wall.height)){
        return true;
    }else{
        return false;
    }
    
}


