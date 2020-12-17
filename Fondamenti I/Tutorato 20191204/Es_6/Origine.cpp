int conta_occorrenze(char *s, char c)
{
	int t = 0; 
	for (int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == c)
			++t;
	}
	return t;
}

int main()
{
	char s[] = "trentatre trentine";
	char c[] = "t";

	int t = conta_occorrenze(s, c[0]);

	return 0;
}