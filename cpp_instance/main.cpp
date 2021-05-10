#include <iostream>
#include <vector>


class A
{
    public:
    static std::vector<A*> instances;

    A()
    {
        std::cout << "construct A" << std::endl;
        std::cout << "push: " << this << std::endl;
        instances.push_back(this);
    }
    virtual void say_hello(void) = 0;
};


class B: public A
{
    public:
    B()
    {
        std::cout << "construct B" << std::endl;
    }

    void say_hello()
    {
        std::cout << "hello from B" << std::endl;
    }
};


class C: public A
{
    public:
    C()
    {
        std::cout << "construct C" << std::endl;
    }

    void say_hello()
    {
        std::cout << "hello from C" << std::endl;
    }
};


std::vector<A*>A::instances;


int main()
{
    std::cout << "LEARN INSTANCE" << std::endl;
    B* b = new B();
    C* c = new C();

    std::cout << "=========" << std::endl;
    std::vector<A*>::iterator it;
    for (it = c->instances.begin(); it != c->instances.end(); ++it)
    {
        std::cout << "loop instance: " << *it << std::endl;
        (*it)->say_hello();
    }

    std::cout << "=========" << std::endl;
    b->say_hello();
    c->say_hello();
    
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}
