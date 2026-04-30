#include<stdio.h>

int main() {
    int arr[10]={40,1,2,56,3,77,6,8};
    for(int j=0; j<8; j++) {
        for(int i=0; i<7; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    // print
    for(int i=0; i<8; i++){
        printf("%d, ", arr[i]);
    }
}