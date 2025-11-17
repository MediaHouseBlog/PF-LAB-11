#include<stdio.h>

int main() {
	 char filename [100];
	 FILE *fptr;
	 char userData[100];
	
	 // Get file name from user
	 printf("Enter the file name to create (example: test.txt, code.c, report.docx):\n");
	 scanf("%s", filename);
	 getchar();
	 // Open file for writing
	 fptr fopen(filename, "w");
	
	 if (fptr== NULL) {
	 	printf("Error creating the file!\n");
	 	return 1;
	 }
	 printf("File '%s' created successfully!\n", filename);
	
	 // Optional: write something inside
	 fprintf(fptr, "This file was created by the program.\n");
	 printf("Enter Data ");
	 fgets(userData, sizeof(userData), stdin);
	 fputs (userData, fptr);
	
	 fclose(fptr);
	 return 0;
}
