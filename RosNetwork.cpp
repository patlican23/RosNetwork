/*
 * RosNetwork.cpp
 *
 *	class to control network of ros-enabled devices
 *
 *  Created on: 6 July 2017
 *      Author: Toren Caldwell
 *      email: tccaldwe@uark.edu
 */


#include "RosNetwork.h"

int main(int argc, char* argv[]){
  cout<< "It works" << endl;
}

RosNetwork::RosNetwork(){

}

RosNetwork::~RosNetwork(){

}

bool RosNetwork::estConnect(const char* ip_addr){
    //TODO
    //will establish a temporary connection with a desired netnode
    //returns true if successful
}

bool RosNetwork::sendPath(char const* path){
    //TODO
    //sends path data from camera to robot
    //recieves response
    //returns true if both successful
}
