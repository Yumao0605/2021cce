#include <stdio.h>
int main()
{
    int N=20030101;
    while(N>0)
    {
        printf("%d => %d %d\n",N,N/10,N%10);
        N=N/10;
    }
}
