#include <stdio.h>
int main()
{
    int x=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==42)
            break;
        else
            printf("%d\n",x);
    }
    return 0;
}
