#include<stdio.h>
#include<stdlib.h>
int main(){
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024))){
		cnt++;
	}
	printf("分配了%dMB的空间\n",cnt);
	//借用了空间，还要还回去  用free 
	return 0;
}
