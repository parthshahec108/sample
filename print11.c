        #include <stdio.h>

        int main()

        {

            unsigned int i = 23;
            //int i = 23;

            signed char c = -23;
            //char c = -23;

	printf("%u \n", (unsigned int)c);
            if (i > c)

                printf("Yes\n");

            else if (i < c)

                printf("No\n");

        }


