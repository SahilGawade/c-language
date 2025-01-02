/**
 * sizeof
 * sizeof (operand)
 * , 
 * (operand1 , operand2)
 * ?:
 * (condition ? operand1 : operand2)
 * . dot -> used to access struct members
 * cast
 * (new_type) operand; 
 * & returns the address of a var
 * * pointer var
 */


#include<stdio.h>
int main()
{ 

    int a=10;
    char c='$';
    float b=3.555555;
  // 1] size of 
  printf("size of a=%d\n",sizeof(a));
  printf("size of c=%d\n",sizeof(c));
  printf("size of b=%d\n",sizeof(b));

  

  //2] ternary opartor 
  (10!=5) ? printf("yes\n"):printf("no\n");

  //3] 
    //cast //type casting
    a = 5;
    float var=5.78;
    printf("a=%f\n",(float)a);
    printf("var=%d\n",(int)var);

    //4] & 
    
    int num = 3000;
    printf("adress of num=%x\n",&num);

    //5] pointer
     int num2=40;
     int *ptr=&num2;
     printf("*ptr=%d\n",*ptr);
     printf("ptr=%d\n",ptr);
     printf("ptr=%x\n",ptr);




    return 0;
}
