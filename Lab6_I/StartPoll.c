int main(void) 
{ 
 
volatile int *start  
 
= (int *) 0xFF200000;  // red LED address 
 
int c; 
 *start = 0;
 
while ( c != '1') 
 
{ 
  printf("Press 1 to Start Camera:\n");
  c =getchar();
  printf("\n");
} 
*start = 1;
return 1;
} 

