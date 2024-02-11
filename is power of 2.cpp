#include<stdio.h>
int main(){
int Num;
printf("Enter an integer:");
scanf("%d" ,&Num);
if(Num%2==0){
	printf("integer %d is a power of two",Num);
}
else
printf("integer %d is NOT a power of two",Num);

return 0;
}
