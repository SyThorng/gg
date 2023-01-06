#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		string sex;
		float salary;
	public:
		Employee(){
			id=0;
			name="kok Dara";
			sex="male";
			salary=0;
		}
		Employee(int id,string name,string sex,float salary){
			this->id=id;
			this->name=name;
			this->sex=sex;
			this->salary=salary;
		}
		void setID(int id){
			this->id=id;
		}
		int getID(){
			return id;
		}
		void Input(){
			cout<<"|\t Input ID: ";
			cin>>id;
			cout<<"|\t Input Name: ";
			cin.ignore();
			getline(std::cin,name);
			cout<<"|\t Input Sex: ";
			cin>>sex;
			cout<<"|\t Input Salary: ";
			cin>>salary;
		}	
		void Output(){
			cout<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<salary<<"$"<<endl;
		}
};
void header(){
	cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Salary"<<endl;
}
int main(){
	Employee emp[100];
//	int i,n,op; 
	int i,n,op;
	do{
		system("color 2");
		system("cls");
		cout<<"|\t \1 1.Input Array \2"<<endl;
		cout<<"|\t \1 2.Output Array \2"<<endl;
		cout<<"|\t \1 3.Search Array \2"<<endl;
		cout<<"|\t \1 4.Update Array \2"<<endl;
		cout<<"|\t \1 5.Delete Array \2"<<endl;
		cout<<"|\t \1 6.Insert Array \2"<<endl;
		cout<<"|\t \1 7.Sort Array \2"<<endl;
		cout<<"|\t \1 0.Exit Appication \2"<<endl;
		cout<<"|\t Input Option: ";
		cin>>op;
		switch(op){
			case 1:{
				cout<<"|\t Input N:";
				cin>>n;
				for(i=0;i<n;i++){
//					pro[i]=Input();
					emp[i].Input();
				}
				cout<<"Input Completed...!"<<endl;
			}break;
			case 2:{
				cout<<"______________________________________________________"<<endl;
				header();
				for(i=0;i<n;i++){
					emp[i].Output();
				}
			}break;
			case 3:{
				int s_id; int b=0;
				cout<<"Input ID to search: ";
				cin>>s_id;
				header();
				for(i=0;i<n;i++){
					if(s_id == emp[i].getID()){
						emp[i].Output();
						b=1;
					}
				}
				if(b==0){
					cout<<"Search Not Found...!"<<endl;
				}
			}break;
			case 4:{
				int s_id; int b=0;
				cout<<"Input ID to Update: ";
				cin>>s_id;
				for(i=0;i<n;i++){
					if(s_id == emp[i].getID()){
						emp[i].Input();
						b=1;
						cout<<"Update Completed....!"<<endl;
					}
				}
				if(b==0){
					cout<<"Update Not Found...!"<<endl;
				}
			}break;
			case 5:{
				int d_id; int b=0,j;
				cout<<"Input ID for Delete: ";
				cin>>d_id;
				for(i=0;i<n;i++){
					if( d_id == emp[i].getID()){
						for(j=i;j<n;j++){
							emp[j]=emp[j+1];
						}
						--n;
						b=1;
						cout<<"Delete Completed...!"<<endl;
						break;
					}
				}
				if(b==0){
					cout<<"Delete is Failed...!"<<endl;
				}
			}break;
			case 6:{
				int pos;
				cout<<"Input Position: ";
				cin>>pos;
				if(pos>n){
					cout<<"\a Invalid Position "<<endl;
				}else {
					for(i=n-1;i>=pos;i--){
						emp[i+1]=emp[i];
					}
					++n;
					emp[pos].Input();
					cout<<"\a Insert Completed...!"<<endl;
				}
			}break;
			case 7:{
				Employee temp; int j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(emp[i].getID() > emp[j].getID()){
							temp=emp[i];
							emp[i]=emp[j];
							emp[j]=temp;
						}
					}
				}
				cout<<"\a Sort Completed...!"<<endl;
			}break;
			case 0:{
				exit(0);
			}break;
		}getch();
	}while(1);
}
