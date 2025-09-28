 /* DAY 13 OF C PROGRAMMING CODING 
  Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
  
 #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

   int n,p,a;
   char sym;
  printf("Enter the value of n and p and the symbol: ");
  scanf("%d %d %c",&n,&p,&sym);
  switch(sym)
  {
      case '+' :
       a=n+p;
      printf("%d",a);
      break;
      case '-' :
       a=n-p;
      printf("%d",a);
      break;
      case '*' :
       a=n*p;
      printf("%d",a);
      break;
      case '/' :
       a=n/p;
      printf("%d",a);
      break;
      case '%' :
       a= n%p;
      printf("%d",a);
      break;
      
  }
  
  return 0;
}


