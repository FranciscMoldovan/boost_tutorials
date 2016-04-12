#include <iostream>
#include <memory>
class A{};
int main()
{
    std::auto_ptr<A> pA(new A);

    std::cout << pA.get() << std::endl;

    std::auto_ptr<A> pB(pA);

    std::cout << pA.get() << std::endl;
    std::cout << pB.get() << std::endl;

    return 0;
}
