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
#include "instructor.hpp"

using namespace std;


Instructor::Instructor(int rows, int cols) {
      this->rows = rows;
      this->cols = cols; 
}

char Instructor::get_move() {

}


void Instructor::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

int Instructor::get_row() {
    return this->rows;
}
int  Instructor::get_col() {
    return this->cols;
}

