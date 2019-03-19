

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

