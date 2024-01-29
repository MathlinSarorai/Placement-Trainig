#include <stdio.h>


//void sum(int arr[], int len){
//    int sum=0;
//    printf("\n Running sum");
//    for(int i=0;i<len;i++){
//        sum+=arr[i];
//        printf("\n%d",sum);
//    }
//}

//Print array elements using recursion
//void printtt(int arr[],int st,int end){
//    
//    if(st==end-1){
//        return;
//    
//    }
//    printf("%d",arr[st]);
//    printtt(arr,st+1,end);
//   
//    
//}
void Reverse(int arr[],int num){
    int rot=3;
    if (num<=rot){
     for(int i =0;i<num;i++){
        arr[i]=arr[num-i-1];
    }
    }
    else{                      // 0 1  2 3 4 5   0 1   5 4 3 2     2 3 4 5 1 2 
       for(int i =num;i<n1;i++){//1 2  3 4 5 6 //2 1   6 5 4 3 //  3 4 5 6 1 2 

        arr[i]=arr[num-i-1];
    } 
    }
    

}

void main(){
    
    int n1;//n2,;
    printf("\n Enter the size of array");
    scanf("%d",&n1);
    //printf("\n Enter the size of array");
    //scanf("%d",&n2);
    int a[n1];//b[n1];//,j=0;//,c[n1+n2] ;
    printf("\n Enter the array elements");
    for(int i =0;i<n1;i++){
        printf("\ne%d:",i);
        scanf("%d",&a[i]);
   }
int num,sum=0;
printf("\nEnter the number");
scanf("%d",&num);
reverse(a,num);
reverse(a,n1-num);
reverse(a,n1);
//add(sum,0,num);
//for(int i =0;i<n1;i++){
//    for(int j=0;j<n1-i;j++){
//        for(int k=0;k<=i+j;k++){
//              sum+=a[k];}
//        if(sum==num){
//            printf("\n%d-%d forms %d",i,j,num); 
//        }
//       
//        
//        
//        }
//        
//
//    }
}

////for(int j=0;j<n1;j++){
//    if(a[j]==num){
//        printf("%d",j);
//    }
//}
//int k=1;
//int l=0;
// sub=num-a[l];
// for(int m = l+1;m<n1;m++){
//if(a[m]==sub){
// printf("\n%d,%d forms %d",l,m,num); 
// }
//
//}
//l++;
//



//for(int j=0;j<n1;j++){
//if(j<rot){
//    b[j]=a[n1-rot+j];
//    
//    //a[n1-rot+j]=a[j];
//   // a[j]=a[n1-rot+j];
//}
//else{
//    //a[j-rot]=a[j];
//   b[j]=a[j-rot];
//}
//}
//for(int i =0;i<n1;i++){
//        printf("\ne%d:%d",i,b[i]);
//        
//   }
//printtt(a,0,n1);
    //int f=a[0],s=a[1],t=a[3];
    // for(int i=0;i<n1;i++){
    //   if(a[i]>f){
    //    t=s;
    //    s=f;
    //    f=a[i];
    //   }
    //   else if(a[i]>s){
    //    t=s;
    //    s=a[i];
    //   }
    //   else{
    //    if(a[i]>t){
    //        t=a[i];
    //    }
    //   }
    //   
    //}
    //printf("%d\n",f);
    //printf("%d\n",s);
    //printf("%d",t);
    //for(int i =0;i<n2;i++){
    //    printf("\ne%d:",i);
    //    scanf("%d",&b[i]);
    //}
    //for(int i =0;i<n1;i++){
    //    c[i]=a[i];
    //}
    //for(int i =0;i<n2;i++){
    //    c[n1+i]=a[i];
    //}
    //int num = n1+n2;
    // printf("\n Elements of Array");
//    int j =n1-1,flag=0;
//      for(int i=0;i<n1;i++){
//        b[j]=a[i];
//        j--;
//    }
//    for(int i =0;i<n1;i++){
//        printf("\ne%d: %d\n",i, b[i]);
//        
//    }
//    int i=0;
//        if(a[i]==b[i]){
//            flag=1;
//            i++;
//        }
        
        
    
    //if(flag==1){
    //    printf("\n Palindrome");
    //}
    //else{
    //    printf("\n Not a Palindrome");
    //}




//Array index
//Reverse
//Incrementing by number
//concatinating
//palindrome
//even elements
//greatest 3 elements
//Array rotation