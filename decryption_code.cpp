#include<stdio.h>
#include<string.h>

#define MAX_array 1024
void dncrypt(char * array, int key)
{
	int i;
	for(i=0;i<strlen(array);i++)
	{
		array[i] = (array[i] - key);
	}
}
int main()
{
	char array[MAX_array];
	int key;
	FILE *ptr;
	
	ptr=fopen("project1.text","r");
	if (ptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
	fgets(array,MAX_array,ptr);
	fclose(ptr);
	
	printf("Enter the key for Decryption: ");
	scanf("%d",&key);
	
	dncrypt(array,key);

    printf("Decrypted message: %s\n", array);

    return 0;
	
}
