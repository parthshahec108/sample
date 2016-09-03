#include <stdio.h>

    void foo(int*);

    int main()

    {

        int i = 11, *p = &i;
	printf("%p\n", p);
        foo(++p);
//foo((&i)++);

    }

    void foo(int *p)

    {

        printf("%p %d\n", p, *p);

    }
