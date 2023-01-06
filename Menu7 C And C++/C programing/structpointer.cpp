#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct teacher{
	int id;
	char name[100],sex[7],major[100];
	int old;
	float salary;
}T;
T Input(){
	T t;
	printf("Input Teacher ID: ");
	scanf("%d",&t.id);
	printf("Input Teacher Name: ");
	fflush(stdin);gets(t.name);
	printf("Input Teacher Sex: ");
	scanf("%s",&t.sex);
	printf("Input Teacher Major: ");
	fflush(stdin);gets(t.major);
	printf("Input Teacher Old: ");
	scanf("%d",&t.old);
	printf("Input Teacher Salary: ");
	scanf("%f",&t.salary);
	return t;
}
void Output(T t){
	printf("%10d %15s %10s %15s %10d %10.2f$ \n",t.id,t.name,t.sex,t.major,t.old,t.salary);
}
int main(){
	T *t;
	int i,n,op;
	do{
		system("color 2");
		system("cls");
		printf("|\t 1.Input Information Teacher\n");
		printf("|\t 2.Output Information Teacher\n");
		printf("|\t 3.Search Information Teacher\n");
		printf("|\t 4.Update Information Teacher\n");
		printf("|\t 5.Delete Information Teacher\n");
		printf("|\t 6.Insert Information Teacher\n");
		printf("|\t 7.Sort Information Teacher\n");
		printf("|\t 0.Exit Application \n");
		printf("Input Option: ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Input N: ");
				scanf("%d",&n);
				t = (T *)calloc(n,sizeof(T));
				for(i=0;i<n;i++){
					*(t+i)=Input(); //p[i]=input();
				}
				printf("\a Input Completed\n");
			}break;
			case 2:{
				printf("________________________________________________________________________\n");
				printf("%10s %15s %10s %10s %10s %10s\n","Teach_ID","Teach_Name","Sex","Major","ODL","SALARY");
				for(i=0;i<n;i++){
					//Output(p[i])
					Output(*(t+i));
				}
			}break;
			case 3:{
				int s_id; int b=1;
				printf("Input ID to Search: ");
				scanf("%d",&s_id);
				printf("________________________________________________________________________\n");
				printf("%10s %15s %10s %10s %10s %10s\n","Teach_ID","Teach_Name","Sex","Major","ODL","SALARY");
				for(i=0;i<n;i++){
					if(s_id == (t+i)->id){
						Output(*(t+i));
						b=2;
					}
				}
				if(b==1){
					printf("Search Not Found...!");
				}
			}break;
			case 4:{
				int s_id; int b=2;
				printf("Input ID For Update: ");
				scanf("%d",&s_id);
				for(i=0;i<n;i++){
					if(s_id == (t+i)->id){
						*(t+i)=Input();
						b=1;
						printf("Update Completed \n");
					}
				}
				if(b==2){
					printf("Update is Not Completed\a \n");
				}
			}break;
			case 5:{
				int s_id; int b=2,j;
				printf("Input ID For Delete: ");
				scanf("%d",&s_id);
				for(i=0;i<n;i++){
					if(s_id == (t+i)->id){
						for(j=i;j<n;j++){
							*(t+j) = *(t+(j+1));
						}
						--n;
						b=1;
						printf("Delete Completed \a\n");
					}
				}
				if(b==2){
					printf("\a Delete is Fail...!");
				}
			}break;
			case 6:{
				int pos;
				printf("Input Position: ");
				scanf("%d",&pos);
				if(pos>n){
					printf("\a Invalid Position \n");
				}else {
					for(i=n-1;i>=pos;i--){
						//arr[i+1] = arr[i]
						*(t+(i+1)) = *(t+i);
					}
					++n;
					printf("Insert New Value \n");
					
					*(t+pos)=Input();
					printf("Insert Completed \n");
				}
			}break;
			case 7:{
				T temp; int j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if((t+i)->id > (t+j)->id){
							temp = *(t+i);
							*(t+i) = *(t+j);
							*(t+j) = temp;
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
