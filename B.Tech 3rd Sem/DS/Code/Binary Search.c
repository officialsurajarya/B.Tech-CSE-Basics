#include<stdio.h>
void BinarySearch(int n, int a[20], int search) {
    int k=0;
    int l=0;
    int r=n-1;

        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==search){
                printf("Number Found at Position: %d",m+1);
                k++;
                break;
            }else if(a[m]>search){
                r=m-1;
            }else if (a[m]<search){
                l=m+1;
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

    BinarySearch(n, a, search);
}