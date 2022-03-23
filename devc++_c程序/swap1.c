#include<stdio.h>

void swap(int x,int y);

void swap(int x,int y){
	
	if(x>y){
	 int i=x;
	 x=y;
	 y=i;
	}else{
		printf("a=%d,b=%d\n",x,y);
	}

	printf("a=%d,b=%d\n",x,y);
}
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	swap(a,b);
	
	return 0; 
	
}
