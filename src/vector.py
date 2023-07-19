class Vector:
    def __init__(x,y,z):
        self.x = x
        self.y = y
        self.z = z

def stoVector(s):
    split = s.split()
    return Vector(split[1], split[2], split[3])