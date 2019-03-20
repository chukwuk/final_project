/****************************************
******************* Program:wall.hpp
********************* Author:Kingsley C. Chukwu
******************* Date: 3/19/2019
******************* Description:contains all the function prototype in the wall.hpp and contains definition of the wall class
******************** Input: none
****************** Output: none
*******************************************************/





#ifndef WALL_H
#define WALL_H



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


using namespace std;

class Wall : public Mazelocation {
virtual bool is_occupable();
virtual char get_display_character();
virtual void set_has_explorer(bool x) {       
}
virtual bool has_explorer() {}
virtual void set_is_start(bool x) {}
virtual bool is_start() {}
virtual void set_is_end(bool x) {}
virtual bool is_end() {};
virtual void set_has_pskills(bool x) {};
virtual bool has_pskills() {};
virtual void set_has_ta(bool x) {};
virtual bool has_ta() {};
virtual void clear_all() {};


};

#endif
