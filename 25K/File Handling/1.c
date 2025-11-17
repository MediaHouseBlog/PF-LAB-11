#include <stdio.h>

int main(){
	//int num1, num2;
	FILE* fptr;
	fptr = fopen("C:\\Users\\FAST.KHIFAST\\Desktop\\25K\\file.txt","w"); //open file for writing(W) used (a) for appending
	if(fptr == NULL){
		printf("Error to open the file");
		return 1;
	}
	//printf("Enter Number 1\n");
	//scanf("%d",&num1);
	//fprintf(fptr,"%d\n",num1);
	//printf("Enter Number 2\n");
	//scanf("%d",&num2);
	//fprintf(fptr,"%d\n",num2);
	
	char fullName[30];
	printf("Enter Your Full Name: ");
	scanf("%[^\n]",fullName);
	fprintf(fptr,"%s",fullName);
	fclose(fptr);
}
