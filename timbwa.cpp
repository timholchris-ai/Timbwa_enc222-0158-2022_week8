#include <iostream>
using namespace std;

// Parent class
class Square
{
protected:
    double side;

public:
    Square(double s)
    {
        side = s;
    }

    ~Square() {}

    double getPerim()
    {
        return 4 * side;
    }

    double getArea()
    {
        return side * side;
    }
};

// Child class
class Cube : public Square
{
public:
    Cube(double s) : Square(s) {}

    ~Cube() {}

    double getArea()
    {
        return 6 * side * side;
    }

    double getVolume()
    {
        return side * side * side;
    }
};

int main()
{
    Cube c(5);

    cout << "Perimeter of base: " << c.getPerim() << endl;
    cout << "Surface area: " << c.getArea() << endl;
    cout << "Volume: " << c.getVolume() << endl;

    return 0;
}
