#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct product{
	int id;
	char name[100];
	int qty;
	float price;
	double total;
};

int main(){
	int i,n;
	struct product pro;
	struct product array[100];
	char ch;
	FILE *fp;
	do{
		system("color 2");
		system("cls");
		printf("=========================Menu========================\n");
		printf("|\t \1 A.Write FILE \n");
		printf("|\t \1 B.Read FILE \n");
		printf("|\t \1 C.Search FILE \n");
		printf("|\t \1 D.Search FILE \n");
		printf("|\t \1 E.Insert FILE \n");
		printf("|\t \1 F.Delete FILE \n");
		printf("|\t \1 G.Sort FILE \n");
		printf("|\t \1 O.Exit FILE \n");
		printf("Input Option: ");
		scanf("%c",&ch);
		switch(ch){
			case 'A':
				case 'a':{
					printf("==============Write FILE===============\n");
					fp = fopen("product.bin","wb");
					printf("Input N: ");
					scanf("%d",&n);
					for(i=0;i<n;i++){
						printf("Input Product Code: ");
						scanf("%d",&pro.id);
						printf("Input Product Name: ");
						fflush(stdin);gets(pro.name);
						printf("Input Product Qty: ");
						scanf("%d",&pro.qty);
						printf("Input Product Price: ");
						scanf("%f",&pro.price);
						pro.total = pro.qty * pro.price;
						printf("|\t Total is: %.2lf$\n",pro.total);
						fwrite(&pro,sizeof(struct product),1,fp);
					}
					printf("Input Completed...!");
					fclose(fp);
				}break;
			case 'B':
				case 'b':{
					printf("===============Read FILE==================\n");
					fp=fopen("product.bin","rb");
					printf("%10s %15s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
					while(fread(&pro,sizeof(struct product),1,fp)==1){
						printf("%10d %15s %10d %10.2f$ %10.2lf$\n",pro.id,pro.name,pro.qty,pro.price,pro.total);
					}
					fclose(fp);
				}break;	
			case 'C':
				case 'c':{
					printf("===============Search FILE====================\n");
					int scode; int b=0;
					printf("Input Code to search: ");
					scanf("%d",&scode);
					fp=fopen("product.bin","rb");
					printf("%10s %15s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
					while(fread(&pro,sizeof(struct product),1,fp)==1){
						if(scode == pro.id){
							printf("%10d %15s %10d %10.2f$ %10.2lf$\n",pro.id,pro.name,pro.qty,pro.price,pro.total);
							b=1;
						}
					}
					if(b==0){
						printf("Search Not Found..!");
					}
					fclose(fp);
				}break;	
			case 'D':
				case 'd':{
					struct product pro2;
					printf("===============Update FILE====================\n");	
					FILE *fptemp; int b=0;
					int upcode;
					printf("Input Code For Update: ");
					scanf("%d",&upcode);
					fp=fopen("product.bin","rb");
					fptemp=fopen("temp.bin","wb");
					while(fread(&pro,sizeof(struct product),1,fp)==1){
						if(upcode == pro.id){
								printf("Input Product Code: ");
								scanf("%d",&pro2.id);
								printf("Input Product Name: ");
								fflush(stdin);gets(pro2.name);
								printf("Input Product Qty: ");
								scanf("%d",&pro2.qty);
								printf("Input Product Price: ");
								scanf("%f",&pro2.price);
								pro2.total = pro2.qty * pro2.price;
								printf("|\t Total is: %.2lf$\n",pro2.total);
								fwrite(&pro2,sizeof(struct product),1,fptemp);
								b=1;
								printf("Update Completed..!");
						}else{
							fwrite(&pro,sizeof(struct product),1,fptemp);
						}
					}	
					if(b==0){
						printf("Update Not Completed...!\a\n");
					}
					fclose(fp);
					fclose(fptemp);
					remove("product.bin");
					rename("temp.bin","product.bin");
				}break;
			case 'E':
				case 'e':{
					printf("===============Insert FILE====================\n");	
					struct product pro2;
				
					FILE *fptemp; int b=0;
					int upcode;
					printf("Input Code For Update: ");
					scanf("%d",&upcode);
					fp=fopen("product.bin","rb");
					fptemp=fopen("temp.bin","wb");
					while(fread(&pro,sizeof(struct product),1,fp)==1){
						if(upcode == pro.id){
								printf("Input Product Code: ");
								scanf("%d",&pro2.id);
								printf("Input Product Name: ");
								fflush(stdin);gets(pro2.name);
								printf("Input Product Qty: ");
								scanf("%d",&pro2.qty);
								printf("Input Product Price: ");
								scanf("%f",&pro2.price);
								pro2.total = pro2.qty * pro2.price;
								printf("|\t Total is: %.2lf$\n",pro2.total);
								fwrite(&pro2,sizeof(struct product),1,fptemp);
								fwrite(&pro,sizeof(struct product),1,fptemp);
								b=1;
								printf("Update Completed..!");
						}else{
							fwrite(&pro,sizeof(struct product),1,fptemp);
						}
					}	
					if(b==0){
						printf("Update Not Completed...!\a\n");
					}
					fclose(fp);
					fclose(fptemp);
					remove("product.bin");
					rename("temp.bin","product.bin");	
				}break;	
			case 'F':
				case 'f':{
					printf("===============Delete FILE====================\n");	
					FILE *fptemp;
					int s_code; int b=0;
					printf("Input ID For Delete: ");
					scanf("%d",&s_code);
					fp=fopen("product.bin","rb");
					fptemp=fopen("temp.bin","wb");
					while(fread(&pro,sizeof(struct product),1,fp)==1){
						if(s_code == pro.id){
							printf("Delete Completed..!");
							b=1;
						}else{
							fwrite(&pro,sizeof(struct product),1,fptemp);
						}
					}	
					if(b==0){
						printf("Invalid For Delete...!");
					}
					fclose(fp);
					fclose(fptemp);
					remove("product.bin");
					rename("temp.bin","product.bin");
				}break;	
			case 'G':
				case 'g':{
					printf("===============Sort FILE====================\n");	
						struct product temp;
						int j,k=0;
						struct product sort;
						FILE *fpttemp;
						fp=fopen("product.bin","rb");
						fpttemp = fopen("temp.bin","wb");
						printf("======================Before Sort=======================\n");
						printf("%10s %15s %10s %10s %10s\n","Pro_Code","Pro_Name","Qty","Price","Total");
						while(1==fread(&pro,sizeof(struct product),1,fp)){
							array[k]=pro;
							printf("%10d %15s %10d %10.2f$ %10.2lf$\n",array[k].id,array[k].name,
							array[k].qty,array[k].price,array[k].total);
							k++;
						}
						for(i=0;i<k;i++){
							for(j=i+1;j<k;j++){
								if(array[i].id > array[j].id){
									temp = array[i];
									array[i] = array[j];
									array[j] = temp;
								}
							}
							sort = array[i];
							fwrite(&sort,sizeof(struct product),1,fpttemp);
						}
						printf("\n\n\n\n\nSort Completed....!\a\n");
						fclose(fp);
						fclose(fpttemp);
						remove("product.bin");
						rename("temp.bin","product.bin");
				}break;
			case 'O':
				case 'o':{
					exit(0);
				}break;	
		
		}getch();
	}while(1);
}
