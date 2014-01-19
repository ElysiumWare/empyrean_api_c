#include <stdio.h>
#include <time.h>

#define NULLL 0

int elibStart(void){
	printf("(C)opyright 2013 Evan Vik");
	int Time = clock();
	while(clock() - Time < 2000)
	elibcls();
}

void elibExit(void){
	printf("Exiting...");
	exit(0);
}

int elibcls(void){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int elibPause(void){
	printf("\nPress Any Key To Continue\n");
	char ak00 = '0';
	ak00 = '0';
	while(ak00 == '0'){
		scanf("%c", &ak00);
	}
}

int eliblns(int a){
	if(a == '1'){
		printf("\n");
		return a;
	}
	if(a == '2'){
		printf("\n\n");
		return a;
	}
	if(a == '3'){
		printf("\n\n\n");
		return a;
	}
	if(a == '4'){
		printf("\n\n\n\n");
		return a;
	}
	if(a == '5'){
		printf("\n\n\n\n\n");
		return a;
	}
	if(a == '6'){
		printf("\n\n\n\n\n\n");
		return a;
	}
	if(a == '7'){
		printf("\n\n\n\n\n\n\n");
		return a;
	}
	if(a == '8'){
		printf("\n\n\n\n\n\n\n\n");
		return a;
	}
	if(a == '9'){
		printf("\n\n\n\n\n\n\n\n\n");
		return a;
	}
	if(a == '10'){
		printf("\n\n\n\n\n\n\n\n\n\n");
		return a;
	}
	return -1;
}
