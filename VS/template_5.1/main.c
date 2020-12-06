

void CopiaStringaNumerici(unsigned char* stringa1, unsigned char* stringa2);

int main()
{

	unsigned char str1[] = "H377o W0r7d!";
	unsigned char str2[32];

	CopiaStringaNumerici(str1, str2);

	return 0;
}