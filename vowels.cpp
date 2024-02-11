/*Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2*/


#include<stdio.h>
#include<ctype.h>
int main(){
char sentence[100];
int vowels=0;
printf("Enter your sentence:\n");

fgets(sentence,sizeof(sentence),stdin);

for(int i=0;sentence[i]!='\0';++i){
 
 sentence[i]= tolower(sentence[i]);
 
 if(sentence[i]=='a'|| sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'){
 	++vowels;
 }
}
 printf("number of vowels in the sentence is: %d",vowels);

return 0;
}
