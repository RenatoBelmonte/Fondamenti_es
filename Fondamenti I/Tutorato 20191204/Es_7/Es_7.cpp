#include <ctype.h>
#include <stdlib.h>

char* maiusc_stringa(char* s, size_t n)
{
	char * p= (char *) malloc(n * sizeof(char));

	for (int i = 0; s[i] != 0; ++i)
	{
		if (islower(s[i]))
		{
			p[i]=toupper(s[i]);
		}
		else 
			p[i] = s[i];

	}
	
	return p;
}

int main()
{
	size_t n = 12;
	char s[] = "hello world";
	
	char *S = maiusc_stringa(s,n);

	return 0;
}