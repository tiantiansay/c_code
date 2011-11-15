#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int i, j;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--)
		s[i]^=s[j]^=s[i]^=s[j];
}

void itob(int n, char s[], int b)
{
	int i;
	i = 0;
	do {
		s[i++] = n % b + '0';
	} while ( (n /= b) > 0);
	s[i] = '\0';
	reverse(s);
}

int main()
{
	int n, b;
	char s[10];
	scanf("%d %d", &n, &b);
	itoa(n, s, b);
	printf("%s\n", s);
}	
	
