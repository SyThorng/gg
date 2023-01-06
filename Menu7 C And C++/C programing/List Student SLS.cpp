#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define tab printf("\t\t\t")
struct Student{
	char name[20],sex[20];
	float M,P,C,E,avg;
}stu[50];
struct Student Input(){
	Student stu;
	tab; printf("Enter Student Name   : ");fflush(stdin);gets(stu.name);
	tab; printf("Enter Student Gender : ");fflush(stdin);gets(stu.sex);
	tab; printf("Enter Math Score     : ");scanf("%f",&stu.M);
	tab; printf("Enter Physic Score   : ");scanf("%f",&stu.P);
	tab; printf("Enter Chimistry Score: ");scanf("%f",&stu.C);
	tab; printf("Enter English Score  : ");scanf("%f",&stu.E);
	stu.avg=(stu.M+stu.P+stu.C+stu.E)/4;
	printf("\n");
	return stu;
}
void Output(struct Student stu[],int n){
	int i;
	tab; printf("%s%10s%10s%10s%10s%10s%10s\n","Name","Gender","Math","Physic","Chimistry","English","Average");
	for(i=0;i<n;i++){
	tab;	printf("%s%10s%10.2f%10.2f%10.2f%10.2f%10.2f\n",stu[i].name,stu[i].sex,stu[i].M,stu[i].P,stu[i].C,stu[i].E,stu[i].avg);
	}

}
void SortAvg(struct Student stu[],int n){
	struct Student swap;
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(stu[i].avg>stu[j].avg){
				swap=stu[i];
				stu[i]=stu[j];
				stu[j]=swap;
			}		
		}	
	}
	tab; printf("%s%10s%10s%10s%10s%10s%10s\n","Name","Gender","Math","Physic","Chimistry","English","Average");
	for(i=0;i<n;i++){
	tab;	printf("%s%10s%10.2f%10.2f%10.2f%10.2f%10.2f\n",stu[i].name,stu[i].sex,stu[i].M,stu[i].P,stu[i].C,stu[i].E,stu[i].avg);
	}
}
void SortName(struct Student stu[],int n){
	int i,j;
	struct Student swap;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(stu[i].name,stu[j].name)>0){
				swap=stu[i];
				stu[i]=stu[j];
				stu[j]=swap;
			}		
		}	
	}
	tab; printf("%s%10s%10s%10s%10s%10s%10s\n","Name","Gender","Math","Physic","Chimistry","English","Average");
	for(i=0;i<n;i++){
	tab;	printf("%s%10s%10.2f%10.2f%10.2f%10.2f%10.2f\n",stu[i].name,stu[i].sex,stu[i].M,stu[i].P,stu[i].C,stu[i].E,stu[i].avg);
	}
}
void Stu_Pass(Student stu[],int n){	
	int i;
tab; printf("%s%10s%s10s%10s%10s%10s%10s\n","Name","Gender","Math","Physic","Chimistry","English","Average");
	for(i=0;i<n;i++)
	{
		if(stu[i].avg>=50 && stu[i].avg<=100){
	tab;	printf("%s%10s%10.2f%10.2f%10.2f%10.2f%10.2f\n",stu[i].name,stu[i].sex,stu[i].M,stu[i].P,stu[i].C,stu[i].E,stu[i].avg);
		}
	}	
}
void Stu_Fail(Student stu[],int n){	
	int i,j;
tab; printf("%s%10s%10s%10s%10s%10s%10s\n","Name","Gender","Math","Physic","Chimistry","English","Average");
	for(i=0;i<n;i++)
	{
		if(stu[i].avg<50 && stu[i].avg>=0){
			
	tab;	printf("%s%10s%10.2f%10.2f%10.2f%10.2f%10.2f\n",stu[i].name,stu[i].sex,stu[i].M,stu[i].P,stu[i].C,stu[i].E,stu[i].avg);
		}
	}	
}
void Delete(struct Student stu[],int n){
	int i,k,A=0;
	char S_D[20];
tab;	printf("Enter Name to Delete  : ");scanf("%s",&S_D);
		for(i=0;i<n;i++){
			if(strcmp(S_D,stu[i].name )==0){
				for(k=i;k<n;k++){
					
					stu[k]=stu[k+1];
				}
				n--;
				A=1;
				break;
			}
		}
		if(A==0){tab; printf("Delete not Success.\n");
		} 
		else {tab; printf("Delete  Success.\n");
		}
}
int main(){
	int op,n,i;
	system("color 9");
tab;	printf("=============================================\n");
tab;	printf("=                LIST STUDENT               =\n");
tab;	printf("=============================================\n");
do{
tab;	printf("=============================================\n");
tab;	printf("\3       1.INPUT          2.OUTPUT           \3\n");
tab;	printf("\3       3.SORT AVERAGE   4.SORT NAME        \3\n");
tab;	printf("\3       5.STUDENT PASS   6.STUDENT FAIL     \3\n");
tab;	printf("\3       7.DELETE         8.EXIT             \3\n");
tab;	printf("=============================================\n");
tab;	printf("Please Choose Option : ");scanf("%d",&op);
		switch(op){
			case 1:{
	tab;			printf("================>>>INPUT<<<==================\n");
	tab;			printf("Enter Number of Student : ");scanf("%d",&n);
				for(i=0;i<n;i++){
					stu[i]=Input();
				}
				printf("\n");
				}break;
			case 2:{
	tab;			printf("================>>>OUTPUT<<<=================\n");
				Output(stu,n);
				printf("\n");
				}break;
			case 3:{
	tab;			printf("=============>>>SORT AVERAGE<<<==============\n");
				SortAvg(stu,n);
				printf("\n");
				}break;
			case 4:{
	tab;			printf("==============>>>SORT NAME<<<================\n");
				SortName(stu,n);
				printf("\n");
				}break;
			case 5:{
	tab;			printf("=============>>>STUDENT PASS<<<==============\n");
				Stu_Pass(stu,n);
				printf("\n");
				}break;
			case 6:{
	tab;			printf("============>>>STUDENT FAIL<<<===============\n");
				Stu_Fail(stu,n);
				printf("\n");
				}break;
			case 7:{
	tab;			printf("================>>>DELETE<<<==================\n");
				Delete(stu,n);
				printf("\n");
				}break;
			case 8:{
				return 0;
				}break;
		}
	}while(getch()==13);
	return 0;
}
