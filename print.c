#include <stdio.h>

main() {
#if 0
	char *p; 
	p = "Hello"; 
	//printf("%cn",*&*p); 
	printf("%s\n",*p); 
	int i = 10;
      void *p = &i;
      printf("%d\n", (int)*p);
     int i = 10;
      void *p = &i;
     	printf("%f \n", *(float*)p);

#endif
//char *msg = "hi";
int a = 10, *msg = &a;
   printf(msg);
}
