#include <stdio.h>

	struct Date{
		int day;
		int month;
		int year;
	};
	struct Student{
		int rollNum;
		char name[40];
		struct Date dob
	};
	
int main(){	
	struct Student s1 = {101 , "ali", {4 , 11, 2000}};
	printf("Student Named %s was born on %d/%d/%d\n",s1.name , s1.dob.day , s1.dob.month , s1.dob.year);
}
