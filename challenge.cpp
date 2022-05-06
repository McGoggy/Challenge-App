#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    vector<vector<A *>> Container;
};

struct B : A
{
};

struct C : A
{
};

struct D : A
{
};

int main()
{
    A ABaseClass;

    B b1, b2;
    C c1, c2;
    D d1, d2;

    vector<B *> b_classes = {&b1, &b2};
    vector<C *> c_classes = {&c1, &c2};
    vector<D *> d_classes = {&d1, &d2};

    ABaseClass.Container = {
        {b_classes.begin(), b_classes.end()},
        {c_classes.begin(), c_classes.end()},
        {d_classes.begin(), d_classes.end()}};
}
