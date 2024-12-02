#include<stdio.h>
double Area_of_circle( float *r);
double Circumference_of_circle( float *r);
double volume_of_sphere(float *r);

int main(){

    float  r ;
    int choice;
    while(1){
    printf("\n -------------Menu---------\n");
    printf("\n Press 1 if you wanna aoc\n");
    printf("\n Press 2 if you wanna coc\n");
    printf("\n Press 3 if you wanna vos\n");
    printf("\n press 4 for Exit\n");

    scanf("\n%d",&choice);

    if(choice==4){
        printf("Back to Home");
        break;
    }

    printf("\n Please enter value of radies \n");
    scanf("%f",&r);
    double aoc,coc,voc ;

    switch(choice){

        case 1:
        Area_of_circle(&r);
        aoc= Area_of_circle(&r);
        printf("aoc is %.2f", aoc);
        break;


        case 2:
        Circumference_of_circle(&r);
        coc= Circumference_of_circle(&r);
        printf("coc is %.2f",coc);
        break;


        case 3:
        volume_of_sphere(&r);
        voc= volume_of_sphere(&r);
        printf("vos is %.2f",voc);
        break;

        default:
        printf("Invalid Number\n");
 
    }
    }

    return 0;

}
double Area_of_circle( float *r){
    double aoc = 3.14 * (*r) * (*r);
    return aoc;
}

double Circumference_of_circle( float *r){
    double coc = 2* 3.14 * (*r);
    return coc;
}

double volume_of_sphere(float *r){
    double vos = 4.0/3.0 * 3.14 * (*r) * (*r) * (*r);
    return vos;
}
 

