#include<stdio.h>
int main()
{
	int i = 0,b = 0;
	int price,number,a,c;
	char name;
	char name1[6];
	int price1[5];
	int number1[5];
	int check1[5];
	for(i = 0;i < 5;i++){
		name1[i] = ' ';
		price1[i] = 0;
		number1[i] = 0;
		check1[i] = 0;
		}
	name1[5] = '\0';
//摆放货物 
	while(1){
		printf("请输入货物名字 通道号(从1-5) 单价 个数\n");
		if(scanf(" %c %d %d %d",&name,&i,&price,&number) == 4 and name >='A'&& name <='Z' and i >0 && i <=5 and price >0 && price <10 and number >0 && number <=50){
			} else {
				printf("输入错误,请重新输入\n");
a:				while(getchar() != '\n');
				continue;
				}
		a = i - 1;
		for(b = 0;b < 5;b++){
			if(check1[b] == i){
				printf("该通道已经放过物品了");
				goto a;
				}
			}
		name1[a] = name;
		price1[a] = price;
		number1[a] = number;	
		check1[a] = i;
		if(check1[0] != 0 && check1[1] != 0 && check1[2] != 0 && check1[3] != 0 && check1[4] != 0){
			printf("END");
			break;
			}
		}
//选择货物
	int zongjia = 0,toubi,zongtoubi;
	while (1){
b:		while(getchar() != '\n');
		printf("\n输入购买的货物 通道号 购买个数\n");
		scanf(" %c %d %d",&name,&i,&number);
		c = i - 1;
		if(name1[c] == name and number <= number1[c]){
			number1[c] -= number;
			zongjia += price1[c] * number;
			while(getchar() != '\n');
			printf("\n选择完所有货物请输入7(否则请任意输入一个数据按回车继续购买):");
			scanf("%d",&a);
			if(a == 7){
				printf("END");
				goto c;
				} else {
					continue;
					}
			} else {
				printf("\n请核对货物名字和通道号,购买个数小于货物个数\n");
				goto b;
				}
//购买货物
c:		printf("\n总价为:%d.",zongjia);
		printf(" 请投币:");
		scanf("%d",&toubi);
		if(toubi == 1 or toubi == 2 or toubi == 5){
			zongtoubi += toubi;
			toubi = 0;
			if(zongtoubi < zongjia){
				printf("\n请继续投币\n\n");
				goto c; 
				} else {
					zongtoubi -= zongjia;
					printf("\n找零为:%d\n\n",zongtoubi);
					zongtoubi = 0;
					zongjia = 0;
					}
			} else {
				printf("\n\n请正确投币\n\n");
				goto c;
				}
		if(number1[0] > 0 or number1[1] > 0 or number1[2] > 0 or number1[3] > 0 or number1[4] > 0){
			continue;
			} else {
				printf("货物已售完\n");
				printf("END");
				break;
				}
		}

	return 0;
}

