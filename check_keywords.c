#include <stdbool.h>
#include <stdio.h>
#include <string.h>
  
bool isKeyword(char* str)
{	
	int i=0;
    char key[32][10] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	for(i = 0; i < 32; i++){

        if(strcmp(str, key[i])==0) 
            return true;
    }
    return false;
}
  
int main()
{	
	 int i,n,flag=0;              
    
    char str[20];
    
    printf("Enter string: ");
    gets(str);

    isKeyword(str) ? printf("YES\n") : printf("NO\n");

   return 0;
}
