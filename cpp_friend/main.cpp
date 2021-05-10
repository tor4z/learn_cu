#include <iostream>


class A
{
    private:
    int x;
    int y;
    friend void friend_function_of_A(A* a);
    friend class Friend_class_of_A;

    public:
    A(int i, int j): x{i}, y{j}{}

    void say_hello()
    {
        std::cout << "Hello from A" << std::endl;
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};


class Friend_class_of_A
{
    public:
    void friend_clsss_of_A(A* a)
    {
        std::cout << "friend_clsss_of_A >> x: " << a->x << ", y: " << a->y << std::endl;    
    }
};


void friend_function_of_A(A* a)
{
    std::cout << "friend_function_of_A >> x: " << a->x << ", y: " << a->y << std::endl;
}


int main()
{
    A* a = new A(1, 2);
    Friend_class_of_A* b = new Friend_class_of_A();

    a->say_hello();
    friend_function_of_A(a);
    b->friend_clsss_of_A(a);

    return 0;
}
