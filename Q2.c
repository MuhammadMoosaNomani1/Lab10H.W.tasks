#include<stdio.h>
#include<stdio.h>
int main(){
	char names[5][20];
	int index;
	int max=-1;
	printf("Enter the 5 Names: \n");
	for(int i=0;i<5;i++){
		printf("\nName: %d", i+1);
		scanf("%19s",names[i]);
	}
	int len[20];
		for(int i=0;i<5;i++){
	len[i]=strlen(names[i]);
	if(len[i]>max) {
		max=len[i];
		index=i;
	}
			}	
			printf("\nLongest Name is %s and its length is %d", names[index],max);
	return 0;
}

