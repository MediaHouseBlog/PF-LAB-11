#include <stdio.h>

int main(){
	FILE *fptr = NULL;
	char userData[1000];
	fptr = fopen("file2read.txt","r");
	if(fptr == NULL){
		printf("Error");
		return 1;
	}
	while(fgets(userData, 1000 , fptr) != NULL){
		printf("%s",userData);
	}
	fclose(fptr);
}
