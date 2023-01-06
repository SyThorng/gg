#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char product[20][10][20];
	int i,n,j,op;
do{ //system("color: [green]");
	printf("====1.Input  2.Output  3.Sort   4.Search  5.Update  6.Delete  7.Exit====\n");
	printf("Please choose One option(1-7) : ");scanf("%d",&op);
	printf("\n");
	switch(op){
		case 1:{
			printf("=======Input Product Information=========\n");
			printf("Enter Number of product: ");scanf("%d",&n);
			printf("\n");
			for(i=0;i<n;i++){	
				printf("Enter Product Name : ");fflush(stdin);gets(product[i][0]);
				printf("Enter Product Id   : ");gets(product[i][1]);
				printf("Enter Product Qty  : ");gets(product[i][2]);
				printf("Enter Product Price: ");gets(product[i][3]);
				printf("\n");
				}
				printf("\n");
			}break;
		case 2:{
			printf("==========Output Product Information=============\n");
			printf("%20s%20s%20s%20s\n","Pro_Name","Pro_ID","Pro_Qty","Pro_Price");
			for(i=0;i<n;i++){
				printf("%20s%20s%20s%20s\n",product[i][0] ,product[i][1] ,product[i][2] ,product[i][3]);
				}			
				printf("\n");
			}break;
	
		case 3:{
			char x[20];
			printf("=======Sort Product Information=========\n");
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(strcmp(product[i][0],product[j][0])<0){
						
						strcpy(x,product[i][0]);
						strcpy(product[i][0],product[j][0]);
						strcpy(product[j][0],x);
						
						strcpy(x,product[i][1]);
						strcpy(product[i][1],product[j][1]);
						strcpy(product[j][1],x);
						
						strcpy(x,product[i][2]);
						strcpy(product[i][2],product[j][2]);
						strcpy(product[j][2],x);
						
						strcpy(x,product[i][3]);
						strcpy(product[i][3],product[j][3]);
						strcpy(product[j][3],x);						
					}
					break;
				}
			}
			printf("%20s%20s%20s%20s\n","Pro_Name","Pro_ID","Pro_Qty","Pro_Price");
			for(i=0;i<n;i++){
				printf("%20s%20s%20s%20s$\n",product[i][0],product[i][1],product[i][2],product[i][3]);
				}
				printf("\n");
			}break;
		case 4:{
			char S_id[10];
			int M=0;
			printf("===============Search Product Information===============\n");
			printf("Enter Id for search information : ");gets(S_id);
			printf("\n");
			printf("%20s%20s%20s%20s\n","Pro_Name","Pro_ID","Pro_Qty","Pro_Price");
			if(strcmp(product[i][0],S_id)==0){M=1;
				for(i=0;i<n;i++){
					printf("%20s%20s%20s%20s$\n",product[i][0],product[i][1],product[i][2],product[i][3]);
					}
				}
			if(M==0){
					printf("Update is not completed.\n");
				}
			else {
					printf("Update is completed.\n");
				}							
			}break;
		case 5:{ 
			char U_id[10];
			int N=0;
			printf("===================Update Product Information==============\n");
			printf("Enter Id for Update information : ");gets(U_id);
			if(strcmp(product[i][0],U_id)==0){N=1;
					
					printf("Enter Product Name : ");fflush(stdin);gets(product[i][0]);
					printf("Enter Product Id   : ");gets(product[i][1]);
					printf("Enter Product Qty  : ");gets(product[i][2]);
					printf("Enter Product Price: ");gets(product[i][3]);					
					printf("\n");					
				}
				if(N==0){
					printf("Update is not completed.\n");
				}
				else {
					printf("Update is completed.\n");
				}				
			}break;
		case 6:{
			char s_id[10];
			int B=0,j;
			printf("===============Delete Product Information===============\n");
			printf("Enter Id for search information : ");gets(s_id);
			for(i=0;i<n;i++){
				if(strcmp(s_id,product[i][0])==0){B=1;
					for(j=i;j<n;j++){
						strcmp(product[j][0],product[j+1][0]);
						strcmp(product[j][1],product[j+1][1]);
						strcmp(product[j][2],product[j+1][2]);
         				}
         				n=n-1;
					}
				}
			if(B==0){
				printf("Delete is not completed.\n");
			}
			else {
				printf("Delete is completed.\n");
			}
			}break;
		case 7:{
			return 0;
			}break;
	}
}while(getch()==13);
return 0;
}
