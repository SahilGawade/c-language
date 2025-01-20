 #include<stdio.h>

void Greet();
void addition();
void add(int x, int y);

int main(){

    Greet();
    int a=40; int b=50;
    addition();
    add(a,b);
    add(50,50);
    return 0;
}

void Greet(){
    printf(" sg\n");
}

void addition(){
int a=10;
int b=6;
printf("%d\n",(a+b));
}


void add(int x,int y){
    printf("add=%d",(x+y));
}
