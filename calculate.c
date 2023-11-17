#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,y,res1,res2;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a==0){
        res1 = 1;
    }else{
        res1 = b;
    }
    int pwr1= 1;
    int a2 = 2*a;
    while(pwr1<a2){
        res1 = res1 * b;
        pwr1 = pwr1 + 1;
    }
    if(b==0){
        res2 = 1;
    }else{
        res2 = a;
    }
    int pwr2 = 1;
    while(pwr2<b){
        res2 = res2 * a;
        pwr2 = pwr2 + 1;
    }
    y= res1 + res2 - 2*c;
    printf("y=%d",y);
return 0;
}
//Paste your C codes of the solution for calculate formula part (part-2) of HW1.
