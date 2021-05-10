#include <iostream>


class A
{
    public:
    // virtual A();
    // pure virtual function
    virtual void say_hello() = 0;
};


class B: public A
{
    public:
    B()
    {
        std::cout << "construct A" << std::endl;
    }

    void say_hello() override
    {
        std::cout << "hello from B" << std::endl;
    }
};


int main()
{
    B* b = new B();

    b->say_hello();
    return 0;
}
