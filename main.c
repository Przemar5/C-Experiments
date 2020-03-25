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

int count(int a)
{
    return (int) (sizeof(a) / sizeof(a[0]));
}

int compose(int a, int (*arr)(int))
{
    int len = count(arr);
    int a = arr[];

    for (int i = 0; i < len; i++)
    {
        a = arr[i](a);
    }

    return a;
}

int main()
{
    int (*arr[2])(int) = {add1, mul2};
    int a = arr[0](fun1(3));

    a = compose(3, arr);

    printf("%d\n", a);

    return 0;
}


