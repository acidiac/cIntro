/* Program to demonstrate commmand line arguments as inputs */
#include<stdio.h>
int isPrime(int n);

int main (int argc, char* argv[]){
  int i;
  for (i = 1; i < argc; i++ ){
      int num;
      sscanf(argv[i],"%d", &num ) ;
      isPrime(num);
  }
  return 0;
}

int isPrime(int n){
    int i, flag = 0;
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0) // condition for nonprime number
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
    return 0;
}
