#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;

    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    while(1)
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a大的%d b中的%d c小的%d\n",a,b,c);
    }
    printf("因為c是0,離開迴圈,而且答案是中間的b\n");
    printf("%d",b);
}
