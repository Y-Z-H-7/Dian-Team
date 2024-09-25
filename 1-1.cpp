#include<stdio.h>
int main()
{
	char name;
	int tongdaohao,danjia,geshu,a = 0,c;
	int cishu = 0;
	printf("\n货物名字:一个大写字母\n通道号:[1,5]整数\n单价:[1,9]整数\n个数:[1,50]整数\n");
	printf("\n请摆放货物:\n货物名字 通道号 单价 个数\n");

	//printf("%c %d %d %d",name,tongdaohao,danjia,geshu);
	while(1){
		scanf(" %c %d %d %d",&name,&tongdaohao,&danjia,&geshu);
		if (name >='A'&& name <='Z' and tongdaohao >0 && tongdaohao <=5 and danjia >0 && danjia <10 and geshu >0 && geshu <=50){ 	
    		printf("\n通道号: 货物名字及个数 单价\n");
			break;
			} else {
		 		while((c = getchar()) != '\n');
				printf("\n\n请输入正确的货物名字以及正确的通道号,单价,个数\n\n");	 		
				}
		}
	printf("%d: ",tongdaohao);
    for (cishu = 0;cishu < geshu;cishu++){
    	printf("%c",name);
		}
	printf(" %d",danjia);

	return 0;
}
