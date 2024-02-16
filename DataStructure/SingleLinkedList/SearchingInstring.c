/*Searching in string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="Kajal,Neha,Anshu,Sheetal";
	int i;
	char *pos;
	char *secondpos;
	int secondi;
	
	//1. find the first occurance of , in string name
	pos=strstr(name,",");
	printf("\n First occurance of comma at %s",pos);
	i=pos-name;
	printf("\n Occurance of first comma in name %d",i);
	
	secondpos=strstr(name+i+1,",");
	secondi=secondpos-name;
	printf("\nsecond comma pos=%d",secondi);
	
	return 0;
}