#include<stdio.h>
void insertUnsorted(int *a, int *n, int x, int i){
    int len = n-1;
    for(int j = len;j>=i;j--)
        a[j+1]= a[j];
    a[i] = x;
    *n++;
}
void insertSorted(int *a, int *n, int x){
    int i;
    for(i= n-1;a[i]>x;i--){
        a[i+1]=a[i];
    }
    a[i+1] = x;
    *n++;
}
void main(){
    // int arr[100]= {1,2,3,4,5,6,9,7,34,231,23456};
    int sorted[20]={1,2,3,4,6,7,8,10,12,23,34};
    int* n =11;
    // insertUnsorted(arr,n,55,3);
    insertSorted(sorted,n,5);

    for(int i=0; i<n;i++){
         printf("%d\t", sorted[i]);
        // printf("%d\t", arr[i]);
    }
}