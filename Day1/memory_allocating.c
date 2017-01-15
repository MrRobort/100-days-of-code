#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]){
	char *char_ptr;
	int  *int_ptr;
	int mem_size;
	
	if (argc < 2) // if no argment 
		mem_size = 50; // make 50 as defult value for mem_size
	else 
		mem_size = atoi(argv[1]);
	
	printf("\t[+]Allcating %d byte of memory for char_ptr\n", mem_size);
	char_ptr = (char *) malloc(mem_size);
	if (char_ptr == NULL){
		fprintf(stderr, "Error: Connot alloct memory in the heap\n");
		exit(-1);
		}
	strcpy(char_ptr, "This memory is located in the heap");
 	printf("char_ptr at (%p) --> %s\n",char_ptr, char_ptr);
	
	printf("\t[+]Allocating another 15 byte of for int_ptr\n");
	mem_size = 15;
	int_ptr = (int *) malloc(mem_size);
	if (int_ptr == NULL){
		fprintf(stderr, "Error: Connot alloct memory in the heap\n");
		exit(-1);
	}
	
	*int_ptr = 31731;
	printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);
	
	printf("\t[-]Freeing char_ptr heap memory...\n");
	free(char_ptr);
	
	printf("\t[+]Allcating 30 bytes of memory for char_ptr\n");
	mem_size = 30;
	char_ptr = (char *) malloc(mem_size);
	if (char_ptr == NULL){
		fprintf(stderr, "Error: Connot alloct memory in the heap\n");
	}
	
	strcpy(char_ptr, "New Memory");
	printf("char_ptr (%p) --> %s\n", char_ptr, char_ptr);
	
	printf("\t[-]Freeing int_ptr heap memroy....\n");
	free(int_ptr);
	printf("\t[-]Freeing char_ptr heap memroy....\n");
	free(char_ptr);
	
}
