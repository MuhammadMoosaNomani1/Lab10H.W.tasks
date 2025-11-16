#include<stdio.h>
#include<string.h>
int main(){
	char firstName[3][15];
	char lastName[3][15];
	char fullName[3][30];
	for(int i=0;i<3;i++){
		printf("\nEnter First Name of Student %d: ", i+1);
		scanf(" %s",firstName[i]);
		printf("\nEnter Last Name of Student %d: ", i+1);
		scanf(" %s", lastName[i]);
		strcpy(fullName[i],firstName[i]);
	    strcat(fullName[i]," ");
		strcat(fullName[i] , lastName[i]);
		printf("\nFull Name: %s", fullName[i]);
	}
	
	return 0;
}
