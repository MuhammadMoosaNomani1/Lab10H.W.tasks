#include<stdio.h>
#include<string.h>
int main(){ 
	char names[5][20]={{"Ayesha"},{"Ali"},{"Osman"},{"Roman"},{"Saif"}}; 

	char searchName[20];
	printf("Enter the Name to Search: ");
	scanf("%s", searchName);
	int found=0; 
	for(int i=0;i<5;i++){
		if(strcmp(searchName,names[i])==0){
			found=1;
		}
	}
	if(!found) printf("\nName Not Found!");
	else printf("\nName Found!");
	return 0;
}

