#include<stdio.h>

int main(){
	
//	int a,b,c;
//	scanf("a=%d,b=%d,c=%d",&a,&b,&c);//��ʽ���ƺ����Ǳ�����ַ  ���Ǳ�����
//	printf("a=%d,b=%d,c=%d",a,b,c); //Ҫ��scanf��������� �����ַ�������Ҫ����ͬ��ֵ   Ӧ������a=1,b=5,c=5 
	
	
	//��putchar������ַ�   д 
	
	char i='B',j='o',k='y';
	putchar(i);
	putchar(j);
	putchar(k);
	putchar('\n');
	
	
	//��getchar �������ַ�   �� 
	char n,p,q;
	n=getchar(); p=getchar();q=getchar(); 
	  putchar(n);  putchar(p); putchar(q);
	  
	//��printf����������ո�������ַ�
	printf("%c",getchar());  
	return 0;
}

