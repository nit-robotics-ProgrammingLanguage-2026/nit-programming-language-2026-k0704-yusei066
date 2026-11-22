#include <stdio.h>
int kakezan(int kakeru)
{static int times=0; /*初期化処理は最初の1回のみ。同じ関数が呼び出されたときも、前回の値をそのまま引き継ぐ。*/
    times+=kakeru;
    return times;
}
int main(void)
{int nyuuryoku,result=0;
    scanf("%d",&nyuuryoku);
    if(nyuuryoku<1||nyuuryoku>10){printf("NG");
        return 0;
    }for(int loop=1;
        loop<=nyuuryoku;
        loop++)
        {result=kakezan(loop*2); /*入力した値を2倍にしてkakezan関数に渡す*/
        }
        printf("%d",result);
        return 0;
    }
