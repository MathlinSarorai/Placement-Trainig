#include <stdio.h>

// int count(int num, int len, int arr[]){
   
//      int max=num, count=0;
//      for(int i =0;i<len;i++){
//         if(arr[i]<max){
//             count++;
//         }
//      }
//      return count;


// }


void unique_ele(int arr[],int len){
    for(int i =0;i<len;i++){
        for(int j =i+1;j<len;){
            if(arr[i]==arr[j]){
                return arr[i];
// for(int k =j;k<len;k++){
//     arr[k]=arr[k+1];
// }
//len--;
            }
            j++;
        }
    }
    
}
void main(){
//     int arr[]={10,12,1,3,5,7};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int c[len];
   
//     for(int i =0;i<len;i++){
//         c[i]=count(arr[i],len,arr);
//     }
//   printf("\nElements\tCount ");
// for(int i =0;i<len;i++){
//   printf("\n%d  \t\t\t%d",arr[i],c[i]);
// }
// int arr[]={10,12,1,3,5,7,9,10};
// int arr2[]={5,11,6,6,12};
// int len=sizeof(arr)/sizeof(arr[0]);
// int len2 = sizeof(arr2)/sizeof(arr2[1]);
// int len3=len+len2;
// int arr3[len3];
// int arr4[10];

// for(int i =0;i<len;i++){
//     arr3[i]=arr[i];
// }
// for(int j =0;j<len2;j++){
//     arr3[len+j]=arr2[j];
// }
// for(int i =0;i<len3;i++){
//     for(int j =i+1;j<len3;j++){
//         if(arr3[i]>arr3[j]){
//             int temp=arr3[i];
//             arr3[i]=arr3[j];
//             arr3[j]=temp;
//         }
//     }
// }

// int size=unique_ele(arr3,len3);
// printf("%d",size);
// if(len3%2==0){
//     int median = (arr3[len3/2]+arr3[len3/2]-1)/2;
//     printf("\nThe median of array is:%d",median);

// }
// else{
//     int median = arr3[len3/2];
//     printf("\nThe median of array is:%d",median);
// }
// for (int i =0;i<len3;i++){
//     for(int j =i+1;j<len3;){
//         if(arr[i]==arr[j]){
//         for(int k =j;k<len3;k++){
//             arr3[k]=arr3[k+1];
//         }
//         len3--;
//         }
//         else{
//             j++;
//         }
//     }
// }
// printf("\nThe Union array is");
// for(int i = 0;i<size;i++){
//     printf("\t%d",arr3[i]);
// }

int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int n=3;
for(int slice=0;slice<=2*n-1;++slice){
    int z=(slice<n)?0:(slice-n+1);
    for(int j=z;j<=slice-z;j++){
        printf("%d",a[j][slice-j]);
    }
    printf("\n");
}
}
//Count the elements smaller than it in a particular array
//union of arrays
//intersection
//union of 2 arrays
//intersection of 2 arrays
//Diagonal traversal of a array.
