#include<stdio.h>
int main(){
    int a,b;
    float i;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d",&b);
    i = (float)a/b;

    printf("Your result is : %d + %d = %d\n",a,b,a+b);
    printf("\t\t%d - %d = %d\n",a,b,a-b);
    printf("\t\t%d x %d = %d\n",a,b,a*b);
    printf("\t\t%d / %d = %.07f",a,b,i);
    


    return 0;
}