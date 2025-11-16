#include<stdio.h>
#include<string.h>
int main(){
	char names[50];
	char username[50];
	printf("Enter Full Name: ");
	scanf("%[^\n]s",names);
	username[0]=names[0];
	username[1]='\0';
		char temp[50];
		strcpy(temp,names);
		char* token= strtok(temp," "); 
		char lastname[50];
		while(token!=NULL){
			strcpy(lastname,token);
			token=strtok(NULL," ");
		}
		strcat(username,lastname);
		strlwr(username);
		int len=0;
		for(int i=0;names[i]!='\0';i++){
			if(names[i]!=' ') len++;
		}
	char num[5];
	sprintf(num,"%d",len); 
	strcat(username,num);
	printf("\nYour Username is: %s ", username);
	return 0;
}
