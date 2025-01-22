#include <stdio.h>
#include <math.h>

void main(){
    int a,b,c,s;
    int area=0;
    printf("Enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of given triangle is %d",area);
}