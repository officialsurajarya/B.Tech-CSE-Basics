#include<stdio.h>
void main() {
    int find,a[20];
    printf("Enter 10 digits: ");
    for(int i = 0; i<=9; i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter a Number That you want to search: ");
    scanf("%d",&find);

    for(int i = 0; i<=9; i++) {
        if(a[i]==find){
            printf("Number Found at Position: %d",i);
        }
    }
}

// Using Function
/*
#include<stdio.h>
void LinearSearch(int n, int a[20], int search) {
    int k=0;
    for(int i = 0; i<n; i++) {
        if(a[i]==search){
            printf("Number Found at index: %d",i+1);
            k++;
        }
    }
    if(k==0) {
        printf("Element not found");
    }
}

void main() {
    int n;
    int search;
    int a[20];

    printf("Enter the Total Number of element: ");
    scanf("%d", &n);

    printf("Enter %d digits: ",n);

    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter a Number That you want to search: ");
    scanf("%d",&search);

    LinearSearch(n, a, search);
}*/