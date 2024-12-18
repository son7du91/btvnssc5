#include<stdio.h>
int main(){
    int a=10,count=0,n;
    while (count==0)
    {
        scanf("%d",&n);
        if(n==a){
            printf("ban doan dung roi\n");
            count++;
        }
        else
        {
            printf("ban doan sai roi\n");
        }
    }
}