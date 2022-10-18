#include<stdio.h>

int binarySearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
            int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}

int main(){
    int arr1[10]={4,6,8,9,10,12,14,16,19,25};
    int arr2[5]={1,5,6,8,10};

    int search=binarySearch(arr1,10,12);

    printf("%d",search);


}
