#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello! May I ask you what is your name\n");
    int x;
    scanf("%s", &x);
    printf("Hi %s Glad to meet you!!\n", &x);
    system("pause");
    /* code */
    return 0;
}
