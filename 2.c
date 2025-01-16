#include<stdio.h>
void main(){
    int p=0;
    int r=0;
    int t=0;
    float si=0;
    float ci=0;
    int a;
    int n=0;
    printf("Enter 1 for simple interest and 2 for compound interest: ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter principal:");
   scanf("%d",&p);

   printf("Enter rate:");
   scanf("%d",&r);
   
   printf("Enter time:");
   scanf("%d",&t);
   
   si=(p*r*t)/100;
   
   
   printf("Simple Interest is: %f",si);

    }
    else if(a==2){
        printf("Enter principal:");
   scanf("%d",&p);
   
   printf("Enter rate:");
   scanf("%d",&r);
   
   printf("Enter time:");
   scanf("%d",&t);
   printf("Enter n");
   scanf("%d",&n);

   
   ci= p*1;
   
   printf("Compound Interest is: %f",ci);
   
   

}
}