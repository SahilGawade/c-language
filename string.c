#include<stdio.h>
#include<string.h>
int main(){
       
       
       
       //printing string --------------------------
       
       
       char str1[100]="sahil gawde";
       printf("str1=%s\n",str1);
       char  str2[100]={'s','a','h','i','l'};
       printf("str2=%s",str2);
       
       
       //strinhg from user and print------------------
       
       char str3[100];
       printf("enter your string : ");
       scanf("%s",&str3);
       printf("str3=%s",str3);
     
     
     //find lenght of string----------------------
     
     
     char str4[100]="sahil rohidas gawade";
      printf("len of str=%d\n",strlen("returns the length of string name."));
     printf("\n");
     
     int len=0;
     for(int i=0; i<100;i++){
         if(str4[i]!=0){
             len=len+1;
         }
     }
    printf("%d\n",len);
    
    
    
    //strcpy() copy function --------------------------
    
    char str5[100]="sarkar group gawdewadi";
    char str6[100];
    strcpy(str6,str5);
    printf("%s\n",str6);
    
    // without use copy function---------------------
    
    int size=100;
    char str8[100]=" sarkar group friend circle";
    char str9[100];
    
    for(int i=0;i<size;i++){
        if(str8[i]!=0){
            str9[i]=str8[i];
        }
    }
    printf("%s",str9);
    return 0;
}
