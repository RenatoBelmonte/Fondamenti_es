extern void encrypt(char* s, unsigned int n);

int main(void)
{
	size_t n = 36;
	char mit[] = "nel mezzo del cammin di nostra vita" ;
	
	encrypt(mit, n);
	encrypt(mit, n);

	return 0;
}