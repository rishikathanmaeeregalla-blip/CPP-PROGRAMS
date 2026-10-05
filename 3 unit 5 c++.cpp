#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
    Engine e;   // Object of Engine is a member of Car

public:
    void drive() {
        e.start();
        cout << "Car is moving" << endl;
    }
};

int main() {
    Car c;
    c.drive();

    return 0;
}
