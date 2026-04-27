#include <iostream>

namespace Foo::Goo // Goo is a namespace inside the Foo namespace (C++17 style)
{
    int add(int x, int y)
    {
        return x + y;
    }
}

namespace Foo
{
     void someFcn() {} // This function is in Foo only
}

int main()
{
    std::cout << Foo::Goo::add(1, 2) << '\n';
    return 0;
}
