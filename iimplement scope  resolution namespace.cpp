#include <iostream>
using namespace std;
int x = 100;
namespace First
{
    int a = 10;
}
namespace Second
{
    int a = 20;
}
int main()
{
    int x = 50;
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    cout << "First namespace = " << First::a << endl;
    cout << "Second namespace = " << Second::a << endl;
    return 0;
}
