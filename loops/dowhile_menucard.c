#include<stdio.h>
int main(){

    int selector;
     do{

        printf("select option 1 to buy\n");
        printf("select option 2 to remove\n");
        printf("select option 3 to checkout\n");
        printf("select the option : ");
        scanf("%d",&selector);
        switch (selector){
            case 1:{
                printf("item bought\n");
            }
            break;
            case 2:{
                printf("item removed\n");
            }
            break;
            case 3:{
                printf("item checked\n");
            }
            break;
            default:{
                printf("invalis user");
            }
        }
     }while(selector!=3);

    return 0;
}
