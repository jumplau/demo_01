#include<stdio.h>
//�洢ָ��ĵ�ַ��ָ����ָ��ָ���ָ��
int main(){
	//���ʾ���������
	int number=5; //����number ���Ҹ�ֵ 
	int *p1=&number; //����p1ָ��number 
	int **p2=&p1;//p2->p1 
	int ***p3=&p2;//p3->p2
	printf("number's address:%p\n",&number);
	printf("number's value:%d\n",number);
	printf("\n"); 
	printf("p1's address:%p\n",&p1);
	printf("p1's �洢��ֵ:%p\n",p1);
	printf("p1 pointing value(*p1):%d\n",*p1);
	printf("\n"); 
	printf("p2's address:%p\n",&p2);
	printf("p2's �洢��ֵ:%p\n",p2);
	printf("p2 pointing value(*p2):%d",**p2);
	
	return 0;
}
 
