#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f1;
	f1=fopen("book.dat","w+");
	fprintf(f1,"CREATE TABLE BOOK (\n");
	fprintf(f1,"ID INT NOT NULL ,\n");
	fprintf(f1,"NAME CHAR(25) ,\n");
	fprintf(f1,"ADDRESS CHAR(25) ,\n");
	fprintf(f1,"PHONE CHAR(25) ,\n");
	fprintf(f1,"EMAIL CHAR(25) ,\n");
	fprintf(f1,"PRIMARY KEY (ID)\n");
	fprintf(f1,");\n");
	fprintf(f1,".tables\n");
	fprintf(f1,".schema BOOK\n");
	fprintf(f1,".quit\n");
	fclose(f1);
	printf("creating tables....\n");
	system("sqlite book.db < book.dat");
	return 0;
}



















