void ScambiaStringhe(unsigned char* stringa1, unsigned char* stringa2);

int main()
{
	unsigned char str1[] = "HELLO WORLD!";
	unsigned char str2[] = "hello_world?";

	ScambiaStringhe(str1, str2);

	return 0;
}