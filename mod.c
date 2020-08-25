#include <stdio.h>

int mods(int i1,int i2){
	return i1 % i2;
}


int main(){
	int l=0;
	char *c="hello world\n";
	l=mods(20,16);
	printf("%d\n",l);
	return 0;
}
