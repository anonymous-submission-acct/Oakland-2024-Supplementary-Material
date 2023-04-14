#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void partition(int arr[],int low,int high);
int* OBF_FUNC(int arr[],int low,int mid,int high);

int main(int argc, char* argv[]){
    if (argc < 11) {
        return 1;
    }
    int merge[10];
    int i;

    i=1;
    for(;i<argc;) {
        merge[i-1] = argv[i][0];
        i++;
    }

    partition(merge,0,argc-1);

    printf("After merge sorting elements are: ");
    i=0;
    for(;i<argc-1;){
         printf("%d ",merge[i]);
         i++;
    }

   return 0;
}

void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         OBF_FUNC(arr,low,mid,high);
    }
}

int* OBF_FUNC(int arr[],int low,int mid,int high){

    int i;
    int m;
    int k;
    int l;
    int temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
        k=m;
         for(;k<=high;){
             temp[i]=arr[k];
             i++;
             k++;
         }
    }
    else{
        k=l;
         for(;k<=mid;){
             temp[i]=arr[k];
             i++;
             k++;
         }
    }
    k=low;
    for(;k<=high;){
         arr[k]=temp[k];
         k++;
    }
    return arr;
}
