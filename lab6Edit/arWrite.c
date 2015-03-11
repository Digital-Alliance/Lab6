int main(void) 
{ 
 
volatile int *memory	= (int *) 0x01000000;
volatile int *ar = memory;
int x;
for( x =0; x<10; x++)
	printf("%d", ar[x]);
	//ar[x] = x*3;

printf("\Done");
return 1;
}

