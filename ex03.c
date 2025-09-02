#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i;
    float distance;
    float x1;
    float y1;
    float x2;
    float y2;
    printf("x1: ");
    scanf("%f",&x1);
    printf("y1: ");
    scanf("%f",&y1);
    printf("x2: ");
    scanf("%f",&x2);
    printf("y2: ");
    scanf("%f",&y2);
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",x1,y1,x2,y2,distance);
    
    return 0;
}