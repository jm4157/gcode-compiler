//Author Judah Munoz

/*#ifndef GCODE-COMPILER_COMMANDS-H
#define GCODE-COMPILER_COMMANDS-H*/


#include <string>

#include "vector.h"

//Sets fillspeed to speed
#define SET_SPEED(speed) "G1 F" << speed

//Move from v0 to v1
#define MOVE(v0, v1) "G1 X" << v1.x - v0.x << " Y" << v1.y - v0.y << " Z" << v1.z - v0.z

//Move from v0 to v1 without worrying about line accuracy
#define FAST_MOVE(v0, v1) "G0 X" << v1.x - v0.x << " Y" << v1.y - v0.y << " Z" << v1.z - v0.z

//Moves carriage to origin. Not safe when printing has been done
#define MOVE_ORIGIN "G28"

//Pause for t milliseconds
#define PAUSE(t) "G4 P" << t

//Sets units to millimeters
#define SET_MM "G21"

//Sets extruder position to 0
#define RESET_EXTRUDER "G92 E0"


//#endif