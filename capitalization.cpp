
/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.
Examples: 
"hi"=> returns "Hi" 
"i love programming"=> returns "I Love Programming"*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char string[100];
	int i,length=0;
	
	printf("Enter a sentence:\n");
	gets(string);

	length=strlen(string);
	
	for(i=0;i<length;i++){
		if(i==0)
	{
		string[i]=toupper(string[i]);
	}
	else if(string[i]==' ')
	{
		string[i+1]=toupper(string[i+1]);
		i+=1;
	}
	else
	string[i]=tolower(string[i]);
	}
	printf("capitalized sentence: %s",string);
	return 0;
}
