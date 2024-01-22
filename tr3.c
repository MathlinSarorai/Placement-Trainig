#include <stdio.h>
#include <math.h>
void main(){
long int sum=0;
short int num;
printf("\n Enter a number");
scanf("%hd",& num);
sum=((num)*(num-1))/2;
printf("The sum is %ld ",sum);
//
//
//
//
//  short int n;
//  long int  reverse = 0;
//  int remainder;
//  int count = 0;
//
//  printf("Enter an integer: ");
//  scanf("%hd", &n);
//
//  while (n != 0) {
//    remainder = n % 10;
//    reverse = reverse * 10 + remainder;
//    n /= 10;
//    count++;
//  }
//
//  printf("Reversed number = %ld", reverse);
//  printf("\n The number of digits is %d ",count);
//  if(n==reverse)
//    printf("\n Palindrome");
//  else printf("\n Not a Palindrome");
//}
//
int st,end;
int count;
printf("\n Enter the start value");
scanf("%d",&st);
printf("\n Enter the end value");
scanf("%d",&end);
for(int i = st+1; i<end;++i){
  count = 0;
  for(int j = 2;j<=i/2;++j){
    if(i%j==0){
      count=1;
      break;
    }
  }
  if(count==0){
    printf("%d\t",i);
  }
}
}









