#include <stdio.h>

int element_sum(int num){
    int t=num;
    int s=0;
    while(t!=0){
        int k=t%10;
         s+=k;
        t/=10;
    }
    return s;
}

int absfunction(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
void main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// int i = 0,j=2;
// int target;
// printf("\n Enter element to be searched");
// scanf("%d",&target);
// while(i<=2 && j>=0){
//     if(arr[i][j]==target){

//         printf("\n The element is present at %d %d",i,j);
//         break;
//     }
//     else if(arr[i][j]<target){
//         i++;
//     }
//     else{
//         j--;
//     }
// }

// int a=34L;
// printf("%d",sizeof(a));
// printf("\n%d",a);

//int arr[6]={1,2,3,4,5,6};
//int b[6];
//int extra = 3;
//int max=arr[0];
//for(int i = 1;i<6;i++){
//    if(max<arr[i]){
//        max=arr[i];
//    }
//}
//for(int i =0;i<6;i++){
//    if(arr[i]+extra>=max){
//        b[i]=1;
//    }
//    else{
//        b[i]=0;
//    }
//}
// printf("\nCandies\tArray\n");
//for(int i =0;i<6;i++){
//   
//    printf("\n%d\t%d",arr[i],b[i]);
//}

int arr[]={12,22,30,44,23,55};
int sum=0;
int sum2=0;

int len = sizeof(arr)/sizeof(arr[0]);
for(int i =0;i<len;i++){
    sum+=arr[i]; 
    int val = arr[i];
     int v=element_sum(val);
     sum2+=v;
}
int f_sum = absfunction(sum,sum2);
printf("\nThe element sum is: %d",sum);
printf("\nThe digit sum is: %d",sum2);
printf("\nThe difference of these is :%d",f_sum);
}


//searching of a element in sorted 2Darray - 
//shuffling array
//candy problem
//array sum and element sum in a  array