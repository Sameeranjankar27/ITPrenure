#include<stdio.h>
void add(int *a, int *b);
void subtract(int *a, int *b);
void multiplication(int *a, int *b);
void division(int *a, int *b);
int main(){

    int a , b , choice;
    printf("\n -------------Menu---------\n");
    printf("\n Press 1 if you wanna Add\n");
    printf("\n Press 2 if you wanna Sub\n");
    printf("\n Press 3 if you wanna Mul\n");
    printf("\n Press 4 if you wanna Div\n");
    scanf("\n%d",&choice);

    printf("\n Please enter value of a and b\n");
    scanf("%d%d",&a,&b);

    switch(choice){

        case 1:
        add(&a, &b);
        break;

        case 2:
        subtract(&a, &b);
        break;

        case 3:
        multiplication(&a, &b);
        break;

        case 4:
        division(&a, &b);
        break;

        default:
        printf("\n Not valid");
    }


    return 0;
}
void add(int *a, int *b){
    printf("Addition will be %d", *a+*b);
    return (*a, *b);
}
void subtract(int *a, int *b){
    printf("subtraction will be %d", *a -*b);
    return (*a, *b);
}
void multiplication(int *a, int *b){
    printf("multiplication  will be %d", *a * *b);
    return (*a, *b);
}
void division(int *a, int *b){
    printf("division will be %d", *a / *b);
    return (*a, *b);
}
