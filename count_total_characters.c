#include<stdio.h>
#include<stdlib.h>
 
int main() {
 
  int count[256] = { 0 };
  int k;
  FILE *fp = fopen("abc.txt", "r");
  int c;
  while((c=fgetc(fp))) {
 
	if(c == EOF) break;
	count[c]+=1;
  }
 
  for(k=0; k<256; k++) {
	if(count[k] > 0) {
      printf("char %c: %d times\n", k, count[k]);
	}
  }
 
  fclose(fp);
  return 0;
}
