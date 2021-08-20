/* Program which calculates the sum of two numbers using functions
	complete the code inside the function body
	input: 3 6
	output: 9*/
	#include<stdio.h>
	int increment(int var)
	{
	    var=var+1;
	    return var;
	}
	int main()
	{
	 //Declare the variables
   int num1,num2;
	   printf("Enter num1:");
	   scanf("%d",&num1);
	   num2=increment(num1);
	   printf("num2 value is:%d",num2);
     //enter the missing data
	   return 0;
	}
	
