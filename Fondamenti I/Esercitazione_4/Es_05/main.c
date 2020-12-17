extern char *somma_stringhe(const char *a, const char *b);
int main(void)
{
    char a[] = "12345678901234567890";
    char b[] = "98765432109876543210";

    char *res = somma_stringhe(a,b);
    return 0;
}
