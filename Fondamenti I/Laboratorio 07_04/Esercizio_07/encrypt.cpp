void encrypt(char* s, unsigned int n)
{
	for (int i = 0; s[i] != 0; ++i)
	{
		s[i] ^= 0xAA;
	}

}