#include <stdio.h>
#include <string.h>

int main()

{
    char *str = "hello, world\n";
    char strc[] = "good12\n";
    //char *strc_1 = "good morning\n";
    char *strc_1 = "good feifiefpepfjefjpoejfpoejpoejpjfeqpfjpeqfpeqp\n";
    
    strcpy(strc, str);
    printf("%ld %ld %s\n", sizeof(strc), sizeof(str), strc);
    
    return 0;

}
