/*
 * RosNetwork.h
 *
 *  Created on: 6 July 2017
 *      Author: Toren Caldwell
 *      email: tccaldwe@uark.edu
 */

#ifndef ROSNETWORK_H_
#define ROSNETWORK_H_

#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

#define port 11311  //Standard comm port for ros

using namespace std;

class RosNetwork{
public:
  int main(int, char*);

  RosNetwork();
  virtual ~RosNetwork();

  bool estConnect(const char*);
  bool sendPath(char const*);

private:
  //Not going to worry about file transfer rn because
    //image files will be stored locally.
    //The only thing that ros needs to transfer is
    //path data and current telemetry between the robots
    //and the cameras
};

#endif  /*ROSNETWORK_H_*/
