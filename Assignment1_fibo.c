/// Fibonaci series using function

#include<stdio.h>
void fibo(int n, int *b, int *c);
int main(){
    int a;
    printf("\nEnter number till you need series");
    scanf("%d",&a);
    int b=0 , c=1;
    fibo(a, &b, &c);



    return 0;
}
void fibo(int a, int *b, int *c){
    int next;
    printf("The series is - %d, %d,", *b , *c);
    for(int i=3; i<=a; i++){
        next= *b + *c;
        printf("%d,", next);
        *b=*c;
        *c= next;
    }
}

