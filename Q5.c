#include<stdio.h>
void countVowels(char names[5][20]);
int main(){
	char names[5][20]={{"Ali"},{"Hassan"},{"Ayesha"},{"Omar"},{"Farhan"}};
	countVowels(names);
	return 0;
}
void countVowels(char names[5][20]){
	int count[5]={0};
	for(int i=0;i<5;i++){
		for(int j=0;j<20;j++){
			if(names[i][j]=='a'||names[i][j]=='A'||names[i][j]=='e'||names[i][j]=='E'||names[i][j]=='i'||names[i][j]=='I'||names[i][j]=='o'||names[i][j]=='O'||names[i][j]=='u'||names[i][j]=='U'){
				count[i]++; 
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("\n%s -> %d", names[i],count[i]);
	}
}
