#include <stdio.h>

int main(){
	//in c it is known as structure but in other language it is known as object
	struct Student{
		int id;
		char name[20]; // id name and gender are members
		char gender;
	};
	
		struct Student s1 = {1 , "Ahmed" , 'M'};
		printf("The Student ID is %d \t Name is %s \t And Gender Is %c\n",s1.id , s1.name , s1.gender);
}
