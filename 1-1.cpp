#include<stdio.h>
int main()
{
	char name;
	int tongdaohao,danjia,geshu,a = 0,c;
	int cishu = 0;
	printf("\n��������:һ����д��ĸ\nͨ����:[1,5]����\n����:[1,9]����\n����:[1,50]����\n");
	printf("\n��ڷŻ���:\n�������� ͨ���� ���� ����\n");

	//printf("%c %d %d %d",name,tongdaohao,danjia,geshu);
	while(1){
		scanf(" %c %d %d %d",&name,&tongdaohao,&danjia,&geshu);
		if (name >='A'&& name <='Z' and tongdaohao >0 && tongdaohao <=5 and danjia >0 && danjia <10 and geshu >0 && geshu <=50){ 	
    		printf("\nͨ����: �������ּ����� ����\n");
			break;
			} else {
		 		while((c = getchar()) != '\n');
				printf("\n\n��������ȷ�Ļ��������Լ���ȷ��ͨ����,����,����\n\n");	 		
				}
		}
	printf("%d: ",tongdaohao);
    for (cishu = 0;cishu < geshu;cishu++){
    	printf("%c",name);
		}
	printf(" %d",danjia);

	return 0;
}
