#include <stdio.h>

int main(void){
    int n;
    
    puts("1부터 n까지의 촙합을 구합니다.");

    printf("n값: ");

    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    int sum2 = 0;
    while (i <= n)
    {
    sum += i;
    i++;
    }

    for (int j = 1; j <= n; j++){
        sum2 += j;
    }
    printf("1부터 %d까지의 총합은 %d 입니다.\n",n,sum);
    printf("1부터 %d까지의 총합은 %d 입니다.\n",n,sum2);
    

    return 0;
}