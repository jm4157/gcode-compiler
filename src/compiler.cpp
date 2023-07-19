//Author: Judah Munoz

#include <iostream>
#include <fstream>

#include "constants.h"
#include "commands.h"
#include "vector.h"

using namespace std;

void setup(ofstream outfile){
    //Home axes
    outfile << MOVE_ORIGIN << "\n";
    //Reset extruder
    outfile << RESET_EXTRUDER << "\n";
    //Set speed
    outfile << SET_SPEED(SPEED) << "\n";
    //Set units to MM
    outfile << SET_MM << "\n";
};

void compile_vertices(ifstream infile){
    string line = "n";
    char peek;
    Vector vn;

    //Ignore header input
    while (line.substr(0,1) != "v"){
        getline(infile, line);
    }

    //Read first vector
    vn = stoVector(line.substr(2,line.length()), " ");
    peek = infile.peek();
    //Add to array

    //Read all the vertices
    while (peek == 'v'){
        getline(infile, line);
        vn = stoVector(line.substr(2,line.length()), " ");
        //Add to array
    }
}