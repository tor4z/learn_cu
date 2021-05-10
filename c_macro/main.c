#include <stdio.h>


#define F_NAME(a, b) F_##a##b
#define TEST(a, b)\
        void F_NAME(a, b)(void)


TEST(X, Y)
{
    printf("test body\n");
}


int main()
{
    // printf("output: %s\n", CAT(HE, LLO));
    printf("TEST\n");
    F_XY();
    return 0;
}
