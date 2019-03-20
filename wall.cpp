/****************************************
******************** Program:wall.hpp
********************** Author:Kingsley C. Chukwu
******************** Date: 3/19/2019
******************** Description:implements all the function in the wall.hpp.
********************* Input: none
******************* Output: none
********************************************************/




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

/******************************************************
******************************** Function:is_occupable
********************************* Description:returns false all the time because the wall cannot be occupied by the student
********************************** Parameters: none
********************************** Pre-Conditions: none
********************************* Post-Conditions: returns false
*************************************************************************************/


bool Wall::is_occupable() {
    return false;
}

/******************************************************
 * ******************************** Function:get_display_character
 * ******************************** Description:returns # character, which indicates that location is a walll
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: none
 * ******************************** Post-Conditions: returns # character
 * ************************************************************************************/


char Wall::get_display_character() {
     return '#';
}

