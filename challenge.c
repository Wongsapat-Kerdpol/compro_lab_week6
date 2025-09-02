
#include <stdio.h>
#include <string.h>

int main() {
    int i,max =0;
     float avgM =0;
    float avgE =0;
    float avgS =0;
    float avgH =0;
    struct profile {
        char name[20];
        int id;
        float M, E, S, H;
        float avgTotal;
       
    } s[3];
    for (i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d: \n", i + 1);
        scanf("%s %d %f %f %f %f", s[i].name, &s[i].id, &s[i].M, &s[i].E, &s[i].S, &s[i].H);
        avgM += s[i].M;
        avgE += s[i].E;
        avgS += s[i].S;
        avgH += s[i].H;
    }
    printf("\nStudent Averages:\n");
    for (i = 0; i < 3; i++) {
        s[i].avgTotal = (s[i].M + s[i].E + s[i].S + s[i].H) / 4.0;
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avgTotal);
    }
    for (i = 1; i < 3; i++) {
        if (s[i].avgTotal > s[max].avgTotal) {
            max = i;
        }
    }
    printf("Top Student: %s with %.2f", s[max].name,s[max].avgTotal);

    printf("\nStudent Averages:\n");
    printf("Math: %.2f\n", avgM/3);
    printf("English: %.2f\n", avgE/3);
    printf("Science: %.2f\n", avgS/3);
    printf("History: %.2f\n", avgH/3);


    float subjectAvg[4] = {avgM / 3, avgE / 3, avgS / 3, avgH / 3};
    char subjectN[4][100] = {"Math", "English", "Science", "History"};
    int topSub = 0;
    for (i = 1; i < 4; i++) {
        if (subjectAvg[i] > subjectAvg[topSub]) {
            topSub = i;
        }
    }
    printf("Top Subject: %s with average %.2f\n",subjectN[topSub],subjectAvg[topSub]);

    return 0;
}
