#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");
    printf("5: *****\n");
    printf("6: ******\n");

    int n=6;
    for(int i=1;i<=n;i++)
    {
        printf("%d: \n",i);
    }
}
