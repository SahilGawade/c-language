#include<stdio.h>
int main()
{

    int num1=10;
    int num2=20;
    

    // and &&
    printf("num1==num2 && num1<num2 %d\n",num1==num2 && num1<num2);
//or
    printf("num1==num2 || num1>num2%d\n",num1==num2 || num1>num2);
    


// not 
printf("!(num1<num2)%d\n",num1<num2);
return 0;
}
