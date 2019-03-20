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
 ********************************** Function:Ta
 ********************************** Description:it is a parameterized constructor that initialize the locations of the two TAs
 *********************************** Parameters: the mazelevel class, and two integers
 *********************************** Pre-Conditions: the mazewidth; mazeheight; maze locations
 ********************************** Post-Conditions: initialize the locations of the two TAs
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


/******************************************************
 * ********************************** Function:get_move
 * *********************************** Description: moves the two TAs randomly in the maze
 * ************************************ Parameters:   the mazelevel class, and two integers
 * *********************************** Pre-Conditions: the maze width; maze height; maze locations
 * *********************************** Post-Conditions:  moves the two TAs randomly
 * **************************************************************************************/



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

/******************************************************
 * ********************************** Function:set_location
 * *********************************** Description:sets the location of the first TA
 * ************************************ Parameters: two  integers
 * *********************************** Pre-Conditions: pass two integers representing the row and columns respectively
 * *********************************** Post-Conditions:  sets the location of the first TA
 * **************************************************************************************/



void Ta::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

/******************************************************
 * ********************************** Function:get_row
 * *********************************** Description: used to return the row index of the TA
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions:  returns the row of the TA
 * **************************************************************************************/



int Ta::get_row() {
    return this->rows;
}

/******************************************************
 * ********************************** Function:get_row
 * *********************************** Description:used to return the column index of the TA
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions: return the column index of the TA 
 * **************************************************************************************/


int  Ta::get_col() {
    return this->cols;
}

/******************************************************
 * ********************************** Function:get_row_1
 * *********************************** Description:used to return the row index of the second TA
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions:  return the row index of the TA
 * **************************************************************************************/



int Ta::get_row_1() {
    return this->rows_1;
}

/******************************************************
 * ********************************** Function:get_col_1
 * *********************************** Description:used to return the column index of the second TA
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions:  return the column index of the TA
 * **************************************************************************************/



int  Ta::get_col_1() {
    return this->cols_1;
}


