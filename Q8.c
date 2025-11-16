#include<stdio.h>
#include<string.h>
int main(){
	char str1[25];
	printf("Enter first Word: ");
	scanf("%s",str1);
	char str2[25];
	printf("Enter second Word: ");
	scanf("%s",str2);
	strlwr(str1);
	strlwr(str2);
	if(strlen(str1)!=strlen(str2)){
		printf("\nNOT anagrams!");
		return 1;
	}
	for(int i=0;i<strlen(str1)-1;i++){
		for(int j=i+1;j<strlen(str1);j++){
			if(str1[i]>str1[j]){
			char temp=str1[i];
			str1[i]=str1[j];
			str1[j]=temp;
			}
			if(str2[i]>str2[j]){
			char temp=str2[i];
			str2[i]=str2[j];
			str2[j]=temp;
			}
		}
	}
	if(strcmp(str1,str2)==0) printf("\nThey are Anagrams");
	else printf("\nThey are NOT Anagrams");
	return 0;
}
