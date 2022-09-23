#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const*argv[])
{
	FILE *fp;
	char c;
	
	fp=fopen("dig.txt","r");
	if(!fp)
	{
		printf("Deu Ruim");
		exit(-1);
	}
	c=getc(fp);
	while(c!=EOF)
	{
		printf("%c", c);
		c=getc(fp);
	}
	fclose(fp);
	return 0;		
	
	
}
