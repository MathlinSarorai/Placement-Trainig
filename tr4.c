#include <stdio.h>
#include <time.h>
#include <math.h>//Provides clock(), clock_t,CLOCKS_PER_SEC operations to calculate the runtime

//    int tot=111,skip=100,limit=10;
//    double time_spent = 0.0;
//    clock_t begin = clock();
//    for(int i =1;i<=tot;i++){
//        if(i<=skip){
//            continue;
//        }
//        
//        if(i==skip+limit+1){
//                break;
//            }
//            printf("%d\n",i);
//        
//    }
//clock_t end = clock();
//time_spent +=(double)(end - begin)/CLOCKS_PER_SEC;
////printf("\n Cpu Runtime: %fs",time_spent);
//unsigned short int num;

//for(int i=1;i<num;i++){
//printf(" %hu ",fibinocci(i));
//}
//}
//int fibinocci(int num){
//    if(num==0||num==1){
//    return num;}
//else
//return fibinocci(num-1)+ fibinocci(num-2);
//}
//printf("%hd",(short)(int)65500.5);
//int num,sum=0;
//printf("\n Enter a number");
//scanf("%d",&num);
//for(int i = 0; i<num;i++){
//int temp = i;
//sum=0;
//while(temp!=0){
//    int k = temp%10;
//    sum+=k*k*k;
//    temp/=10;
//}
//if(sum==i){
//    printf("\n %d Amstrong Number", i);
//}
//
//
//}
//char ch;
//int a, b,op;
//printf("\n Enter a choice \n + -> ADDITION  \n - -> Subraction  \n * -> Multiplication  \n / -> Division \n ");
//scanf("%c",&ch);
//printf("\n Enter first numebrs");
//scanf("%d",&a);
//printf("\n Enter second numebrs");
//scanf("%d",&b);
//
//switch(ch){
//    case '+':
//    op = a+b;
//    printf("\n The Addition of %d  %d  is : %d",a,b,op);
//    break;
//    case '-':
//     op= a-b;
//    printf("\n The Difference of %d  %d  is : %d",a,b,op);
//    break;
//    case '*':
//     op = a*b;
//    printf("\n The Multiplication of %d  %d  is : %d",a,b,op);
//    break;
//    case '/':
//     op = a/b;
//    printf("\n The Quitient of %d  %d  is : %d",a,b,op);
//    break;
//    default:
//    printf("\n Invalid Input ");
//}
// Calculator using switch case
//
//    int n1,n2;
//    char op;
//     int op1;
//    printf("Enter number 1: ");
//    scanf("%d",&n1);
//    printf("Enter number 2: ");
//    scanf("%d",&n2);
//    printf("\n\n%d %d\n\n",n1,n2);
//    printf("What is the operation (+,-,*,/,%c): ", '%');
//    scanf("%s", &op);
//    switch (op)
//    {
//    case '+':
//     op1 = n1+n2;
//    printf("\n The Addition of %d  %d  is : %d",n1,n2,op1);
//        //("%d %c %d = %d", n1, op, n2, (1));
//        break;
//    case '-':
//        printf("%d %c %d = %d", n1, op, n2, (n1 - n2));
//        break;
//    case '*':
//        printf("%d %c %d = %d", n1, op, n2, (n1 * n2));
//        break;
//    case '/':
//        printf("%d %c %d = %d", n1, op, n2, (n1 / n2));
//        break;
//    case '%':
//        printf("%d %c %d = %d", n1, op, n2, (n1 % n2));
//        break;
//    default:
////        printf("Kindly enter a valid operation: + , - , * , / , %c\nTHANK YOU", '%');
//    }
void prime(int num){
    int flag=0;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag++;
        }
        
    }
    if(flag==0){
        printf("\n Prime : %d",num);
    }
}
////
//int power(int num, int pow){
//    int sum=1;
//    if(pow==0){
//        return 1;
//    }
//    sum=num*power(num,pow-1);
//    return sum;
//}


//void avg(int m1, int m2, char name[]){
//    float avg = (m1+m2)/2;
//    printf("\nThe average of %s marks in m1 and m2 is : %f",name,avg);
//}
//void square(int l,int h){
//    while(l<=h){
//        
//            if(power(l,2)<=h){
//                printf("\n %d is a perfect Square",power(l,2));
//                 l++;
//            
//        }
//    }
////}
//int factorial(int num){
//    int f;
//    if(num==0){
//        return 1;
//    }
//f=num*factorial(num-1);
//return f;
//}
void main(){
    //int num,pow;
   // int fact;
   // printf("\n Enter a number");
   // scanf("%d",&fact);
   //int val =  factorial(fact);
   //printf("\n The factorial of %d is : %d",fact,val);
    //int low,high;
    //printf("\n Give the lower limit");
    //scanf("%d",&low);
    //printf("\n Give the upper limit");
    //scanf("%d",&high);
    //square(low,high);
    //int m1,m2;
    //char name[10]="Lin";
    //printf("\nEnter marks in sub1");
    //scanf("%d",&m1);
    //printf("\nEnter marks in sub2");
    //scanf("%d",&m2);
    //avg(m1,m2,name);
    //printf("\nEnter a number");
    //scanf("%d",&num);
    //printf("\n Enter the power");
    //scanf("%d",&pow);
    //int number=power(num,pow);
    //printf("\n The value of %d^%d is :%d",num,pow,number);
    //int p = prime(num);
    //if(p==0){
    //    printf("%d is a prime number",num);
    //}
    //else{
    //    printf("%d is not a  primr number",num);
    //}
int n1;
    printf("\n Enter the size of array");
    scanf("%d",&n1);
    int a[n1];//b[n2],c[n1+n2] ;
    printf("\n Enter the array elements");
    for(int i =0;i<n1;i++){
        printf("\ne%d:",i);
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n1;i++){
        prime(a[i]);
}
}





//int a=0,b=1,c;
//printf("\n%d %d",a,b);
//for(int i=0;i<num-2;i++){
//    c = a+b;
//    a=b;
//    b=c;
//    
//    printf(" %d",c);
