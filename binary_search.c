#include<stdio.h>
int main(){
    int n,arr[100],i,mid,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element to be searched: ");
    scanf("%d",&key);
    mid=n/2;
    while(mid>=0 && mid<n){
        if(arr[mid]==key){
            printf("Element found at index %d",mid+1);
            return 0;
        }
        else if(arr[mid]<key){
            mid++;
        }
        else{
            mid--;
        }
        
    }
    printf("Element not found in the array");
    return 0;
}