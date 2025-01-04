#include<stdio.h>
int main(){
     printf("RO WATER ");
     printf("enter 5rs for 10ltr.\n");
     printf("enter 10rs for 15ltr.\n");
     printf("enter 15rs for 20ltr.\n");
     printf("enter 20rs for 30ltr.\n");
     printf("enter the ammount.\n");
     int Expr;
     scanf("%d",&Expr);
      switch(Expr){
        case 5 : {
            printf("10ltr.\n");
            printf("enter A for hot\n");
            printf("enter B for cold\n");
            char o,temp;
             scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("drop hot ");
                }
                break;
                 case 'B':{
                    printf("drop cold");
                 } 
                 break;
                 default:{
                    printf("invalid input");
                 }


            }
        }
        break;
        case 10 : { printf("15ltr.\n");
            printf("enter A for hot\n");
            printf("enter B for cold\n");
            char o,temp;
             scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("drop hot ");
                }
                break;
                 case 'B':{
                    printf("drop cold");
                 } 
                 break;
                 default:{
                    printf("invalid input");
                 }

        }
      }
      break;
        case 15 : { printf("20ltr.\n");
            printf("enter A for hot\n");
            printf("enter B for cold\n");
            char o,temp;
             scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("drop hot ");
                }
                break;
                 case 'B':{
                    printf("drop cold");
                 } 
                 break;
                 default:{
                    printf("invalid input");
                 }
            }
        }
         break;
        case 20 : { printf("30ltr.\n");
            printf("enter A for hot\n");
            printf("enter B for cold\n");
            char o,temp;
             scanf("%c",&temp);
            scanf("%c",&o);
            switch(o){
                case 'A':{
                    printf("drop hot ");
                }
                break;
                 case 'B':{
                    printf("drop cold");
                 } 
                 break;
                 default:{
                    printf("invalid input");
                 }
            }
        }
         break;
                 default:{
                    printf("invalid input");
                 }

      }
      




    return 0;
}
