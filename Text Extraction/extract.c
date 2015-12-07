#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   int flag=1;
   char ch, file_name[25], line[100];
   FILE *fp;
 
   fp = fopen(argv[1],"r");
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
    
   while( (ch = fgetc(fp)) != EOF ) { 
	if(ch == '\n') {
		printf(" ");
		flag=0;
	}
	else if(ch == '.') {
		printf(".");
		printf("\n");
		flag=1;
	}
	else if(flag == 1)
		putchar(ch);
	flag=1;
   }

   fclose(fp);
   return 0;
}
