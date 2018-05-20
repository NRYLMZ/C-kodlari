#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
  FILE *textfile;
  char line[1001],word[11];
  char *p;
  printf("word:");
  gets(word);
  textfile=fopen("output.txt","r");
  if(!textfile)
  { printf("cannot open the file \n:");
  exit(1);
}
while(!feof(textfile))
{fscanf(textfile,"%s",line);
if(!line)
 p=strstr(line,word);
 if(p!=NULL)
 {printf("%s\n",line);}}
  system("PAUSE");	
  return 0;
}
