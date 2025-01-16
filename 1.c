#include <stdio.h>
void main(){
    char name[100];
    int rollnumber;
    int marks;
    int sum=0;
    float avg=0;
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter your roll number\n");
        scanf("%d", &rollnumber);
        for( int i=1;i<=4;i++){
            printf("Enter marks of subject %d ",i);
            scanf("%d", &marks);
            sum=sum+marks;
        }
        printf("Your name is %s\n", name);
        printf("Your roll number is %d\n", rollnumber);
        printf(" total score %d/400\n",sum);
        avg=(float)sum/4;
        printf("Your percentage are: %f\n", avg);

  
}