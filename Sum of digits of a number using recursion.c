#include <stdio.h>
int SumOfDigits(int n){
  int rem,sum=0;
  while(n!=0){
      rem=n%10;
      sum+=rem;
      n/=10;
    }
    return sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",SumOfDigits(num));
}
