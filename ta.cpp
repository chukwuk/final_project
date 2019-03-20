/****************************************
 * ******************* Program:ta.cpp
 * ********************* Author:Kingsley C. Chukwu
 * ******************* Date: 3/19/2019
 * ******************* Description:implements all the function in the ta.hpp.
 * ******************** Input: none
 * ****************** Output: none
 * *******************************************************/







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
#include "ta.hpp"
#include "mazelevel.hpp"

using namespace std;

//srand(time(0));

/******************************************************
 ********************************** Function:Mazelevel
 ********************************** Description:it is a parameterized constructor that reads a text file containing the maze
 *********************************** Parameters: ifstream , two integers
 *********************************** Pre-Conditions: a readable file, two integers representing the maze height and width
 ********************************** Post-Conditions: reads  the maze into a vector of mazelocation
 **************************************************************************************/




Ta::Ta(int rows, int cols, Mazelevel &m) {
    srand(time(0));
    Mazelocation* locate;
    do {
    this->rows = rand()  % rows;
    this->cols = rand() % cols;
    locate = m.get_location(this->rows, this->cols);
    } while (false==locate->is_occupable());
//    cout<<this->rows<<" "<<this->cols<<endl;
    do {
    this->rows_1 = rand()  % rows;
    this->cols_1 = rand() % cols;
    locate = m.get_location(this->rows_1, this->cols_1);
    } while (false==locate->is_occupable() || (this->rows_1 == this->rows && this->cols_1 == this->cols));
//     cout<<this->rows_1<<" "<<this->cols_1<<endl;

}

void Ta::get_move(int rows, int cols, Mazelevel &m) {
     Mazelocation* locate;
//    srand(time(0));
    do {
    this->rows = rand()  % rows;
    this->cols = rand() % cols;
    locate = m.get_location(this->rows, this->cols);
    } while (false==locate->is_occupable());
//    cout<<this->rows<<" "<<this->cols<<endl;
    do {
    this->rows_1 = rand()  % rows;
    this->cols_1 = rand() % cols;
    locate = m.get_location(this->rows_1, this->cols_1);
    } while (false==locate->is_occupable() || (this->rows_1 == this->rows && this->cols_1 == this->cols));
//    cout<<this->rows_1<<" "<<this->cols_1<<endl;

}


void Ta::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

int Ta::get_row() {
    return this->rows;
}
int  Ta::get_col() {
    return this->cols;
}

int Ta::get_row_1() {
    return this->rows_1;
}

int  Ta::get_col_1() {
    return this->cols_1;
}


