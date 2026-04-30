#include <stdio.h>
#include<stdlib.h>
struct student {
    int roll;
    char name;
    float per;
};

int main() {
    struct student x;
    x.roll = 23;
    x.name = 'A';

    struct student y;
    y.per = 21.4;

    printf("%d\n",x.roll);

    struct student *k;
    k = (struct student*)malloc(sizeof(struct student));
    k->roll=1;
    printf("%d",k->roll);
}