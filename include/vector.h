//Author: Judah Munoz

#ifndef GCODE-COMPILER_VECTOR-H
#define GCODE-COMPILER_VECTOR-H


struct Vector{
    double x;
    double y;
    double z;
};

Vector stoVector(std::string s, std::string del){
    Vector v = {0};

    int start, end = -1*del.size();

    start = end + del.size();
    end = s.find(del, start);
    v.x = std::stoi(s.substr(start, end - start));

    start = end + del.size();
    end = s.find(del, start);
    v.y = std::stoi(s.substr(start, end - start));

    start = end + del.size();
    end = s.find(del, start);
    v.z = std::stoi(s.substr(start, end - start));

    return v;
};


#endif