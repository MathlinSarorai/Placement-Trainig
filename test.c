#include<stdio.h>
#include<math.h>

// int palindrome(int arr[], int len){
//   int i =0;
  
  
//   while(i<len){
//     int sum=0;
//     int num=arr[i];
//     int temp=num;
//     while(temp!=0){
//       int k = temp%10;
//       sum=sum*10+k;
//       temp/=10;
//     }
//     if(sum==arr[i]){
//       return arr[i];
//       break;
//     }
//     i++;
//   }
// }

// int fibinocci(int num){

// if(num==0||num==1){
//    return num;}
// else
// return fibinocci(num-1)+ fibinocci(num-2);
// }
//To print series 1^2+2^2+3^3...
// int n,sum=0;
// printf("\nEnter a number:");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     sum+=pow(i,2);
// }
// printf("\nThe sum of the squares of the digit till %d is:%d",n,sum);


//Right Triangle

// int row;
// printf("\nEnter the number of rows required");
// scanf("%d",&row);
// int i=1;
// while(i<=row){
//     int j =1;
//     while(j<=i){
//         printf("%d",i);
//         j++;
//     }
//     printf("\n");
//     i++;
// }

//Matrix Multiplication
// int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
// int c[3][3];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
// c[i][j]=0;
//         for(int k =0;k<3;k++){
//  c[i][j]+=a[i][k]*b[k][j];
//         }
   
//     }
// }
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//     printf("\t%d",c[i][j]);
//     }
//     printf("\n");
// }


// void call(int x,int y ,int z){
//     printf("%d %d %d",x,y,z);
// }
int main() {


// int arr[]={12,13,45,66,343,244};
// int len=sizeof(arr)/sizeof(arr[0]);
// int s=palindrome(arr,len);
// printf("\n The first palindrome number is: %d",s);


// int m,n;
// printf("\n Enter the number of rows:");
// scanf("%d",&m);
// printf("\n Enter the numebr of columns:");
// scanf("%d",&n);
// int arr[m][n];
// int a[m*n];
// for(int i = 0;i<m*n;i++){
// a[i]=fibinocci(i);
// }
// int k =0;
// for(int i =0;i<m;i++){
//   for(int j =0;j<n;j++){
//   //  int  num=i+j+1;
//     arr[i][j]=a[k];
//     k++;
//   }
// }

// for(int i =0;i<m;i++){
//   for(int j =0;j<n;j++){
//     printf("%d\t",arr[i][j]);
//   }
//   printf("\n");
// }
}
