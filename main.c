#include <stdio.h>
int f(int x)
{static int times=0;
    times+=x;
    return times;
}
int main(void)
{int nyuuryoku,result=0;
    scanf("%d",&nyuuryoku);
    if(nyuuryoku<1||nyuuryoku>10){printf("NG");
        return 0;
    }for(int i=1;
        i<=nyuuryoku;
        i++)
        {result=f(i*2);
        }
        printf("%d",result);
        return 0;
    }
