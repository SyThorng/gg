#include<stdio.h>
#include<conio.h>
#include<string.h>
struct product{
	char pro_code[20];
	char pro_name[20];
	int qty; float price,total;
};
struct product Input(){
	struct product p;
	printf("Enter product Code:");fflush(stdin);gets(p.pro_code);
	printf("Enter product Name:");gets(p.pro_name);
	printf("Enter product Qty:");scanf("%d",&p.qty);
	printf("Enter product Price:");scanf("%f",&p.price);
	p.total = p.price * p.qty; 
	printf("Total: %.2f$\n",p.total);
	return p;
}
void show_sort(product p[],int n){
	int i,j;
	struct product p1;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(p[i].pro_code,p[j].pro_code)>0){
				p1=p[i];
				p[i]=p[j];
				p[j]=p1;
			}
		}
	}
}
void sort_show(product p[],int n){
	int i;
	printf("_______________________________________________________________________\n");
	printf("%20s%20s%10s%10s%10s\n","Pro_Code"," Pro_Name","Qty","Price","Total");
	printf("________________________________________________________________________\n");
	for(i=0;i<n;i++){
		printf("%20s%20s%10d%10.2f$%10.2f$\n",p[i].pro_code,p[i].pro_name,p[i].qty,p[i].price,p[i].total);
	}
}
void search_show(struct product p[],int n){
	char s_code[20],b=0; int i;
	printf("Please Input to Search:");scanf("%s",&s_code);
	printf("%20s%20s%10s%10s%10s\n","Pro_Code"," Pro_Name","Qty","Price","Total");
	printf("___________________________________________________________\n");
	for(i=0;i<n;i++){
		if(strcmp(s_code,p[i].pro_code)==0){
				printf("%20s%20s%10d%10.2f$%10.2f$\n",p[i].pro_code,p[i].pro_name,p[i].qty,p[i].price,p[i].total);
				printf("Data search found\n");
				b=1;
		}
	}
	if(b==0) printf("Data search not found..!");
}
void update_show(struct product p[],int n){
	char s_code[20]; int i,b=0;
	printf("Please Input Code to search for Update:");scanf("%s",&s_code);
	for(i=0;i<n;i++){
		if(strcmp(s_code,p[i].pro_code)==0){
			printf("Enter product Code:");fflush(stdin);gets(p[i].pro_code);
			printf("Enter product Name:");gets(p[i].pro_name);
			printf("Enter product Qty:");scanf("%d",&p[i].qty);
			printf("Enter product Price:");scanf("%f",&p[i].price);
			p[i].total = p[i].price * p[i].qty; 
			printf("Total: %.2f$\n",p[i].total);
			printf("Data Update..\n");
			b=1;
		}
	}
	if(b==0) printf("Data Update");
}
void Delete_show(struct product p[],int n){
	char d_delete[20]; int i,b=0,k;
	printf("Enter search ID for Delete:");scanf("%s",&d_delete);
	for(i=0;i<n;i++){
		if(strcmp(d_delete,p[i].pro_code)==0){
			for(k=i;k<n-1;k++){
				p[k]=p[k+1];
			}
			n--;
			b=1;
			break;
		}
	}
	if(b==0){
		printf("Data Failed..!");
	}
}
void Insert_show(struct product p[],int n){
	int pos,i;
	printf("Please Input Position:");scanf("%s",&pos);
	if(pos<n){
		printf("Insert New position....!\n");
	}else {
		printf("Insert new Value:");
		for(i=n-1;i>=pos;i--){
			p[i+1]=p[i];
		}
		printf("Enter product Code:");fflush(stdin);gets(p[i].pro_code);
		printf("Enter product Name:");gets(p[i].pro_name);
		printf("Enter product Qty:");scanf("%d",&p[i].qty);
		printf("Enter product Price:");scanf("%f",&p[i].price);
		p[i].total = p[i].price * p[i].qty; 
		printf("Total: %.2f$\n",p[i].total);
		++n;
		printf("<<<<<< Data Insert  >>>>>>\n");
	}
}
int main(){
	int n,j,i;
	product p[20];
	printf("Please Input N:");scanf("%d",&n);
	for(i=0;i<n;i++){
		p[i]=Input();

	}
	show_sort(p,n);
	sort_show(p,n);
//	search_show(p,n);
//	update_show(p,n);
//	sort_show(p,n);
	Delete_show(p,n);
	sort_show(p,n);
	//Insert_show(p,n);
//	char s_code[20],b=0;
//	printf("Please Input to Search:");scanf("%s",&s_code);
//	printf("%20s%20s%10s%10s%10s\n","Pro_Code"," Pro_Name","Qty","Price","Total");
//	printf("___________________________________________________________\n");
//	for(i=0;i<n;i++){
//		if(strcmp(s_code,p[i].pro_code)==0){
//				printf("%20s%20s%10d%10.2f$%10.2f$\n",p[i].pro_code,p[i].pro_name,p[i].qty,p[i].price,p[i].total);
//				printf("Data search found");
//				b=1;
//		}
//	}
//	if(b==0) printf("Data search not found..!");
//	char s_code[20]; int b=0;
//	printf("Please Input Code to search for Delete:");scanf("%s",&s_code);
//	for(i=0;i<n;i++){
//		if(strcmp(s_code,p[i].pro_code)==0){
//			printf("Enter product Code:");fflush(stdin);gets(p[i].pro_code);
//			printf("Enter product Name:");gets(p[i].pro_name);
//			printf("Enter product Qty:");scanf("%d",&p[i].qty);
//			printf("Enter product Price:");scanf("%f",&p[i].price);
//			p[i].total = p[i].price * p[i].qty; 
//			printf("Total: %.2f$\n",p[i].total);
//			printf("Data Update..");
//			b=1;
//		}
//	}
//	if(b==0) printf("Data Update");
//	char d_delete[20]; int b=0,k;
//	printf("Enter search ID for Delete:");scanf("%s",&d_delete);
//	for(i=0;i<n;i++){
//		if(strcmp(d_delete,p[i].pro_code)==0){
//			for(k=i;k<n-1;k++){
//				p[k]=p[k+1];
//			}
//			--n;
//			b=1;
//			break;
//		}
//	}
//	if(b==0){
//		printf("Data Failed..!");
//	}
//	sort_show(p,n);
//	int pos;
//	printf("Please Input Position:");scanf("%s",&pos);
//	if(pos<n){
//		printf("Insert New position....!\n");
//	}else {
//		printf("Insert new Value:");
//		for(i=n-1;i>=pos;i--){
//			p[i+1]=p[i];
//		}
//		printf("Enter product Code:");fflush(stdin);gets(p[i].pro_code);
//		printf("Enter product Name:");gets(p[i].pro_name);
//		printf("Enter product Qty:");scanf("%d",&p[i].qty);
//		printf("Enter product Price:");scanf("%f",&p[i].price);
//		p[i].total = p[i].price * p[i].qty; 
//		printf("Total: %.2f$\n",p[i].total);
//		++n;
//		printf("<<<<<< Data Insert  >>>>>>\n");
//	}
	getch();
}
