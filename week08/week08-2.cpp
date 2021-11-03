#include <stdio.h>
int main()
{
    int n=49;

    int bad=0;
    for(int i=2;i<n;i++)
    {
        if(n%1==0) bad=1;
    }
    if(bad=0) printf("½è¼Æ");
    else printf("Ãa±¼¤F!!");
}
