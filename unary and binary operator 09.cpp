#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    // Constructor
    Number(int a)
    {
        x = a;
    }

    // Unary operator overloading
    void operator-()
    {
        x = -x;
    }

    // Binary operator overloading
    Number operator+(Number n)
    {
        Number temp(0);
        temp.x = x + n.x;
        return temp;
    }

    // Display function
    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3(0);

    // Unary operator
    cout << "Before unary operation: ";
    n1.display();

    -n1;

    cout << "After unary operation: ";
    n1.display();

    // Binary operator
    n3 = n1 + n2;

    cout << "After binary operation (n1 + n2): ";
    n3.display();

    return 0;
}




