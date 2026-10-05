#include <iostream>
using namespace std;

class Number {
    int n;

public:
    Number(int x) {
        n = x;
    }
    void operator-() {
        n = -n;
    }

    void display() {
        cout << "Number = " << n << endl;
    }
};

int main() {
    Number obj(10);

    cout << "Before unary operation:" << endl;
    obj.display();

    -obj;

    cout << "After unary operation:" << endl;
    obj.display();

    return 0;
}
