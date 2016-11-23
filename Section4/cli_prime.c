/* Program to demonstrate commmand line arguments as inputs */
#include<stdio.h>
// Function prototype declaration
int isPrime(int n);

/*
    we provide main with two parameters argc and argv[ ],
    -- argc of int type keep total count of arguments provided,
    -- argv[ ] of char* type stores all the arguments 
*/
int main (int argc, char* argv[]){
  int i;
  // First argument argv[0] is the name of the file
  printf("Evaluating file %s ---------------  ------  ------ \n", argv[0]);
  for (i = 1; i < argc; i++ ){
      int num;
      /*
        arguments in argv are of char type and we are using 
        sscanf to read the input and store it as a int type. 
        Syntax: sscanf(inputVar, <format string>, pointerVar);
      */
      sscanf(argv[i],"%d", &num ) ;
      isPrime(num);
  }
  printf("----------Finished Execution ---------------  ------  ------ \n");
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
