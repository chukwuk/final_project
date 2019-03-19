
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


bool Wall::is_occupable() {
    return false;
}
char Wall::get_display_character() {
     return '#';
}

