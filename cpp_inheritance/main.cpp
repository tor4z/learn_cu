#include <iostream>


class A
{
    public:
    int x;
    A(int i): x{i} {}
};


class B: protected A
{
    private:
    int y;

    public:
    B(int i, int j): A(i), y{j}{}

    void show_xy(void) const
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};


int main()
{
    B* b = new B(1, 2);

    b->show_xy();

    // 'int A::x' is inaccessible within this context
    // std::cout << "b->x: " << b->x << std::endl;
    return 0;
}
