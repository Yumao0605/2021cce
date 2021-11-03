#include <stdio.h>
int main()
{

    for(int now=2;now<=100;now++)
    {
        int bad=0;
        for(int i=2;i<now;i++)
        {
            if(now%i==0) bad=1;
        }
        if(bad==0) printf("%d ",now);
    }
}
