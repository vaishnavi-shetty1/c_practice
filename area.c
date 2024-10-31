#include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectarea(float a,float b);

int main(){
    float side,a,b,rad;

    printf("enter side of square:");
    scanf("%f",&side);
    printf("area of square is :%f\n",squarearea(side));

    printf("enter radius of circle:");
    scanf("%f",&rad);
    printf("area is:%f\n",circlearea(rad));

    printf("enter sides of rectangle:");
    scanf("%f%f",&a,&b);
    printf("area of rectangle is:%f\n",rectarea(a,b));

    return 0;
}

float squarearea(float side){
    return side * side;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
float rectarea(float a,float b){
    return a*b;
}
