#include <stdio.h>
void main(){
    int h;
    int w;
    int d;
    int volume;
    printf("Enter the height of the box: ");

    scanf("%d", &h);
    printf("Enter the width of the box: ");
    scanf("%d", &w);

    printf("Enter the depth of the box: ");
    scanf("%d", &d);
    volume = h * w * d;
    printf("The volume of the box is %d cubic units", volume);
}