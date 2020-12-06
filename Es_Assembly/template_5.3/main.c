void CopiaSenzaSpaziIniziali(unsigned char* stringa1, unsigned char* stringa2);

int main()
{
	unsigned char str1[] = "     Hello world!";
	unsigned char str2[18];

	CopiaSenzaSpaziIniziali(str1, str2);

	return 0;
}