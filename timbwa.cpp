#include <iostream>
#include <cmath>

using namespace std;

// Base class: Square
class Square {
protected:
    double side;
    
public:
    // Constructor
    Square(double s = 0.0) : side(s) {
        if (s < 0) {
            cout << "Warning: Side length cannot be negative. Setting to 0." << endl;
            side = 0.0;
        }
        cout << "Square created with side: " << side << endl;
    }
    
    // Virtual Destructor (important for inheritance)
    virtual ~Square() {
        cout << "Square destroyed with side: " << side << endl;
    }
    
    // Getter for side
    double getSide() const {
        return side;
    }
    
    // Setter for side with validation
    void setSide(double s) {
        if (s >= 0) {
            side = s;
        } else {
            cout << "Error: Side length cannot be negative." << endl;
        }
    }
    
    // Calculate perimeter
    virtual double getPeri() const {
        return 4 * side;
    }
    
    // Calculate area
    virtual double getArea() const {
        return side * side;
    }
    
    // Display square information
    virtual void display() const {
        cout << "Square [Side: " << side 
             << ", Perimeter: " << getPeri()
             << ", Area: " << getArea() << "]" << endl;
    }
};

// Derived class: Cube
class Cube : public Square {
public:
    // Constructor using base class constructor
    Cube(double s = 0.0) : Square(s) {
        cout << "Cube created with side: " << side << endl;
    }
    
    // Destructor
    ~Cube() {
        cout << "Cube destroyed with side: " << side << endl;
    }
    
    // Override getArea() for cube surface area
    double getArea() const override {
        return 6 * (side * side); // Surface area of cube
    }
    
    // New method: Calculate volume
    double getVolume() const {
        return side * side * side;
    }
    
    // Display cube information
    void display() const override {
        cout << "Cube [Side: " << side 
             << ", Surface Area: " << getArea()
             << ", Volume: " << getVolume() << "]" << endl;
    }
};

// Main function to test the classes
int main() {
    cout << "=== Testing Square Class ===" << endl;
    Square square1(5.0);
    square1.display();
    
    cout << "\n=== Testing Cube Class ===" << endl;
    Cube cube1(3.0);
    cube1.display();
    
    cout << "\n=== Testing Polymorphism ===" << endl;
    Square* shapePtr;
    
    // Point to Square object
    shapePtr = &square1;
    cout << "Square via base pointer: ";
    shapePtr->display();
    
    // Point to Cube object (polymorphism)
    shapePtr = &cube1;
    cout << "Cube via base pointer: ";
    shapePtr->display();
    
    cout << "\n=== Testing Cube-specific Features ===" << endl;
    Cube cube2(4.5);
    cout << "Cube Volume: " << cube2.getVolume() << endl;
    cout << "Cube Surface Area: " << cube2.getArea() << endl;
    
    return 0;
}#include <iostream>
#include <cmath>

using namespace std;

// Base class: Square
class Square {
protected:
    double side;
    
public:
    // Constructor
    Square(double s = 0.0) : side(s) {
        if (s < 0) {
            cout << "Warning: Side length cannot be negative. Setting to 0." << endl;
            side = 0.0;
        }
        cout << "Square created with side: " << side << endl;
    }
    
    // Virtual Destructor (important for inheritance)
    virtual ~Square() {
        cout << "Square destroyed with side: " << side << endl;
    }
    
    // Getter for side
    double getSide() const {
        return side;
    }
    
    // Setter for side with validation
    void setSide(double s) {
        if (s >= 0) {
            side = s;
        } else {
            cout << "Error: Side length cannot be negative." << endl;
        }
    }
    
    // Calculate perimeter
    virtual double getPeri() const {
        return 4 * side;
    }
    
    // Calculate area
    virtual double getArea() const {
        return side * side;
    }
    
    // Display square information
    virtual void display() const {
        cout << "Square [Side: " << side 
             << ", Perimeter: " << getPeri()
             << ", Area: " << getArea() << "]" << endl;
    }
};

// Derived class: Cube
class Cube : public Square {
public:
    // Constructor using base class constructor
    Cube(double s = 0.0) : Square(s) {
        cout << "Cube created with side: " << side << endl;
    }
    
    // Destructor
    ~Cube() {
        cout << "Cube destroyed with side: " << side << endl;
    }
    
    // Override getArea() for cube surface area
    double getArea() const override {
        return 6 * (side * side); // Surface area of cube
    }
    
    // New method: Calculate volume
    double getVolume() const {
        return side * side * side;
    }
    
    // Display cube information
    void display() const override {
        cout << "Cube [Side: " << side 
             << ", Surface Area: " << getArea()
             << ", Volume: " << getVolume() << "]" << endl;
    }
};

// Main function to test the classes
int main() {
    cout << "=== Testing Square Class ===" << endl;
    Square square1(5.0);
    square1.display();
    
    cout << "\n=== Testing Cube Class ===" << endl;
    Cube cube1(3.0);
    cube1.display();
    
    cout << "\n=== Testing Polymorphism ===" << endl;
    Square* shapePtr;
    
    // Point to Square object
    shapePtr = &square1;
    cout << "Square via base pointer: ";
    shapePtr->display();
    
    // Point to Cube object (polymorphism)
    shapePtr = &cube1;
    cout << "Cube via base pointer: ";
    shapePtr->display();
    
    cout << "\n=== Testing Cube-specific Features ===" << endl;
    Cube cube2(4.5);
    cout << "Cube Volume: " << cube2.getVolume() << endl;
    cout << "Cube Surface Area: " << cube2.getArea() << endl;
    
    return 0;
}
