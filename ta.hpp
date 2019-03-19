#ifndef TA_H
#define TA_H



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
#include "mazelevel.hpp"

using namespace std;

class Ta : public Mazeperson {
private:
int rows_1;
int cols_1;
public:
Ta(int rows, int cols, Mazelevel &m);
virtual void get_move(int rows, int cols, Mazelevel &m);
virtual void set_location(int x, int y);
virtual int get_row();
virtual int get_col();
virtual int get_row_1();
virtual int get_col_1();
virtual char get_move() {} 

};
#endif

