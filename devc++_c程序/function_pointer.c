#include<stdio.h>

int max(int,int);//�������� 
int min(int,int);

int main(){
	int (*p)(int,int);
	int a,b,c,n;
	
	printf("������a��b");
	scanf("%d,%d",&a,&b);
	
	printf("��ѡ��1��2��ģʽ:");
	scanf("%d",&n);
	if(n==1) p=max;//ָ�����pָ����max 
	else if(n==2)	p=min;//ָ�����pָ����min
	c=(*p)(a,b); //����p��ָ��ĺ���
	printf("a=%d,b=%d\n",a,b);
	if(n==1) printf("max=%d\n",c);
	else  printf("min=%d\n",c);
	return 0;
} 

int max(int x,int y){
	int z;.
	if(x>y) z=x;else z=y;
	return (z);
}

int min(int x,int y){
	int z;
	if(x<y) z=x;else z=y;
	return (z);
}





