#include <stdio.h>
#include <stdlib.h>



main()
{


int i_Secici;
i_Secici == 1;
float g_A,g_B,res;
while (i_Secici != 0){

    printf("Please select one of the options:\n(1)ADD \n(2)Subtract \n(3)Multiply \n(4)Divide \n(0)exit\n");
    scanf("%d",&i_Secici);
    if (i_Secici == 1){
        printf("Please enter the first number");
        scanf("%f",&g_A);
        printf("Please enter the second number");
        scanf("%f",&g_B);
        res = g_A + g_B;
        printf("The result is %f",res);
        }
    else if (i_Secici == 2){
        printf("Please enter the first number");
        scanf("%f",&g_A);
        printf("Please enter the second number");
        scanf("%f",&g_B);
        res = g_A - g_B;
        printf("The result is %f",res);
        }
    else if (i_Secici == 3){
        printf("Please enter the first number");
        scanf("%f",&g_A);
        printf("Please enter the second number");
        scanf("%f",&g_B);
        res = g_A * g_B;
        printf("The result is %f",res);
        }
    else if (i_Secici == 4){
        printf("Please enter the first number");
        scanf("%f",&g_A);
        printf("Please enter the second number");
        scanf("%f",&g_B);
        if(g_B != 0){
            res = g_A + g_B;
            printf("The result is %f",res);
        }
        else{
            printf("You're dead wrong!");
        }
    }
    else{
        printf("You're dead wrong!");
    }





}
return 0;
}
