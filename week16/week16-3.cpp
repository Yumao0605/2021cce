#include <stdio.h>
char line[300];
int main()
{
    printf("�зӵۥ�: -256 0.0000 1010100101010101010101\n");
    int n;
    float f;
    scanf("%d %f %s",&n,&f,line);

    printf("�ڭ�Ū��F���:%d\n",n);
    printf("�ڭ�Ū��F���:%f\n",f);
    printf("�ܪ��ܪ����r��:%s\n",line);
}
