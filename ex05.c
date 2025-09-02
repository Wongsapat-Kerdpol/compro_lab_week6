#include<stdio.h>
#include<string.h>

int main(){
    int i;
    int resultM;
    struct Time{
        int M1;
        int S1;
        int M2;
        int S2;
        int M3;
        int S3;
    };
    struct Time m;
    printf("Time input (m:s): ");
    scanf("%d:%d", &m.M1, &m.S1);
    printf("Time input (m:s): ");
    scanf("%d:%d", &m.M2, &m.S2);
    printf("Time input (m:s): ");
    scanf("%d:%d", &m.M3, &m.S3);
    resultM = (m.M1*60)+(m.M2*60)+(m.M3*60)+m.S1+m.S2+m.S3;
    printf("Total time elasped: %d second(s)\n", resultM);
    return 0;
}