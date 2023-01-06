#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
using namespace std;
class Employee{
	private:
		int id;
		char name[20];
		char sex[20];
		float salary;
	public:
		int getID(){
			return id;
		}
		void Input(){
			cout<<"Input ID: ";
			cin>>id;
			cout<<"Input Name: ";
			cin.ignore();
			cin.getline(name,100);
			cout<<"Input Sex: ";
			cin>>sex;
			cout<<"Input Salary: ";
			cin>>salary;
		}
		void Output(){
			cout<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<salary<<"$"<<endl;
		}
			
};
void header(){
	cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Gender"<<setw(10)<<"Salary"<<endl;
}
int main(){
	Employee *emp;
	int i,op,n;
	do{
		system("color 4");
		system("cls");
		cout<<"|\t 1.Input Pointer\4"<<endl;
		cout<<"|\t 2.Output Pointer\4"<<endl;
		cout<<"|\t 3.Saerch Pointer\4"<<endl;
		cout<<"|\t 4.Update Pointer\4"<<endl;
		cout<<"|\t 5.delete Pointer\4"<<endl;
		cout<<"|\t 6.Insert Pointer\4"<<endl;
		cout<<"|\t 7.Sort Pointer\4"<<endl;
		cout<<"|\t 0.Exit Program \4"<<endl;
		cout<<"|\t Please Input Option: ";
		cin>>op;
		switch(op){
			case 1:{
				cout<<"Input N: ";
				cin>>n;
				emp = (Employee *)calloc(n,sizeof(Employee));
				for(i=0;i<n;i++){
					(emp+i)->Input();
				}
				cout<<"Input Completed"<<endl;
			}break;
			case 2:{
				cout<<"__________________________________________"<<endl;
				header();
				for(i=0;i<n;i++){
					(emp+i)->Output();
				}
			}break;
			case 3:{
				int s_id; int b=0;
				cout<<"Input ID to Search: ";
				cin>>s_id;
				header(); 
				for(i=0;i<n;i++){
					if(s_id == (emp+i)->getID()){
						(emp+i)->Output();
						b=1;
					}
				}
				if(b==0){
					cout<<"Search Not Found..!"<<endl;
				}
			}break;
			case 4:{
				int s_id; int b=0;
				cout<<"Input ID to Update: ";
				cin>>s_id;
				for(i=0;i<n;i++){
					if(s_id == (emp+i)->getID()){
						(emp+i)->Input();
						b=1;
						cout<<"Update Completed"<<endl;
					}
				}
				if(b==0){
					cout<<"Update Failed...!"<<endl;
				}
			}break;
			case 5:{
				int s_id; int b=0;
				cout<<"Input ID to Update: ";
				cin>>s_id;
				for(i=0;i<n;i++){
					if(s_id == (emp+i)->getID()){
						for(int j=i;j<n;j++){
							*(emp+j) = *(emp+(j+1));
							
						}
						--n;
						b=1;
						cout<<"Delete Completed"<<endl;
					}
				}
				if(b==0){
					cout<<"Delete is Failed"<<endl;
				}
			}break;
			case 6:{
				int pos;
				cout<<"Input Position: ";
				cin>>pos;
				if(pos>n){
					cout<<"Invalid Position"<<endl;
				}else {
					for(i=n-1;i>=pos;i--){
						*(emp+(i+1)) = *(emp+i);
					}
					++n;
					(emp+pos)->Input();
					cout<<"Insert Completed"<<endl;
				}
			}break;
			case 7:{
				Employee temp;
				for(i=0;i<n;i++){
					for(int j=i+1;j<n;j++){
						if((emp+i)->getID() > (emp+j)->getID()){
							temp = *(emp+i);
							*(emp+i) = *(emp+j);
							*(emp+j) = temp;
						}
					}
				}
				cout<<"\a Sort Completed"<<endl;
			}break;
			case 0:{
				exit(0);
			}break;
		}getch();
	}while(1);
}
