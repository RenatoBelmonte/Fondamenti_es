
int CopiaVettMinoriDiT(int* vettore1, int* vettore2, int N, int T);


int main()
{
	int n = 5, t = 11;
	int arr1[] = { 1, 25, 44, 5, 10 };
	int arr2[5];
	
	int ret = CopiaVettMinoriDiT(arr1, arr2, n, t);

	return 0;
}

