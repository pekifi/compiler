#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int count =0;

bool isKeyword(char s[]){
	char keyword[6][10]={
      "/" , "*" , "-" , "+" , "&" , "%" 
   } ;
   
   int flag=0,i;
   for(i = 0; i < 6; i++) {
      if(strcmp(s,keyword[i])==0) {
         flag=1;
      }
   }
   if(flag==1)
      return flag;
   else
      return !flag;
}



int main()
{
    FILE *fp;
    char ch;
    char str[100];
    int status=0,i=0;
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("Error while opening a file");
        return 0;
    }
    printf("C operators are \n");
    while(fscanf(fp, "%s", str) != EOF)
    isKeyword(str)?count++: count;
    {
   printf("c operators in file = %d",count);

}

return 0;
}
