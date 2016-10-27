#include <iostream>

using namespace std;

class A
{
public:
    A() { cout << "Construct Base object\n"; }
    ~A() { cout << "Destruct Base object\n"; }



int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    return 0;
}
