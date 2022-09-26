#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int count =0;

bool isKeyword(char s[]){
	char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   
   int flag=0,i;
   for(i = 0; i < 32; i++) {
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
    printf("C Keywords are \n");
    while(fscanf(fp, "%s", str) != EOF)
    isKeyword(str)?count++: count;
    {
   printf("c keywords in file = %d",count);

}

return 0;
}
