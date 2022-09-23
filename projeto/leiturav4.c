#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
	FILE *fp;
	int c;
	char string[50] = {'\0'}
	fp = fopen("dig.txt","r");
	if(!fp)
	{
		printf( "Erro na abertura do arquivo");
		exit(-1);
	}
	c = getc(fp);
	while( c != EOF )
	{
		sprintf(string, "Funcionário : %c  ", c);
		//printf("%c", c);
		c = getc(fp);
	}
	fclose(fp);
	return 0;
}
