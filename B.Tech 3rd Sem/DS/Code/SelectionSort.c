#include <stdio.h>

int main() {
    int a[10] = {10, 3, 23, 1, 20, 5};
    
    for (int i=0; i<5; i++) {
        int min = a[i];
        int pivot = i; 

        for(int j=i+1; j<6; j++){
            if(min>a[j]){
                min = a[j];
                pivot = j;
            }
        }
        int temp = a[i];
        a[i] = a[pivot];
        a[pivot] = temp;
    }
    
    // Print
    printf("[");
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ",a[i]);
    }
    printf("]")
    
}