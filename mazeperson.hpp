/****************************************
****************** Program:mazeperson.hpp
******************** Author:Kingsley C. Chukwu
****************** Date: 3/18/2019
****************** Description:contains all the function prototype in the mazeperson.hpp and it is an abstract class
******************* Input: none
***************** Output: none
******************************************************/




#ifndef MAZEPERSON_H
#define MAZEPERSON_H



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
#include "mazelevel.hpp"

using namespace std;

class Mazeperson {
protected:
int rows;
int cols;
public:
virtual char get_move() = 0;
virtual void set_location(int x, int y) = 0;
virtual int get_row() = 0;
virtual int get_col() = 0;
virtual void get_move(int rows, int cols, Mazelevel &m, int level) { }
};
#endif

