#include<stdio.h>

int main (){
    int x,n,sum=0;
    printf("input the ending number : ");
    scanf("%d",&n);
        for (x=1;x<=n;x++){
            printf("%d\n",x);
            sum=sum+x;
        }
        printf("the addition of all number : ");
        printf("%d\n",sum=sum);
    return 0;
}
