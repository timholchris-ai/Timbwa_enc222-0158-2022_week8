# Base class: Square
class Square:
    def __init__(self, side):
        self.side = side
        print("Square object created")

    # Method to calculate perimeter
    def getPeri(self):
        return 4 * self.side

    # Method to calculate area
    def getArea(self):
        return self.side ** 2

    # Destructor
    def __del__(self):
        print("Square object destroyed")


# Derived class: Cube inherits from Square
class Cube(Square):
    def __init__(self, side):
        super().__init__(side)  # Call Square constructor
        print("Cube object created")

    # Method to calculate surface area of cube
    def getArea(self):
        return 6 * super().getArea()  # 6 * area of one face

    # Method to calculate volume
    def getVolume(self):
        return self.side ** 3

    # Destructor
    def __del__(self):
        print("Cube object destroyed")
        super().__del__()  # Call base class destructor
