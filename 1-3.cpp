#include<stdio.h>
int main()
{
	char name;
	char name1;
	int tongdaohao,geshu,danjia,zongjia = 0;
	int tongdaohao1,geshu1;
	int a,b = 0;
	int toubi,zongtoubi;
	printf("��ڷŻ���:\n�������� ͨ���� ���� ����\n");
// һ.�ڷŻ���
	while (1) {
		scanf(" %c %d %d %d",&name,&tongdaohao,&danjia,&geshu);
		if (name >='A'&& name <='Z' and tongdaohao >0 && tongdaohao <=5 and danjia >0 && danjia <10 and geshu >0 && geshu <=50){ 	
			printf("\nͨ����: �������ּ����� ����\n");
			break;
			} else {
				while((a = getchar()) != '\n');
				printf("\n��������ȷ�Ļ��������Լ���ȷ��ͨ����,����,����\n");
				printf("\n��������:һ����д��ĸ\nͨ����:[1,5]����\n����:[1,9]����\n����:[1,50]����\n");	
				}
		}
	printf("%d: ",tongdaohao);
	for (b = 0;b < geshu;b++){
		printf("%c",name);
		}
	printf(" %d\n",danjia);
// ��.ѡ�����
	while (1){
b:		while((a = getchar()) != '\n');
		printf("���빺��Ļ��� ͨ���� �������\n");
		scanf(" %c %d %d",&name1,&tongdaohao1,&geshu1);
		if(name1 == name and tongdaohao1 == tongdaohao and geshu1 <= geshu){
			geshu -= geshu1;
			zongjia += danjia * geshu1;
			} else {
				printf("\n��˶Ի������ֺ�ͨ����,�������С�ڻ������\n");
				goto b;
				}
		printf("\n�ܼ�Ϊ:%d.",zongjia);
a:		printf(" ��Ͷ��:");
		scanf("%d",&toubi);
		if(toubi == 1 or toubi == 2 or toubi == 5){
			zongtoubi += toubi;
			toubi = 0;
			if(zongtoubi < zongjia){
				printf("\n�����Ͷ��\n\n");
				goto a; 
				} else {
					zongtoubi -= zongjia;
					printf("\n����Ϊ:%d\n\n",zongtoubi);
					zongtoubi = 0;
					zongjia = 0;
					}
			} else {
				printf("\n\n����ȷͶ��\n\n");
				goto a;
				}
		if(geshu > 0){
			continue;
			} else {
				printf("����������");
				break;
				}
		}
				
	return 0;
}
