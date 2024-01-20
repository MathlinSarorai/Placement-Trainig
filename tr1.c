#include <stdio.h>
//#include <stdbool.h>
#define SIDE 5 
#define bool int
#define true 1
#define false 0
#define R 10
#define L 20
#define RAD 5
#define A S*S
#define STRINGZING(x) printf("\n%s",#x)
#define CONCAT(X,Y) X##Y
//
void fun(int a){
    printf("Value of a is %d\n",a);
    
}
void main(){
bool i = true;
bool j = false;
//int S=10;
//int c;
//unsigned short a =-100;
//int num=10;
//short num1=10; 
//long num2=10;
//long long num3=10;
//signed int num4=10;
//unsigned int num5=10;
//char ch='m';
//printf("\n Sizeof %d",sizeof(num));
//printf("\n Sizeof %d",sizeof(num1));
//printf("\n Sizeof %d",sizeof(num2));
//printf("\n Sizeof %d",sizeof(num3));
//printf("\n Sizeof %d",sizeof(num4));
//printf("\n Sizeof %d",sizeof(num5));
//printf("\n Sizeof %d",sizeof(ch));
//printf("\nHey! my name is %s and my age is %d","Mathlin",20);
//printf("\nHi good morning %d",printf("\nwow!.\n"));
//printf("\n Hi good morning %d %d\n",printf("wow!.\n",printf("wonderful!.\n")),printf("great!.\n",printf("beautiful!.\n")));
//int x = printf("hihi",'i');
//printf("%d",x);
//unsigned long int y = sizeof(printf("Hello"));
//printf("\nsize of %lu",y);
//unsigned long int i = sizeof("Hello");
//printf("\n%lu",i);
//unsigned long int j = sizeof('a');
//printf("\n%lu",j);
//unsigned long int k = sizeof(printf("Hello %d",printf("Hello")));
//printf("\n %lu",k );
//int arr[]={1,2,3,4};
//printf("\n%d",sizeof(arr));
//float arr1[]={1.5,1.3,2.0};
//printf("\n%d",sizeof(arr1));
//char arr3[]={'a','/0'};
////printf("\n%d",sizeof(arr3));
////
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
//char c='a';
//char d='A';
//short int a =10;
//unsigned short int a1=20;
//unsigned int a2=25;
//long int a3=20;
//unsigned long int a4=30;
//long long int a5=40;
//unsigned long long int a6=30;
//float f=10.0f;
//double d = 10.00;
//long double d1 = 20.00;
//printf("\n%c",c);
//printf("\n%d",c);
//
//printf("\n%c",d);
//printf("\n%d",d);
//printf("\n%d",sizeof(c));
//
//printf("\nshort int");
//printf("\n%hd",a);
//printf("\n%d",sizeof(a));
//
//printf("\n unsigned short int");
//printf("\n%hu",a1);
//printf("\n%d",sizeof(a1));
//
//
//printf("\nunsigned int");
//
//printf("\n%u",a2);
//printf("\n%d",sizeof(a2));
//
//printf("\nlong  int");
//printf("\n%ld",a3);
//printf("\n%d",sizeof(a3));
//
//printf("\nunsigned long int");
//printf("\n%lu",a4);
//printf("\n%d",sizeof(a4));
//
//printf("\nlong long int");
//printf("\n%lld",a5);
//printf("\n%d",sizeof(a5));
//
//printf("\nunsigned long long int");
//printf("\n%llu",a6);
//printf("\n%d",sizeof(a6));
//
//printf("\nFloat");
//printf("\n%f",f);
//printf("\n%d",sizeof(f));
////
//printf("\ndouble");
//printf("\n%lf",d);
//printf("\n%d",sizeof(d));


//printf("\nlong double ");
////printf("\n%Lf",d1);
////printf("\n%d",sizeof(d1));
//char arr[]="Good Day";
//printf("%8.4s",arr);
//printf("\n%-8.4s",arr);
////int size = sizeof(arr)/sizeof(arr[0]);
////for(int i=0;i<size;i++){
////    printf("%8.5s",arr[i]);
////}
////printf("\n%hu",a);
// printf("\nUnstoppable%n",&c);
//printf("\n%d",c);
//int count;
   // printf("\nThis is a test%n\n", &count);

    // 'count' now holds the number of characters printed so far
   // printf("Number of characters printed: %d\n", count);
   //int x=20;
   //int y=30;
   ////x=x+y;
   ////y=x-y;
   ////x=x-y;
 // (x+=y)&&(y=x-y)&&(x-=y);// single line swap
   //// //a = a ^ b ^ (b = a);
   //x = (x+y) - (y=x);// single line swap
//   ////printf("\n%d",y);
//   //printf("\n%d",x);
//   ////printf("\n%d",sizeof(float));
//   //printf("\n%f",10/50);
//   printf("\n%c",5["abcdef"]);
//    printf("\n%c","abcdef"[5]);
//
//printf(" \n Area of square: %d", SIDE*SIDE);
//printf(" \n Area of cylinder: %f", 3.14*R*L);
//printf(" \n Area of Circle: %f", 3.14*RAD*RAD);
//printf(" \n Area of cube: %d", SIDE*SIDE*SIDE);
//printf("\n%d",A);
//STRINGZING(S);
//printf("\n%d",CONCAT(10,20));
//const char CONCAT(Hello,World)[]="HelloWorld";//it does not concatinate the value rather it concatinates the variable name
//
//printf("\n%s",HelloWorld);
//
printf("%d",i);
printf("\n%d",j);
}
 