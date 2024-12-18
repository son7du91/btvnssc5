#include<stdio.h>
int main(){
    int n,i;
    for ( n = 1; n <=9; n++)
    {
        for ( i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d \n",n,i,n*i);
        }
    }
    return 0;
}    