#include<stdio.h>
#include<stdlib.h.h>

int choose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
		try{
			scanf("%d", &choose);
			if(choose >= numberOfChoose || choose <= 0){
				check = 0;
			}
		}catch(int e){
			printf("\nBan da nhap sai, xin nhap lai: ");
		}
	}while(check = 1);
	return choose;
}
