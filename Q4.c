#include<stdio.h>
#include<string.h>
int main(){
	char names[5][20];
	for(int i=0;i<5;i++){
		printf("\nEnter Name %d",i+1);
		scanf("%19s",names[i]);
	}
	char temp[20];
	for(int i=0;i<5;i++){ 
		for(int j=1;j<5;j++){ 
			if(strcmp(names[j-1],names[j])>0){  
				strcpy(temp,names[j-1]); 
				strcpy(names[j-1],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("\nName %d: %s",i+1,names[i]);
	}
	return 0;
}
