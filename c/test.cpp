#include<stdio.h>
#include<stdlib.h>

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
		try{
			scanf("%d", &choose);
			if(choose >= numberOfChoose || choose <= 0){
				check = 0;
			}
		}catch(int choose){
			printf("\nBan da nhap sai, xin nhap lai: ");
		}
	}while(check = 1);
	return choose;
}
int main(){
	int c = 10;
	while(c > 1){
	printf("moi ban nhap lua chon cua minh: ");
//	int choose = checkChoose(10);
	int choose;
	scanf("%d", &choose);
	}
}

