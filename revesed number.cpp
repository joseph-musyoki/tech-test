/*Question 5: Reverse IntegerWrite a program that takes an integer as input and returns an integer with reversed digit 
ordering.
Examples:
For input 500, the program should return 5.
For input -56, the program should return -65.
For input -90, the program should return -9.
For input 91, the program should return 19
*/

#include<stdio.h>
int main(){
	int sign, n,reverse=0,remainder;
	printf("Enter integer to be reversed:");
	scanf("%d",&n);
	if(n<0){
		reverse=n*-1;
	}
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	printf("reversed value:%d",reverse);
	return 0;
}
