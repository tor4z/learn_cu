#include <iostream>


class C
{
    public:
    static int object_cnt;

    C();
    int get_object_cnt(void);
};

int C::object_cnt = 0;

C::C()
{
    object_cnt++;
}

int C::get_object_cnt(void)
{
    return object_cnt;
}


int main()
{
    std::cout << "STATIC CLASS MEMBER" << std::endl;
    C* c1 = new C();
    std::cout << "c1 OBJECT COUNT: " << c1->get_object_cnt() << std::endl;
    C* c2 = new C();
    std::cout << "c2 OBJECT COUNT: " << c2->get_object_cnt() << std::endl;
}
