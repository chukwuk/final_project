#ifndef MAZELEVEL_H
#define MAZELEVEL_H



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
#include "wall.hpp"

using namespace std;


class Mazelevel {
  private:
  int MAZE_HEIGHT;
  int MAZE_WIDTH;
  vector<vector<Mazelocation*> > locations;
  public:
  Mazelevel(ifstream &infile, int MAZE_HEIGHT, int MAZE_WIDTH);
  Mazelocation* get_location(int rows, int cols);
  void display_maze();
  ~Mazelevel();
  
};
vector<string>  return_token(string sInput);

#endif

