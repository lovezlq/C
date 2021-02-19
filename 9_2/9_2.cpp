#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *in, *out;
	char ch, infile[10], outfile[10];

	printf("Enter the infile name:\n");

	scanf_s("%s", outfile);
	if ((in=fopen(infile,"r"))==NULL)
	{
		printf("connot open infile\n");
		exit(0);
	}
	if ((out=fopen(outfile,"w"))==NULL)
	{
		printf("con not open outfile \n");
		exit(0);
		
	}
	while (!feof(in))
	{
		fputc(fgetc(in), out);
		fclose(in);
		fclose(out);
		
	}
}
