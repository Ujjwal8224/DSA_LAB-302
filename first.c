#include<stdio.h>
int main(){
    int n, i, arr[100];
    printf("Enter no. of elements:\n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
    }
    printf("Print ele: \n");
    for( i= 0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;

}



























