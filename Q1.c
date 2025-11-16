#include <stdio.h>
int main()
{
    char names[5][30];
    printf("\nEnter the Names: ");
    for (int i = 0; i < 5; i++)
    	 	{
    	 	printf("\nEnter Name %d:  ", i+1);
            scanf("%29s", names[i]);
   			 }
    printf("\nYour Entered Names are: \n");
    for (int i = 0; i < 5; i++)
        {
            printf("Name %d: %s\n",i+1, names[i]);
 				}
    return 0;
}
