#include <stdio.h>

int main(void){
    int n;
    int num = n;
    printf("몇 단 삼각형 입니까?: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        /* code */ 
        for (int j = 1; j <= i; j++)
                putchar(" ");
        for (int j = 0; j < 2+i; j++)
        putchar("*");
        putchar("\n");


        

    }
    for (int i = 0; i < n; i++){
         putchar(" ");
        for (int j = n - 1; j > i; j--)
        putchar(" ");
        for (int j = 0; j <2* i + 1; j++)
        putchar("*");
        putchar("\n");
    }
               
    
   
}