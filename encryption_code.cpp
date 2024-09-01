#include<stdio.h>
#include<string.h>

#define MAX_array 1024
void encrypt(char * array, int key)
{
	int i;
	for(i=0;i<strlen(array);i++)
	{
		array[i] = (array[i] + key);
	}
}
int main()
{
	char array[MAX_array];
	int key;
	FILE *ptr;
	
	printf("Enter the data for encryption : ");
	fgets(array,MAX_array,stdin);
	
	printf("Enter the key : ");
	scanf("%d",&key);
	
	encrypt(array,key);
	
	ptr=fopen("project1.text","w");
	if (ptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(ptr, "%s", array);
    fclose(ptr);

    printf("\n		Message encrypted and saved to 'project1.txt'\n");
    printf("\n		Please remember key value ,otherwise you could not decrypt the data !!");

    return 0;
	
}
