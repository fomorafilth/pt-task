#include <iostream>

using namespace std;

class A
{
public:
    A() { cout << "Construct Base object\n"; }
    ~A() { cout << "Destruct Base object\n"; }

};

class B: public A
{
public:
    B() { cout << "Construct Child object\n"; }
    ~B() { cout << "Destruct Child object\n"; }

    
};

 void Function(const Base &obj)
 
 { cout << " Call method func() for obj"<< endl;
   obj.func();
   }
int main(int argc, char *argv[])
{
    cout << "* Create Object B" << endl;
    B child;

    return 0;
}
