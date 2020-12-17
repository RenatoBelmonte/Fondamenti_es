extern char* concatena(const char* prima, const char* seconda);

int main(void)
{
	char s1[] = "Questa è la ";
	char s2[] = "stringa risultante";
	char* s;

	s = concatena(s1, s2);

	return 0;
}