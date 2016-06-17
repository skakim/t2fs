#include <stdio.h>
#include <string.h>

#include "../src/t2fs.c" //na versao final isso nao pode estar assim

int main(void){
	char id[50];
	
	if (identify2(id,50) == 0){
		printf("%s\n",id);
	}
	
	return 0;
}
