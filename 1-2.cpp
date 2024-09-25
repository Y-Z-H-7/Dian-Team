#include<stdio.h>
int main()
{
	int zongjia,toubi,zongtoubi;
	printf("请输入总价:");
	scanf("%d",&zongjia);
a:	printf("请投币:");
	scanf("%d",&toubi);
	if(toubi == 1 or toubi == 2 or toubi == 5){
		zongtoubi += toubi;
		toubi = 0;
		if(zongtoubi < zongjia){
			printf("\n\n请继续投币\n\n");
			goto a; 
			} else {
				zongtoubi -= zongjia;
				printf("\n\n找零为:%d",zongtoubi);
				}
		} else {
			printf("\n\n请正确投币\n\n");
			goto a;
			}

	return 0;	
}
