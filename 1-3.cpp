#include<stdio.h>
int main()
{
	char name;
	char name1;
	int tongdaohao,geshu,danjia,zongjia = 0;
	int tongdaohao1,geshu1;
	int a,b = 0;
	int toubi,zongtoubi;
	printf("请摆放货物:\n货物名字 通道号 单价 个数\n");
// 一.摆放货物
	while (1) {
		scanf(" %c %d %d %d",&name,&tongdaohao,&danjia,&geshu);
		if (name >='A'&& name <='Z' and tongdaohao >0 && tongdaohao <=5 and danjia >0 && danjia <10 and geshu >0 && geshu <=50){ 	
			printf("\n通道号: 货物名字及个数 单价\n");
			break;
			} else {
				while((a = getchar()) != '\n');
				printf("\n请输入正确的货物名字以及正确的通道号,单价,个数\n");
				printf("\n货物名字:一个大写字母\n通道号:[1,5]整数\n单价:[1,9]整数\n个数:[1,50]整数\n");	
				}
		}
	printf("%d: ",tongdaohao);
	for (b = 0;b < geshu;b++){
		printf("%c",name);
		}
	printf(" %d\n",danjia);
// 二.选择货物
	while (1){
b:		while((a = getchar()) != '\n');
		printf("输入购买的货物 通道号 购买个数\n");
		scanf(" %c %d %d",&name1,&tongdaohao1,&geshu1);
		if(name1 == name and tongdaohao1 == tongdaohao and geshu1 <= geshu){
			geshu -= geshu1;
			zongjia += danjia * geshu1;
			} else {
				printf("\n请核对货物名字和通道号,购买个数小于货物个数\n");
				goto b;
				}
		printf("\n总价为:%d.",zongjia);
a:		printf(" 请投币:");
		scanf("%d",&toubi);
		if(toubi == 1 or toubi == 2 or toubi == 5){
			zongtoubi += toubi;
			toubi = 0;
			if(zongtoubi < zongjia){
				printf("\n请继续投币\n\n");
				goto a; 
				} else {
					zongtoubi -= zongjia;
					printf("\n找零为:%d\n\n",zongtoubi);
					zongtoubi = 0;
					zongjia = 0;
					}
			} else {
				printf("\n\n请正确投币\n\n");
				goto a;
				}
		if(geshu > 0){
			continue;
			} else {
				printf("货物已售完");
				break;
				}
		}
				
	return 0;
}
