#include<stdio.h>

int main(){ // find greater number among two numbers
    int a,b;
    printf("write two numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else if (b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    else{
        printf("both number are same");
    }
    
    return 0;
}