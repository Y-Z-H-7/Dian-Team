#include<stdio.h>
int main()
{
	int zongjia,toubi,zongtoubi;
	printf("�������ܼ�:");
	scanf("%d",&zongjia);
a:	printf("��Ͷ��:");
	scanf("%d",&toubi);
	if(toubi == 1 or toubi == 2 or toubi == 5){
		zongtoubi += toubi;
		toubi = 0;
		if(zongtoubi < zongjia){
			printf("\n\n�����Ͷ��\n\n");
			goto a; 
			} else {
				zongtoubi -= zongjia;
				printf("\n\n����Ϊ:%d",zongtoubi);
				}
		} else {
			printf("\n\n����ȷͶ��\n\n");
			goto a;
			}

	return 0;	
}
