#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;   // Pure virtual function
};

// Circle class
class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

// Triangle class
class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area of Triangle = "
             << 0.5 * base * height << endl;
    }
};

int main() {

    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 4);

    c.area();
    r.area();
    t.area();

    return 0;
}
