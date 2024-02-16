/*
Let we have a string having 2 commas in it. write statement that
will copy the content between both comma in another string.
ex:
char s1[]="My name is, Neha Kumari, . I am Indian";
char s2[100];
write statement that will copy " Neha Kumari" in s2
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="My name is, Neha Kumari , . I am Indian";
	char s2[100];
	char *start;
	
	start=strstr(s1,",");
	strncpy(s2,s1+12,12);
	s2[12]='\0';
	printf("\n First occurance of comma at %s",s2);
	
	return 0;

}