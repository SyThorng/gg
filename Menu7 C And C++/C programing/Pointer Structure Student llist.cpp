#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<alloc.h>
#define tab printf("\t\t\t\t")
struct Student{
	char id[10];
	char name[40];
	char sex[10];
	int age;
	float score;	
}*stu,swap;

int main(){
	int i,n,op;
do{
	system("color 9");
tab;    printf("<<====================================>>\n");
tab;	printf("<<              STUDENT               >>\n");
tab;    printf("<<====================================>>\n");
tab;	printf("<<====================================>>\n");
tab;	printf("<<       1.INPUT       2.OUTPUT       >>\n");
tab;	printf("<<       3.SORT        4.SEARCH       >>\n");
tab;	printf("<<       5.DELTE       6.UPDATE       >>\n");
tab;	printf("<<              7.EXIT                >>\n");
tab;	printf("<<====================================>>\n");
tab;	printf("Please Choose Option : ");scanf("%d",&op);
	switch(op){
		case 1:{
			int i,n;
tab;			printf("<<====================================>>\n");
tab;			printf("<<               INPUT                >>\n");
tab;			printf("<<====================================>>\n");
tab;			printf("Enter The Number Of Student : ");scanf("%d",&n);
			stu=(struct Student*)malloc(n*sizeof(struct Student));

			for(i=0;i<n;i++){	
tab;				printf("Enter Student ID     : ");fflush(stdin);gets((stu+i)->id);
tab;				printf("Enter Student Name   : ");fflush(stdin);gets((stu+i)->name);
tab;				printf("Enter Student Gender : ");fflush(stdin);gets((stu+i)->sex);
tab;				printf("Enter Student Age    : ");scanf("%d",&(stu+i)->age);
tab;				printf("Enter Student Score  : ");scanf("%f",&(stu+i)->score);
				printf("\n");				
			}
			printf("\n");
			}break;
		case 2:{
tab;			printf("<<====================================>>\n");
tab;			printf("<<               OUTPUT               >>\n");
tab;			printf("<<====================================>>\n");
tab;			printf("%s%10s%10s%10s%10s\n","ID","NAME","GENDER","AGE","SCORE");
			for(i=0;i<n;i++){
tab;					printf("%s%10s%10s%10d%10.2f\n",(stu+i)->id,(stu+i)->name,(stu+i)->sex,(stu+i)->age,(stu+i)->score);
					//	free(stu);
					printf("\n");
			}break;
			getch();
		case 3:{
tab;			printf("<<====================================>>\n");
tab;			printf("<<                SORT                >>\n");
tab;			printf("<<====================================>>\n");
			
			printf("\n");
			}break;
		case 4:{
tab;			printf("<<====================================>>\n");
tab;			printf("<<               SEARCH               >>\n");
tab;			printf("<<====================================>>\n");
			
			printf("\n");
			}break;
		case 5:{
tab;			printf("<<====================================>>\n");
tab;			printf("<<               DELETE               >>\n");
tab;			printf("<<====================================>>\n");
			
			printf("\n");
			}break;
		case 6:{
tab;			printf("<<====================================>>\n");
tab;			printf("<<               UPDATE               >>\n");
tab;			printf("<<====================================>>\n");
			
			printf("\n");
			}break;
		case 7:{
				return 0;
			}break;
	}}
}while(getch()==13);
return 0;
}

