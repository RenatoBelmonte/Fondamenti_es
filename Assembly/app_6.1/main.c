#include <stdio.h>
int  AmpiezzaRange (int v1, int v2, int v3);
	

void main() {
   
	int v1,v2,v3,ris;
	v1=1; v2=5; v3=7;
	ris=AmpiezzaRange(v1,v2,v3);
	printf("f(%d; %d; %d ) = %d \n",v1,v2,v3,ris);
	
	v1=1; v2=-1; v3=0;
	ris=AmpiezzaRange(v1,v2,v3);
	printf("f(%d; %d; %d ) = %d \n",v1,v2,v3,ris);
	
}