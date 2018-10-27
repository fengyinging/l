#include<stdio.h>
int main()
{
	int number=0;                // variable of type int initialized to 0
	int *pointer=NULL;          //A pointer that can point to type int
	number=10;
	printf("\nnumber's address: %p",&number);  //Output the address
	printf("\nnumber's value: %d\n\n",number);  //Output the value
	
	
	pointer=&number;                  //Store the adress of number in pointer 
	
	printf("pointer's address: %p",&pointer);  //Output the adress
	printf("\npointer's size: %d bytes",sizeof(pointer));  //Output the size
	printf("\npointer's value: %p",pointer);  //Output the value (an adress)
	printf("\nvalue pointer to: %d\n",*pointer);//Value at the adress
	return 0;
}
