#include <stdio.h>
#include <stdlib.h>
void createarray(int *arr, int size){
    for(int i=0;i<size;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void displayarray(int *arr, int size){
    printf("Array Elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int* arr=(int*)malloc(size*sizeof(int));
    createarray(arr,size);
    displayarray(arr,size);
    return 0;
}