#include<stdio.h>
#include<string.h>

int main(){
    int i;
    float resultX,resultY;
    struct Vector{
        float x;
        float y;
        float x2;
        float y2;
    };
    struct Vector vec;
    printf("u_x: ");
    scanf("%f",&vec.x);
    printf("u_y: ");
    scanf("%f",&vec.y);
    printf("v_x: ");
    scanf("%f",&vec.x2);
    printf("v_y: ");
    scanf("%f",&vec.y2);
    resultX = vec.x +vec.x2;
    resultY = vec.y +vec.y2;
    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", resultX,resultY);
    return 0;
}