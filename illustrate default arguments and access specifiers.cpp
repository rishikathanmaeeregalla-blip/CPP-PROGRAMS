#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int mark;

public:
    void display(int mark = 20, string name = "DEEPU")
    {
        cout << "Marks is: " << mark << endl;
        cout << "Name is: " << name << endl;
    }
};
int main()
{
    Student s1;
    s1.display();
    s1.display(70, "charitha");
    return 0;
}
