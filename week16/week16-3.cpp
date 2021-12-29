#include <stdio.h>
char line[300];
int main()
{
    printf("請照著打: -256 0.0000 1010100101010101010101\n");
    int n;
    float f;
    scanf("%d %f %s",&n,&f,line);

    printf("我們讀到了整數:%d\n",n);
    printf("我們讀到了整數:%f\n",f);
    printf("很長很長的字串:%s\n",line);
}
