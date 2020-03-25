#include <stdio.h>
#include <stdlib.h>

void greetMorning()
{
     printf("Good, morning!");
}

int add1(int a)
{
    return a + 1;
}

int mul2(int a)
{
    return a * 2;
}

int main()
{
    int (*arr[2])(int) = {add1, mul2};
    int a = arr[0](fun1(3));

    printf("%d\n", a);

    return 0;
}


