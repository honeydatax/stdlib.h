#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(FILE *f1,char *c,int i,int ii);


int main(){
	FILE *f1;
	int i=0;
	

		f1=fopen("book.dat","w+");
		fprintf(f1,"select * from BOOK order by NAME\n");
		fprintf(f1,";\n");
		fprintf(f1,".quit\n");
		fclose(f1);
		printf("................................\n");
		system("sqlite book.db < book.dat");

	return 0;
}


void add(FILE *f1,char *c,int i,int ii){
	char cc[190];
	char *ccc;
	ccc=cc;
	printf("%s :? ",c);
	ccc=fgets(ccc,181,stdin);
	ccc=strstr(ccc,"\n");
	if(ccc!=NULL) ccc[0]=0;
	ccc=cc;
	printf("\n");
	if (i==0) fprintf(f1," %s \n",ccc);
	if (i!=0) fprintf(f1," \"%s\" \n",ccc);
	if (ii==0) fprintf(f1,", \n");
}

















