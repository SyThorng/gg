#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
class Person{
	protected:
		int id;
		string name;
		string gender;
	public:
		Person()
		{
			id=0;
			name="N/A";
			gender="N/A";
		}
		Person(int i, string n, string g)
		{
			id=i;
			name=n;
			gender=g;
		}
		void setID(int id){
			this->id =id;
		}
		void setName(string name){
			this->name = name;
		}
		void setGender(string gender){
			this->gender = gender;
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
		string getGender(){
			return gender;
		}
		void Input()
		{
			cout<<"Input ID:   ";cin>>id;
			cout<<"Input Name:  ";cin>>name;
			cout<<"Input Gender: ";cin>>gender;
		}
		void  Output()
		{
			cout<<"\tID : "<<id<<endl;
			cout<<"\tName : "<<name<<endl;
			cout<<"\tGender : "<<gender<<endl;
		}
}per[10];
		void searchPer()
		{
			int nid, b, n;
			cout<<endl<<"+------------------->> Search information Student <<----------------------------"<<endl;
			cout<<endl<<"Please Input ID for search : "; cin>>nid;
			for(int i=0;i<n;i++){
				if(nid == per[i].getID())
				{
					b=1;
				    per[i].Output();
				    cout<<endl<<"---------------->> You Search Successful.......... <<------------------"<<endl;
				    break;	
				}
			}
			if(b==1)
			{
				cout<<endl<<"---------------->> You Search not Successful.......... <<------------------"<<endl;
			}
			getch();
		}
		void updatePer()
		{
			int up;
			int n_id;
			string n_name;
			string n_gender;
			int k, n;
			cout<<endl<<"------------------------------>> Update information Student <<----------------------------------------"<<endl;
			cout<<endl<<"Please You input ID for update : "; cin>>up;
			for(int i=0;i<n;i++)
			{
				if(up == per[i].getID())
				{
					cout<<endl<<"Enter New ID : "; cin>>n_id;
					cout<<endl<<"Enter New Name : "; fflush(stdin); getline(cin, n_name);
					cout<<endl<<"Enter New Gender : "; fflush(stdin); getline(cin,n_gender);
					
					per[i].setID(n_id);
					per[i].setName(n_name);
					per[i].setGender(n_gender);
					k=1;
					cout<<endl<<"---------------->> You Update Successful..........! <<------------------"<<endl;
				}
				if(k==1)
				{
					cout<<endl<<"---------------->> You Update Not Successful..........! <<------------------"<<endl;
				}
			}
			getch();		
		}
class Lecturer: public Person{
	public:
		int salary;
		string subject;
	public:
		Lecturer()
		{
			Person:Person();
			salary=0;
			subject="N/A";
		}
		Lecturer(int i, string n, string g, int sa, string sub)
		{
			id=i;
			name=n;
			gender=g;
			salary=sa;
			subject=sub;
		}
		void setID(int id){
			this->id =id;
		}
		void setName(string name){
			this->name = name;
		}
		void setGender(string gender){
			this->gender = gender;
		}
		void setSalary(int salary){
			this->salary = salary;
		}
		void setSubject(string subject){
			this->subject = subject;
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
		string getGender(){
			return gender;
		}
		int getSalary(){
			return salary;
		}
		string getSubject(){
			return subject;
		}
		void Input()
		{
			Person::Input();
			cout<<"Input Salary:  ";cin>>salary;
			cout<<"Input Subject: ";cin>>subject;
		}
		void Output()
		{
			Person::Output();
			cout<<"\tSalary:  "<<name<<endl;
			cout<<"\tSubject: "<<gender<<endl;
		}
}lec[10];
		void searchLec()
		{
			int nid, b, n;
			cout<<endl<<"+------------------->> Search information Student <<----------------------------"<<endl;
			cout<<endl<<"Please Input ID for search : "; cin>>nid;
			for(int i=0;i<n;i++){
				if(nid == lec[i].getID())
				{
					b=1;
				    lec[i].Output();
				    cout<<endl<<"---------------->> You Search Successful.......... <<------------------"<<endl;
				    break;	
				}
			}
			if(b==1)
			{
				cout<<endl<<"---------------->> You Search not Successful.......... <<------------------"<<endl;
			}
			getch();
		}
		void updateLec()
		{
			int updat;
			int n_id;
			string n_name;
			string n_gender;
			int n_salary;
			string n_subject;
			int k, n;
			cout<<endl<<"------------------------------>> Update information Student <<----------------------------------------"<<endl;
			cout<<endl<<"Please You input ID for update : "; cin>>updat;
			for(int i=0;i<n;i++)
			{
				if(updat == lec[i].getID())
				{
					cout<<endl<<"Enter New ID : "; cin>>n_id;
					cout<<endl<<"Enter New Name : "; fflush(stdin); getline(cin, n_name);
					cout<<endl<<"Enter New Gender : "; fflush(stdin); getline(cin,n_gender);
					cout<<endl<<"Enter New Salary : "; cin>>n_salary;
					cout<<endl<<"Enter New Subject : "; fflush(stdin); getline(cin,n_subject);
					
					lec[i].setID(n_id);
					lec[i].setName(n_name);
					lec[i].setGender(n_gender);
					lec[i].setSalary(n_salary);
					lec[i].setSubject(n_subject);
					k=1;
					cout<<endl<<"---------------->> You Update Successful..........! <<------------------"<<endl;
				}
				if(k==0)
				{
					cout<<endl<<"---------------->> You Update Not Successful..........! <<------------------"<<endl;
				}
			}
			getch();		
		}
class Department: public Lecturer{
	private:
		string department;
	public:
		Department()
		{
			Person:Person();
			Lecturer:Lecturer();
			department="N/A";
		}
		Department(int i, string n, string g, int sa, string sub ,string depart)
		{
			id=i;
			name=n;
			gender=g;
			salary=sa;
			subject=sub;
			department=depart;
		}
		void setID(int id){
			this->id =id;
		}
		void setName(string name){
			this->name = name;
		}
		void setGender(string gender){
			this->gender = gender;
		}
		void setSalary(int salary){
			this->salary = salary;
		}
		void setSubject(string subject){
			this->subject = subject;
		}
		void setDepartment(string department){
			this->department = department; 
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
		string getGender(){
			return gender;
		}
		int getSalary(){
			return salary;
		}
		string getSubject(){
			return subject;
		}
		string getDepartment(){
			return department;
		}
		void Input()
		{
			Person::Input();
			cout<<"Input department: ";cin>>department;
		}
		void Output()
		{
			Person::Output();
			cout<<"\tDepartment: "<<department<<endl;
		}
}de[10];
		void searchDepart()
		{
			int nid, b, n;
			cout<<endl<<"+------------------->> Search information Student <<----------------------------"<<endl;
			cout<<endl<<"Please Input ID for search : "; cin>>nid;
			for(int i=0;i<n;i++){
				if(nid == de[i].getID())
				{
					b=1;
				    de[i].Output();
				    cout<<endl<<"---------------->> You Search Successful.......... <<------------------"<<endl;
				    break;	
				}
			}
			if(b==1)
			{
				cout<<endl<<"---------------->> You Search not Successful.......... <<------------------"<<endl;
			}
			getch();
		}
		void updateDepart()
		{
			int up;
			int n_id;
			string n_name;
			string n_gender;
			int n_salary;
			string n_subject;
			string n_department;
			int k, n;
			cout<<endl<<"------------------------------>> Update information Student <<----------------------------------------"<<endl;
			cout<<endl<<"Please You input ID for update : "; cin>>up;
			for(int i=0;i<n;i++)
			{
				if(up == de[i].getID())
				{
					cout<<endl<<"Enter New ID : "; cin>>n_id;
					cout<<endl<<"Enter New Name : "; fflush(stdin); getline(cin, n_name);
					cout<<endl<<"Enter New Gender : "; fflush(stdin); getline(cin,n_gender);
					cout<<endl<<"Enter New Salary : "; cin>>n_salary;
					cout<<endl<<"Enter New Subject : "; fflush(stdin); getline(cin,n_subject);
					cout<<endl<<"Enter New Department : "; fflush(stdin); getline(cin,n_department);
					
					de[i].setID(n_id);
					de[i].setName(n_name);
					de[i].setGender(n_gender);
					de[i].setSalary(n_salary);
					de[i].setSubject(n_subject);
					de[i].setDepartment(n_department);
					k=1;
					cout<<endl<<"---------------->> You Update Successful..........! <<------------------"<<endl;
				}
				if(k==1)
				{
					cout<<endl<<"---------------->> You Update Not Successful..........! <<------------------"<<endl;
				}
			}
			getch();		
		}
class Student: public Lecturer, public Department{
	private:
		int id;
		string name;
		string gender;
		int score;
		float average;
		string grade;
	public:
		Student()
		{
			Person:Person();
			Lecturer:Lecturer();
			Department:Department();
			score=0;
			average=0;
			grade="N/A";
		}
		Student (int scor, float aver, string gr)
		{
			score=scor;
			average=aver;
			grade=gr;
		}
		void setID(int id){
			this->id =id;
		}
		void setName(string name){
			this->name = name;
		}
		void setGender(string gender){
			this->gender = gender;
		}
		void setScore(int score){
			this->score = score;
		}
		void setAverage(float average){
			this->average = average;
		}
		void setGrade(string grade){
			this->grade = grade;
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
		string getGender(){
			return gender;
		}
		int getScore(){
			return score;
		}
		float getAverage(){
			return average;
		}
		string getGrade(){
			return grade;
		}
		void Input()
		{
//			Person::Input();
//			Lecturer::Input();
			Department::Input();
			cout<<endl<<"Input Score: ";cin>>score;
			
			average = score/5;
			if(average >=95){
				grade = "A+";
			}
			else if(average >=90){
				grade = "A";
			}
			else if(average >=85){
				grade = "B+";
			}
			else if(average >=80){
				grade = "B";
			}
			else if(average >=70){
				grade = "C";
			}
			else if(average >=60){
				grade = "D";
			}
			else if(average >=50){
				grade = "E";
			}
			else{
				grade = "F";
			}
		}
		void Output()
		{
//			Person::Output();
//			Lecturer::Output();
			Department::Output();
			cout<<"\tScore: "<<score<<endl;
			cout<<"\tAverage: "<<average<<endl;
			cout<<"\tGrade: "<<grade<<endl;
		}
}s[10];
		void search()
		{
			int N_id, b, n;
			cout<<endl<<"+------------------->> Search information Student <<----------------------------"<<endl;
			cout<<endl<<"Please Input ID for search : "; cin>>N_id;
			for(int i=0;i<n;i++){
				if(N_id == s[i].getID())
				{
					b=1;
				    s[i].Output();
				    cout<<endl<<"---------------->> You Search Successful.......... <<------------------"<<endl;
				    break;	
				}
			}
			if(b==1)
			{
				cout<<endl<<"---------------->> You Search not Successful.......... <<------------------"<<endl;
			}
			getch();
		}
		void update()
		{
			int up;
			int n_id;
			string n_name;
			string n_gender;
			string n_department;
			int n_score;
			string n_grade;
			float n_average;
			int k, n;
			cout<<endl<<"------------------------------>> Update information Student <<----------------------------------------"<<endl;
			cout<<endl<<"Please You input id for update : "; cin>>up;
			for(int i=0;i<n;i++)
			{
				if(up == s[i].getID())
				{
					cout<<endl<<"Enter New ID : "; cin>>n_id;
					cout<<endl<<"Enter New Name : "; fflush(stdin); getline(cin, n_name);
					cout<<endl<<"Enter New Gender : "; fflush(stdin); getline(cin,n_gender);
					cout<<endl<<"Enter New Department : ";cin>>n_department;
					cout<<endl<<"Enter New Score : "; cin>>n_score;
					
					n_average = n_score/5;
					if(n_average >=100){
						n_grade = "A+";
					}
					else if(n_average >=90){
						n_grade = "A";
					}
					else if(n_average >=85){
						n_grade = "B+";
					}
					else if(n_average >=80){
						n_grade = "B";
					}
					else if(n_average >=70){
						n_grade = "C";
					}
					else if(n_average >=60){
						n_grade = "D";
					}
					else if(n_average >=50){
						n_grade = "E";
					}
					else{
						n_grade = "F";
					}
					s[i].setID(n_id);
					s[i].setName(n_name);
					s[i].setGender(n_gender);
					//s[i].setDepartment(n_department);
					s[i].setScore(n_score);
					s[i].setAverage(n_average);
					s[i].setGrade(n_grade);
					k=1;
					cout<<endl<<"---------------->> You Update Successful..........! <<------------------"<<endl;
				}
				if(k==1)
				{
					cout<<endl<<"---------------->> You Update Not Successful..........! <<------------------"<<endl;
				}
			}
			getch();		
		}
		void Delete()
		{
			int delet,k, n;
			cout<<endl<<"+------------------->> Delete Information Student <<------------------"<<endl;
			cout<<endl<<"Please You input ID for Delete Information Student : "; cin>>delet;
			for(int i=0;i<n;i++)
			{
				if(delet == s[i].getID())
				{
					for(int j=i;j<n;j++)
					{
						s[j] = s[j+1];
					}
					cout<<endl<<"---------------->> You Delete Successful..........! <<------------------"<<endl;
					n--;
					k=1;
				}
			}
			if(k==0)
			{
				cout<<endl<<"---------------->> You Delete Not Successful..........! <<------------------"<<endl;
			}
			getch();
		}
		
int main()
{
	system("color 3");
	Person obj[100];
   	Lecturer obj1[100];
   	Department obj2[100];
   	Student obj3[100];
	int i, j, n;
	int op;
	again:
	cout<<"==================MENU==================="<<endl;
	cout<<"\t1. Person."<<endl;
	cout<<"\t2. Lecturer."<<endl;
	cout<<"\t3. Department."<<endl;
	cout<<"\t4. Student. "<<endl;
	do
	{
		cout<<"Choose option: ";cin>>op;
		switch(op)
			{
				case 1: //Information class person
					{
						system("cls");
						int op;
						case_1:
						cout<<"-------------------->> Menu_Person <<--------------------"<<endl;
						cout<<"1. Input. "<<endl;
						cout<<"2. Output."<<endl;
						cout<<"3. Search."<<endl;
						cout<<"4. Update."<<endl;
						cout<<"5. Exit.  "<<endl;
						cout<<"Please Input option : "; cin>>op;
						switch(op)
						{
							case 1: //input
							{
								system("cls");
								//obj[i].Input();
								per[i].Input();
								goto case_1;	
							}break;
							case 2: //output
							{
								system("cls");
								cout<<endl<<"---------------------->> Output Data <<----------------------"<<endl;
								//obj[i].Output();
								per[i].Output();
								goto case_1;	
							}break;
							case 3: //search
							{
								system("cls");
								searchPer();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj[i].Output();
								per[i].Output();
								goto case_1;	
							}break;
							case 4:
							{
								system("cls");
								updatePer();
								//obj[i].Output();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								per[i].Output();
								goto case_1;	
							}break;
							case 5:
							{
								system("cls");
								cout<<endl<<"----------------->> Exit <<-----------------"<<endl;
								goto again;
								break;
							}
						}
					}break;
				case 2:
					{	
   	        			system("cls");
						int op;
						case_2:
						cout<<"-------------------->> Menu_Lecturer <<--------------------"<<endl;
						cout<<"1. Input. "<<endl;
						cout<<"2. Output."<<endl;
						cout<<"3. Search."<<endl;
						cout<<"4. Update."<<endl;
						cout<<"5. Exit.  "<<endl;
						cout<<"Please Input option : "; cin>>op;
						switch(op)
						{
							case 1: //input
							{
								system("cls");
								//obj1[i].Input();
								goto case_2;	
							}break;
							case 2: //output
							{
								system("cls");
								cout<<endl<<"---------------------->> Output Data <<----------------------"<<endl;
								obj1[i].Output();
								goto case_2;	
							}break;
							case 3: //search
							{
								system("cls");
								searchLec();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								lec[i].Output();
								goto case_2;	
							}break;
							case 4:
							{
								system("cls");
								updateLec();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj1[i].Output();
								lec[i].Output();
								goto case_2;	
							}break;
							case 5:
							{
								system("cls");
								cout<<endl<<"----------------->> Exit <<-----------------"<<endl;
								goto again;
								break;
							}
						}
					}break;
				case 3:
					{
						system("cls");
						int op;
						case_3:
						cout<<"-------------------->> Menu_Department <<--------------------"<<endl;
						cout<<"1. Input. "<<endl;
						cout<<"2. Output."<<endl;
						cout<<"3. Search."<<endl;
						cout<<"4. Update."<<endl;
						cout<<"5. Exit.  "<<endl;
						cout<<"Please Input option : "; cin>>op;
						switch(op)
						{
							case 1: //input
							{
								system("cls");
								//obj2[i].Input();
								de[i].Input();
								goto case_3;	
							}break;
							case 2: //output
							{
								system("cls");
								cout<<endl<<"---------------------->> Output Data <<----------------------"<<endl;
								//obj2[i].Output();
								de[i].Output();
								goto case_3;	
							}break;
							case 3: //search
							{
								system("cls");
								searchDepart();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj2[i].Output();
								de[i].Output();
								goto case_3;	
							}break;
							case 4:
							{
								system("cls");
								updateDepart();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj2[i].Output();
								de[i].Output();
								goto case_3;	
							}break;
							case 5:
							{
								system("cls");
								cout<<endl<<"----------------->> Exit <<-----------------"<<endl;
								goto again;
								break;
							}
						}
					}break;
				case 4:
					{
   	        			system("cls");
						int op;
						case_4:
						cout<<"-------------------->> Menu_Student <<--------------------"<<endl;
						cout<<"1. Input."<<endl;
						cout<<"2. Output."<<endl;
						cout<<"3. Search."<<endl;
						cout<<"4. Update."<<endl;
						cout<<"5. Delete."<<endl;
						cout<<"6. Exit."<<endl;
						cout<<"Please Input option : "; cin>>op;
						switch(op)
						{
							case 1:
							{
								system("cls");
								//obj3[i].Input();
								s[i].Input();
								goto case_4;
								break;
							}
							case 2:
							{
								system("cls");
								cout<<endl<<"---------------------->> Output Data <<----------------------"<<endl;
								//obj3[i].Output();
								s[i].Output();
								goto case_4;
								break;
							}
							case 3:
							{
								system("cls");
								search();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj3[i].Output();
								s[i].Output();
								goto case_4;
								break;
							}
							case 4:
							{
								system("cls");
								update();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj3[i].Output();
								s[i].Output();
								goto case_4;
								break;
							}
							case 5:
							{
								system("cls");
								Delete();
								cout<<endl<<"-------------------------->> Data <<--------------------------"<<endl;
								//obj3[i].Input();
								s[i].Output();
								goto case_4;
								break;
							}
							case 6:
							{
								system("cls");
								cout<<endl<<"-------------->> Exit <<----------------"<<endl;
								goto again;
								break;
							}
							goto again;
						}
					}break;
				}
		}while(op!=0);
}
