#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main(){
	int code[10];
	char name[10][100];
	int qty[10];
	float price[10];
	double total[10]; double amount=0;
	int i,op,n;
	do{
		system("color 2");
		system("cls");
		printf("|\t \4 1.Input Product \1\n");
		printf("|\t \4 2.Output Product \1\n");
		printf("|\t \4 3.Search Product \1\n");
		printf("|\t \4 4.Update Product \1\n");
		printf("|\t \4 5.Delete Product \1\n");
		printf("|\t \4 6.Insert Product \1\n");
		printf("|\t \4 7.Sort Product \1\n");
		printf("|\t \4 0.Exit program \1\n");
		printf("Please Input Option: ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("==================Input Product===============================\n");
				printf("Input N: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Input Product Code: ");
					scanf("%d",&code[i]);
					printf("Input Product Name: ");
					fflush(stdin);gets(name[i]);
					printf("Input Product Qty: ");
					scanf("%d",&qty[i]);
					printf("Input Product Price: ");
					scanf("%f",&price[i]);
					total[i] = price[i] * qty[i];
					printf("|\t Total is : %.2lf$\n",total[i]);
					amount = amount + total[i];
				}
				printf("Input Comleted \n");
			}break;
			case 2:{
				printf("==================Output Product===============================\n"); 
				printf("%10s %20s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
				printf("__________________________________________________________________\n");
				for(i=0;i<n;i++){
					printf("%10d %20s %10d %10.2f$ %10.2lf$\n",code[i],name[i],qty[i],price[i],total[i]);
				}
				printf("Amount is: %.2lf$\n",amount);
			}break;
			case 3:{
				int s_code;  int b=0;
				printf("================================Search Product================\n");
				printf("Input Code to search: ");
				scanf("%d",&s_code);
				printf("%10s %20s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
				printf("__________________________________________________________________\n");
				for(i=0;i<n;i++){
					if(s_code==code[i]){
						printf("%10d %20s %10d %10.2f$ %10.2lf$\n",code[i],name[i],qty[i],price[i],total[i]);
						b=1;
						printf("Search Completed \n");
					}
				}
				if(b==0){
					printf("\a Invalid search \n");
				}
			}break;
			case 4:{
				int s_code;  int b=0;
				printf("========================Update Product======================\n");
			
				printf("Input Code to Update: ");
				scanf("%d",&s_code);
				for(i=0;i<n;i++){
					if(s_code==code[i]){
				     	printf("Input Product Code: ");
						scanf("%d",&code[i]);
						printf("Input Product Name: ");
						fflush(stdin);gets(name[i]);
						printf("Input Product Qty: ");
						scanf("%d",&qty[i]);
						printf("Input Product Price: ");
						scanf("%f",&price[i]);
						total[i] = price[i] * qty[i];
						printf("|\t Total is : %.2lf$\n",total[i]);
						b=1;
						printf("Update Completed \n");
					}
				}
				if(b==0){
					printf("\a Invalid Update \n");
				}
			}break;
			case 5:{
				char s_name[100]; int j; int b=0;
				printf("==========================Delete Product======================\n");
				
				printf("Input Search to  Delete: ");
				scanf("%s",&s_name);                   
				for(i=0;i<n;i++){
					if(strcmp(s_name,name[i])==0){
						for(j=i;j<n;j++){
							code[j]=code[j+1];
							
							strcpy(name[j],name[j+1]);
							
							qty[j] = qty[j+1];
							
							price[j] = price[j+1];
							
							total[j] = total [j+1]; 
						}
						--n;
						b=1;
						printf("Deleted Completed \n");
						break;
					}
				}
				if(b==0){
					printf("\a Delete is Failed \n");
				}
			}break;
			case 6:{
				int pos;
				printf("===========================Insert Product=====================\n");
				printf("Input Position: ");
				scanf("%d",&pos);
				if(pos>n){
					printf("\a Invalid Password \n");
				}else {
					for(i=n-1;i>=pos;i--){
//						arr[i+1]=arr[i];
						code[i+1]=code[i];
						strcpy(name[i+1],name[i]);
						qty[i+1]=qty[i];
						price[i+1]=price[i];
						total[i+1]=total[i];
					}
					++n;
					printf("Input Product Code: ");
					scanf("%d",&code[i]);
					printf("Input Product Name: ");
					fflush(stdin);gets(name[i]);
					printf("Input Product Qty: ");
					scanf("%d",&qty[i]);
					printf("Input Product Price: ");
					scanf("%f",&price[i]);
					total[i] = price[i] * qty[i];
					printf("|\t Total is : %.2lf$\n",total[i]);
					printf("Insert Completed \n");
				}
			}break;
			 case 7:{
			 	int j;
			 	int temp; char tname[100]; float tprice;  double ttotal;
				printf("============================Sort Product======================\n");
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(code[i]>code[j]){
//							temp=arr[i];
//							arr[i]=arr[j];
//							arr[j]=temp;
							temp = code[i];
							code[i] = code[j];
							code[j]=temp;
							
							strcpy(tname,name[i]); 
							strcpy(name[i],name[j]);
							strcpy(name[j],tname);
							
							temp = qty[i];
							qty[i] = qty[j];
							qty[j] = temp;
							
							tprice = price[i];
							price[i] = price[j];
							price[j] = tprice;
							
							ttotal = total[i];
							total[i] = total[j];
							total[j] = ttotal; 
						}
					}
				}
				printf("\a Sort Completed \n");
			 }break;
			
		}getch();
	}while(op!=0);
}
