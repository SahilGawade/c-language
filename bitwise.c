/**
 * & And
 * | OR
 * ^ Xor
 * ~ Complement
 * << leftshift
 * >> rightshift
 * &
 * a b &
 * 0 0 0
 * 0 1 0
 * 1 0 0
 * 1 1 1
 * 
 * |
 * a b |
 * 0 0 0 
 * 0 1 1 
 * 1 0 1
 * 1 1 1
 * 
 * ^
 * a b ^
 * 0 0 0
 * 0 1 1
 * 1 0 1
 * 1 1 0
 * 
 * ~
 * a ~
 * 0 1
 * 1 0
 */
  

  #include<stdio.h>
  int main ()
  { 
    int a=10;
    int b=5;

    //1] & and 

    printf("a&b=%d\n",a&b);  

    // 2] | or 
    printf("a|b=%d\n",a|b);

    //3] ^ XOR
    printf("a^b=%d\n",a^b);

    // 4] ~ COMPLEMENT
    printf("~a=%d\n",~a);

    //5] << leftshift 
    printf("a<<1=%d\n",a<<1);

    // 6] >> rightshift 
    printf("a>>1=%d\n",a>>1);






return 0; 
  } 

