#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct product{
	int id;
	char name[100];
	int qty;
	float price;
	double total;
};
struct product Input(){
	struct product p;
	printf("Input Product Code: ");
	scanf("%d",&p.id);
	printf("Input Product Name: ");
	fflush(stdin);gets(p.name);
	printf("Input Product Qty: ");
	scanf("%d",&p.qty);
	printf("Input Product Price:");
	scanf("%f",&p.price);
	p.total = p.price * p.qty;
	printf("\t Total is: %.2lf$\n",p.total);
	return p;
}
void Output(struct product p){
	printf("%10d %20s %10d %10.2f$ %10.2lf$\n",p.id,p.name,p.qty,p.price,p.total);
}
int main(){
	struct product p[100];
	int i,n,op;
	do{
		system("color 2");
		system("cls");
		printf("\t |1.Input Product Information \3\n");
		printf("\t |2.Output Product Information \3\n");
		printf("\t |3.Search Product Information \3\n");
		printf("\t |4.Update Product Information \3\n");
		printf("\t |5.Delete Product Information \3\n");
		printf("\t |6.Insert Product Information \3\n");
		printf("\t |7.Sort Product Information \3\n");
		printf("\t |0.Exit Application \3\n");
		printf("Please Input Option: ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("______________________Input_____________________________\n");
				printf("Input N: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					p[i] = Input();
				}
				printf("Input Completed\n");
			}break;
			case 2:{
				printf("_____________________Output______________________________\n");
				printf("%10s %20s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
				for(i=0;i<n;i++){
					Output(p[i]);
				}
			}break;
			case 3:{
				int s_id; int b=0;
				printf("Input ID to Search: ");
				scanf("%d",&s_id);
				printf("%10s %20s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
				printf("______________________________________________________________________\n");
				for(i=0;i<n;i++){
					if(s_id == p[i].id){
						Output(p[i]);
						b=1;
					}
				}
				if(b==0){
					printf("Search Not Found...!");
				}
			}break;
			case 4:{
				int s_id; int b=0;
				printf("Input ID to Update: ");
				scanf("%d",&s_id);
				for(i=0;i<n;i++){
					if(s_id == p[i].id){
						p[i] = Input();
						b=1;
						printf("Update Completed...!\n");
					}
				}
				if(b==0){
					printf("Update Not Found...!");
				}
			}break;
			case 5:{
				int s_id,b=0; int j;
				printf("Input ID For Delete: ");
				scanf("%d",&s_id);
				for(i=0;i<n;i++){
					if(s_id == p[i].id){
						for(j=i;j<n;j++){
							p[j] = p[j+1];
						}
						--n;
						b=1;
						printf("Delete Completed\n");
						break;
					}
				}
				if(b==0){
					printf("\a Delete is Failed...!");
				}
			}break;
			case 6:{
				int pos;
				printf("Input Position:");
				scanf("%d",&pos);
				if(pos>n){
					printf("Invalid Position \n");
				}else{
					for(i=n-1;i>=pos;i--){
						p[i+1]=p[i];
					}
					++n;
					p[pos] = Input();
					printf("Insert Completed...!");
				}
			}break;
			case 7:{
				struct product temp;
				int j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(p[i].id > p[j].id){
							temp=p[i];
							p[i]=p[j];
							p[j]=temp;
						}
					}
				}
				printf("\a Sort Completed \n");
			}break;
			case 0:{
				exit(0);
			}break;
		}getch();
	}while(1);
}
//struct Employee{
//	int id;
//	char name[100],sex[20];
//	float salary;
//};
