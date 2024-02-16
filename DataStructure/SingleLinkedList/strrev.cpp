// C program to demonstrate
// example of strrev() function

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "geeksfor(geek)s";
	char i;
	printf("The given string is =%s\n", str);
	if(str[i]=='(')
	str[i]=strrev(')');
	else if(str[i]==')')
	strrev('(');
	printf("After reversing string is =%s", strrev(str));

	return 0;
}
