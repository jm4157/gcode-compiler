#Author: Judah Munoz

class Vector:
    def __init__(self, x,y,z):
        self.x = x
        self.y = y
        self.z = z

def stoVector(s):
    split = s.split()
    return Vector(split[1], split[2], split[3])

def vectortoString(v):
    return v.x + "," + v.y + "," + v.z

def peek_line(f):
    pos = f.tell()
    line = f.readline()
    f.seek(pos)
    return line

def compile_vertices(infile):
    line = "null";
    vectorList = [];

    #Burn through header
    while line[0] != 'v':
        line = infile.readline()
    
    #Add first vector to list
    vectorList.append(stoVector(line))

    #Keep adding while file contains vectors
    while peek_line(infile)[0] == 'v':
        line = infile.readline()
        vectorList.append(stoVector(line))

    return vectorList

if __name__ == "__main__":
    infile = open("input/line_cube.obj")
    
    verticeList = compile_vertices(infile)

    for v in verticeList:
        print(vectortoString(v) + "\n")