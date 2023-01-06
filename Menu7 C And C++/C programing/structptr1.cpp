#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
typedef struct Product{
	char pro_id[20],name[20];
	int qty;float price;
	double total; 
}P;
int main(){
	int op,n,i;
	P *p;
	do{
		system("cls");
		system("color 3");
		printf("\t |1.Input Data \n");
		printf("\t |2.Output Data \n");
		printf("\t |3.Search Data \n");
		printf("\t |4.Update Data \n");
		printf("\t |5.Delete Data \n");
		printf("\t |6.Insert Data \n");
		printf("\t |7.Sort Data \n");
		printf("\t |0.Exit Data \n");
		printf("Please Choose(0-7) option:");scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Please Input N:");scanf("%d",&n);
				p=(P*)calloc(n,sizeof(P));
				for(i=0;i<n;i++){
					printf("Enter Code:");fflush(stdin);gets((p+i)->pro_id);
					printf("Enter Name:");gets((p+i)->name);
					printf("Enter Qty:");scanf("%d",&(p+i)->qty);
					printf("Enter price:");scanf("%f",&(p+i)->price);
					(p+i)->total = (p+i)->qty * (p+i)->price;
					printf("Total Payment = %.2lf$\n",(p+i)->total);
				}
			}break;
			case 2:{
				printf("===================Output====================\n");
				printf("%-10s%-20s%-10s%-10s%-10s\n","Pro_Code","Name","Qty","Price","Total");
				printf("_______________________________________________________________\n");
				for(i=0;i<n;i++){
					printf("%-10s%-20s%-10d%-10.2f$%-10.2lf\n",(p+i)->pro_id,(p+i)->name,(p+i)->qty,(p+i)->price,(p+i)->total);
				}
			}break;
			case 3:{
				char s_id[20]; int b=0;
				printf("---------------------------------------Search----------------------------------------\n");
				printf("Please Input ID to search:");scanf("%s",&s_id);
				printf("%-10s%-20s%-10s%-10s%-10s\n","Pro_Code","Name","Qty","Price","Total");
				printf("_______________________________________________________________\n");
				for(i=0;i<n;i++){
					if(strcmp(s_id,(p+i)->pro_id)==0){
						printf("%-10s%-20s%-10d%-10.2f$%-10.2lf\n",(p+i)->pro_id,(p+i)->name,(p+i)->qty,(p+i)->price,(p+i)->total);
						b=1;
						//printf("Data serch found.....!");
					}
				}
				if(b==0){
					printf("Data Search not found..!");
				}
			}break;
			case 4:{
				char s_id[20]; int b=0;
				printf("--------------------------------------Update-------------------------------------------\n");
				printf("Please Input search ID for Update:");scanf("%s",&s_id);
				for(i=0;i<n;i++){
					if(strcmp(s_id,(p+i)->pro_id)==0){
						printf("Enter Code:");fflush(stdin);gets((p+i)->pro_id);
						printf("Enter Name:");gets((p+i)->name);
						printf("Enter Qty:");scanf("%d",&(p+i)->qty);
						printf("Enter price:");scanf("%f",&(p+i)->price);
						(p+i)->total = (p+i)->qty * (p+i)->price;
						printf("Total Payment = %.2lf$\n",(p+i)->total);
						b=1;
						//printf("Update Success..!");
					}
				}
				if(b==0){
					printf("Data Not Update..!");
				}
			}break;
			case 5:{
				char d_delete[20],b=0;
				printf("---------------------------------------Delete--------------------------------------------\n");
				printf("Please Input search ID for Delete:");scanf("%s",&d_delete);
				for(i=0;i<n;i++){
					if(strcmp(d_delete,(p+i)->pro_id)==0){
						for(int j=i;j<n-1;j++){
							*(p+j)=*(p+(j+1));
						}
						n--;
						b=1;
						printf("Data Deleted..!");
						break;						
					}
				}
				if(b==0){
					printf("Data Not delete..!");
				}
			}break;
			case 6:{
				int pos;
				printf("Please Input Position:");scanf("%d",&pos);
				if(pos<n){
					printf("Insert new Position..\n");
				}else {
					printf(" Insert New Value\n");
					for(i=0;i<n;i++){
						*(p+(i+1))=*(p+i);
					}
						printf("Enter Code:");fflush(stdin);gets((p+i)->pro_id);
						printf("Enter Name:");gets((p+i)->name);
						printf("Enter Qty:");scanf("%d",&(p+i)->qty);
						printf("Enter price:");scanf("%f",&(p+i)->price);
						(p+i)->total = (p+i)->qty * (p+i)->price;
						printf("Total Payment = %.2lf$\n",(p+i)->total);
						++n;
						printf(">>>>>>>>>>>>> Insert <<<<<<<<<<<<<<<<<<<<<\n");
				}
			}break;
			case 7:{
				 P temp;
				for(i=0;i<n;i++){
					for(int k=i+1;k<n;k++){
						if(strcmp((p+i)->pro_id,(p+k)->pro_id)>0){
							temp=*(p+i);
							*(p+i)=*(p+k);
							*(p+k)=temp;
							
						}
					}
				}
			}break;
		}
		getch();
	}while(op!=0);
}
