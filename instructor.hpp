/****************************************
 * ****************** Program:instructor.hpp
 * ******************** Author:Kingsley C. Chukwu
 * ****************** Date: 3/19/2019
 * ****************** Description:contains all the function prototype in the instructor.hpp and definiton of the instructor class
 * ******************* Input: none
 * ***************** Output: none
 * ******************************************************/




#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H



#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include <vector>
#include "mazelocation.hpp"
#include "mazeperson.hpp"

using namespace std;

class Instructor : public Mazeperson {

public:
Instructor(int rows, int cols);
virtual char get_move();
virtual void set_location(int x, int y);
virtual int get_row();
virtual int get_col();
};
#endif

