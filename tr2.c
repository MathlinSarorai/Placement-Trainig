//int n = 10;
//int*p=&n;
//printf("\n The value of n is %d and the address is %u",n,&n);
//printf("%d",p);
//printf("\n%d",*p);
//int arr[10];
//int(*ptr)[10];
//ptr=&arr;//points to the whole array elements
//int *p1=&arr;//points to 0th array location
//printf("\n%d",*p1);
//printf("\n%d",*ptr);
//ptr++;//increases by 40 because 10*4
//printf("\n%d",*ptr);
//ptr++;
//printf("\n%d",*ptr);
//ptr++;
//printf("\n%d",*ptr);
//printf("\n%lu %lu",sizeof(p1),sizeof(ptr));//both is 4 byte because address is denoted which has common size.
//printf("\n%lu %lu",sizeof(*p1),sizeof(*ptr));//4 and 40 because *pi denote a integer value 4 byte, *ptr denoted a array of 10 integers with each 4 byte
//// pointer to a function - points to the code rather than data stores teh start of code
////int(*ptr)(int,int); //here ptr is teh name of the pointer to the function, and int,int are the parameter type
//
////void(*fun_ptr)(int)=&fun; //fun_ptr is the pointer to function fun
////(*fun_ptr)(10);//calling function fun using pointer.
// printf("\n The largest number is :%d",(i>j)*i+(j>i)*j);//comparision in single line
// printf("\n The smallest number is :%d",(i<j)*i+(j<i)*j);
// printf("\n ");
// int x= i || j;
// printf("%d",x);
// int y = i && (i>j);
// int z = j && (j>i);
// printf("\n The largest number is :%d", y*i+z*j);
//(((i>j)&&(i>k))&& printf("the greatest number is i : %d",i))||((j>k)&& printf("the greatest number is j : %d",j))|| printf("the greatest number is k: %d",k);
//3 
//
/*False values
integer 0 
float 0.0
string '\0'*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void main()
{
//int i=20;
//int j=20;
//int k=20;
//(((i>j)&&(i>k))&& printf("the greatest number is i : %d",i))||((j>k)&& printf("the greatest number is j : %d",j))||(((j==k)&&(k==i))&& printf("All numbers are equal"))||printf("the greatest number is j : %d",k);
//printf("\n%d",!i);
//printf("\n");
//printf(5+"HelloWorld");
//single else and multiple if is called dangling if statements


//if(i%3==0){
//    if(i%5==0){
//        printf("\n both");
//    }}
//    else{
//        printf("\n 5");
//    }
//

int i = 1;
int c=1;
while(i<=5){
 while(j<=i){
printf("%d ",c);
c++;
j++;
}
 i++;
 printf('/n') ;
}
   

}
//
//int i = 5;
//int c=15;
//int c1=15;
//while(i<=5){
//    int j = 1;
//while(j<=i){
//printf("%d ",c);
//c++;
//j++;
//}
//i++;
//printf("\n");
////}
//
//while(i>=1){
//    int j = 1;
//    while(j<=i){
//printf("%d ",c);
//j++;
//c --;
//    }
//    printf("\n");
//    i--;
//}
//
//printf("\n");
//
//int i1=1;
//while(i1<=5){
//    int j = 1;
//    while(j<=i1){
//printf("%d ",c1);
//j++;
//c1++;
//    }
//    printf("\n");
//    i1++;
//}
//
//
//printf("\n");
//
//while(i<=5){
//int sp=5-i;
//while(sp>=0){
//    printf(" ");
//    sp--;
//    }
//
//int j=1;
//while(j<=i)
//{
//printf("%d ",i);
//j++;
//
//}
//    printf("\n");
//    i++;
////}
//int lines = 5;
//int i = 1;
//int x = lines-1;
//while(i<=5){
//int sp = 5-i;
//while(sp>=0){
//    printf(" ");
//    sp--;
//}
//int j = 1;
//while(j<=i){
//    printf("* ");
//    j++;
//}
//i++;
//printf("\n");
//}
//while(x>=0){
//    int sp1 = 5-x;
//while(sp1>=0){
//    printf(" ");
//    sp1--;
//}
//int j1 = 1;
//while(j1<=x){
//    printf("* ");
//    j1++;
//}
//x--;
//printf("\n");
//}


//
//int lines = 5;
//int i = 1;
//int c=1;
//while(i<=5){
//int sp = 5-i;
//while(sp>=0){
//    printf(" ");
//    sp--;
//}
//int j = 1;
//while(j<=i){
//    printf("%d ",c);
//    j++;
//    c++;
//}
//i++;
//printf("\n");
////}
////}
//
//int lines = 9;
//int i = 1;
//int x = lines-1;
//while(i<=9){
//int sp = 9-i;
//while(sp>=0){
//    printf(" ");
//    sp--;
//}
//int j = 1;
// int k = 1;
//while(j<=i){
//   if(k<=5){
//      printf("%d ", k);
//    j++;
//    k++;
//   }
//   else{
//  
//    if(l==0){
//        printf("%d ", 1);
//    j++;
//    k++;
//    }
//    else{
//      printf("%d ", l);
//    j++;
//    k++;  
//    }
//    
//   }
//    
//    
//}
//i++;
//printf("\n");
//}
//
//}

//
//int a , b;
//for(a=b=1;a;b++){
//  a=b<=3;
//  printf("\n %d  %d",a,b);
//}
//printf("\n%d  %d",a+10,b+10);
//int i = 0;
//for(printf("\n Hello");i<3;printf("\n How are you")){
//  printf("\n Am good");
//  i++;
//}
//
//}