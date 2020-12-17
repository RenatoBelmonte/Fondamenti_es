unsigned int contaspazi(const char* str)
{
	int sp=0;
	for (int i = 0; str[i] != 0; ++i)
	{
		if (str[i] == 32)
			++sp;
	}
	return sp;
}