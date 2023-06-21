#include<stdio.h>
#include<conio.h>
#define Rate 1.2

main(){
    float p,t;
       printf("Value of principal:");
       scanf("%f",&p);
       printf("Value of Time:");
       scanf("%f",&t);

       printf("Simple Interest:%0.2f ",(Rate*p*t)/100);

}









