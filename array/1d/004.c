#include<stdio.h>
int amit(int arr[]) {
    for(int i=0; i<7; i++) {
        if(i%2==0) {
            arr[i]+=10;
        } else {
            arr[i]*=2;
        }
        return 0;
    }
}
int main() {
    int arr[]= {6,7,3,5,7,5,6};
    amit(arr);
    for(int i=0; i<7; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}