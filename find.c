#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(FILE *f1);


int main(){
	FILE *f1;
	int i=0;
	printf("Press control-c to exit\n");
	do{
		f1=fopen("book.dat","w+");
		fprintf(f1,"select * from BOOK where NAME like ");
		find (f1);
		fprintf(f1,";\n");
		fprintf(f1,".quit\n");
		fclose(f1);
		printf("................................\n");
		system("sqlite book.db < book.dat");
	}while(i==0);
	return 0;
}


void find(FILE *f1){
	char cc[190];
	char *ccc;
	ccc=cc;
	printf("find NAME or part of it :? ");
	ccc=fgets(ccc,181,stdin);
	ccc=strstr(ccc,"\n");
	if(ccc!=NULL) ccc[0]=0;
	ccc=cc;
	printf("\n");
	fprintf(f1,"\"%%%s%%\"",ccc);
	
}

















