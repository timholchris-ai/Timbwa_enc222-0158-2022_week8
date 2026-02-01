# Parent class
class Square:
    def __init__(self, side):
        self.side = side

    def getPeri(self):
        return 4 * self.side

    def getArea(self):
        return self.side * self.side


# Child class
class Cube(Square):
    def __init__(self, side):
        super().__init__(side)

    def getArea(self):
        return 6 * self.side * self.side

    def getVolume(self):
        return self.side * self.side * self.side


c = Cube(5)

print("Perimeter of base:", c.getPeri())
print("Surface area:", c.getArea())
print("Volume:", c.getVolume())
