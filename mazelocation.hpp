
#ifndef MAZELOCATION_H
#define MAZELOCATION_H



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


using namespace std;

class Mazelocation {
  public:
  virtual bool is_occupable()= 0;
  virtual char get_display_character() = 0;
  virtual  void set_has_explorer(bool x) = 0;
  virtual bool has_explorer() = 0;
  virtual void set_is_start(bool x) = 0;
   virtual bool is_start() = 0;
 virtual void set_is_end(bool x) = 0;
virtual bool is_end() = 0; 
virtual void set_has_pskills(bool x) = 0;
virtual bool has_pskills() = 0;
virtual void set_has_ta(bool x) = 0;
virtual bool has_ta() = 0;
virtual void clear_all() = 0;
 
};
#endif

