#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
void SetLocation(int row,int column)
{
    COORD line;
    line.X = row;
    line.Y = column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), line);
}
void SetTextColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
class Student
{
    private:
        char id[100], name[100], sex[100],grade;
        float mark1, mark2, mark3, mark4, mark5, mark6, total, avg;

    public:
        char *getID() { return id; }
        char *getName() { return name; }
        void Input();
        void Output(int y);
};
void box(int row1,int col1,int row2,int col2,int color)
{
    int i,j;
    SetTextColor(color);
    for (i = row1; i <= row2; i++)
    {
        SetLocation(i, col1); cout << char(205);
        SetLocation(i, col2); cout << char(205);
    }
    for (j = col1; j <= col2;j++)
    {
        SetLocation(row1, j); cout << char(186);
        SetLocation(row2, j); cout << char(186);
    }
    SetLocation(row1, col1); cout << char(201);
    SetLocation(row1, col2); cout << char(200);
    SetLocation(row2, col1); cout << char(187);
    SetLocation(row2, col2); cout << char(188);
}
void small_line(int a,int b,int c,int d)
{
    string l(c, char(196));
    SetLocation(a, b);
    SetTextColor(d);
    cout << l;
}
void small_line_Row(int a,int b,int col,int color)
{
    int i;
    for (i = a; i <= b;i++)
    {
        SetLocation(col, i);
        SetTextColor(color);
        cout << char(179);
    }
}
void TextBox(int a,int b,int c,int d)
{
    string t(c, char(176));
    SetLocation(a, b);
    SetTextColor(d);
    cout << t;
}
void DrawBox(int a,int b,int c,int d)
{
    string t(c, char(219));
    SetLocation(a, b);
    SetTextColor(d);
    cout << t;
}
void Output_String(int x,int y,string name,int c)
{
    SetLocation(x, y);
    SetTextColor(c);
    cout << name;
}
void Student:: Input()
{
    TextBox(43, 4, 38, 3); TextBox(43, 3, 38, 3); TextBox(43, 2, 38, 3);
    Output_String(47, 3, "Form of Input the information",128);
    Output_String(44, 7,  "Enter ID   : ",14); box(43, 6, 80, 8, 3);
    Output_String(44, 10, "Enter Name : ",14); box(43, 9, 80, 11, 3);
    Output_String(44, 13, "Enter Sex  : ",14); box(43, 12, 80, 14, 3);
    Output_String(44, 16, "Mark1      : ",14); box(43, 15, 80, 17, 3);
    Output_String(44, 19, "Mark2      : ",14); box(43, 18, 80, 20, 3);
    Output_String(44, 22, "Mark3      : ",14); box(43, 21, 80, 23, 3);
    Output_String(44, 25, "Mark4      : ",14); box(43, 24, 80, 26, 3);
    Output_String(44, 28, "Mark5      : ",14); box(43, 27, 80, 29, 3);
    Output_String(44, 31, "Mark6      : ",14); box(43, 30, 80, 32, 3);


    SetLocation(57, 7);
    fflush(stdin);
    cin.getline(id, 100);
    SetLocation(57, 10);cin.getline(name, 100);
    SetLocation(57, 13);cin.getline(sex, 100);
    SetLocation(57, 16);cin>>mark1;
    SetLocation(57, 19);cin>>mark2;
    SetLocation(57, 22);cin>>mark3;
    SetLocation(57, 25);cin>>mark4;
    SetLocation(57, 28);cin>>mark5;
    SetLocation(57, 31);cin>>mark6;
    total = mark1 + mark2 + mark3 + mark4 + mark5 + mark6;
    avg = total / 6;
    if(avg>100) avg = 100;
    //-----------------------------------//
    if(avg<=100 && avg>90)     grade = 'A';
    else if(avg<=90 && avg>80) grade = 'B';
    else if(avg<=80 && avg>70) grade = 'C';
    else if(avg<=70 && avg>60) grade = 'D';
    else if(avg<=50 && avg>70) grade = 'E';
    else                       grade = 'F';
}
void Student::Output(int y)
{
    Output_String(67, 1, ">>>List of Student<<<", 6);
    DrawBox(3, 3, 157, 200); DrawBox(3, 4, 157, 200); DrawBox(3, 5, 157, 200);
    Output_String(5, 4, "Id", 4);
    Output_String(15, 4, "Student Name", 4);
    Output_String(35, 4, "Sex", 4);
    Output_String(46, 4, "Mark1", 4);
    Output_String(59, 4, "Mark2", 4);
    Output_String(72, 4, "Mark3", 4);
    Output_String(85, 4, "Mark4", 4);
    Output_String(98, 4, "Mark5", 4);
    Output_String(111, 4, "Mark6", 4);
    Output_String(125, 4, "Total", 4);
    Output_String(138, 4, "Average", 4);
    Output_String(153, 4, "Grade", 4);

    SetTextColor(14);
    SetLocation(5, y); cout << id;
    SetLocation(15, y); cout << name;
    SetLocation(35, y); cout << sex;
    SetLocation(46, y); cout << mark1;
    SetLocation(59, y); cout << mark2;
    SetLocation(72, y); cout << mark3;
    SetLocation(85, y); cout << mark4;
    SetLocation(98, y); cout << mark5;
    SetLocation(111, y); cout << mark6;
    SetLocation(125, y); cout <<total;
    SetLocation(138, y); cout << avg;
    SetLocation(153, y); cout << grade;
}
void SearchDesign()
{
    small_line(0, 2, 164, 1);
    Output_String(54, 1, ">>>>>>>>>>>>>>>>>>>>Searching Function<<<<<<<<<<<<<<<<<<<<<<",1);
    box( 54,3,113,5,9);
    Output_String(71, 4, "Searching by ID of Student", 14);
    TextBox(55, 4, 15, 6);
    TextBox(98, 4, 15, 6);
    box( 54,6,83,8,9);
    Output_String(55, 7, "Enter ID :",14);
}
void Menu()
{
    box(63, 8, 100, 24,10); small_line(65, 9, 34, 5); small_line(65, 11, 34, 5);
    SetLocation(80, 10);
    SetTextColor(12);
    cout << "MENU";
    TextBox(65, 10, 15, 4);
    TextBox(84, 10, 15, 4);
    Output_String(70, 13, "[1]. Add Information", 1);
    Output_String(70, 14, "[2]. Display Information", 1);
    Output_String(70, 15, "[3]. Search Information", 1);
    Output_String(70, 16, "[4]. Delete Information", 1);
    Output_String(70, 17, "[5]. Update Information", 1);
    Output_String(70, 18, "[6]. Insert Information", 1);
    Output_String(70, 19, "[0]. Exit Program", 1);
    small_line_Row(12, 19, 69, 5); small_line_Row(12, 19, 94, 5);
    small_line(65, 20, 34, 5);
    SetLocation(69, 22);
    SetTextColor(13);
    cout << "Choose [1/2/3/4/5/6/7] : ";
}
int main()
{
    
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.top, r.top, 1350, 650,TRUE);
    //----------------------------------------------//
    Student Stu;
    fstream file;
    int i, Option,n;
    do
    {
        system("cls");
        Menu();
        SetLocation(94, 22); cin >> Option;
        switch(Option)
        {
        	case 0:{
				exit(0);
			}break;
            case 1 :
            {
                file.open("StudentDatabase.bin",ios::out | ios::binary);
                system("cls");
                box(1, 1,20, 3, 1);
                Output_String(2, 2, "Enter N : ", 2);
                SetLocation(12, 2);cin >> n;
                for (i = 0; i < n;i++)
                {
                    system("cls");
                    Stu.Input();
                    file.write((char *)&Stu, sizeof(Stu));
                }
                file.close();
            }
            break;
            case 2 :
            {
                system("cls");
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                int y = 7,a=8;
                
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    Stu.Output(y);
                    small_line(5, a, 149, 1);
                    y += 2;
                    a += 2;
                }
                file.close();
            }
            break;
            case 3 :
            {
                system("cls");
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                small_line(0, 35, 164, 1);
                int SearchChoice;
                bool Result = false;
                char  SearchName[100], SearchID[100];
                SearchDesign();

                SetLocation(67, 7);
                cin.ignore();
                cin.getline(SearchID, 100);
                int y = 7;
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    if(strcmp(Stu.getID(),SearchID)==0)
                    {
                        Result = true;
                        system("cls");
                        Stu.Output(y);
                        small_line(0, 8, 164, 1);
                        Output_String(66, 9, ">>Sucessful Searching<<",3);
                    }
                }
                file.close();
                if(Result==false)
                {
                    Output_String(72, 17, "You enter the wrong Data record!",4);
                }
            }
            break;
            case 4 :
            {
                system("cls");
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                int y = 7,a=8,count;
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    Stu.Output(y);
                    small_line(5, a, 149, 1);
                    y += 2;
                    a += 2;
                }
                count = y;
                file.close();

                small_line(0, count + 2, 164, 14);
                box( 0,count+3,30,count+5,4);
                bool Check = false;
                fstream deletefile;
                char DeleteID[100];
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                deletefile.open("NewRecord.bin", ios::out | ios::binary);
                Output_String(60, count + 1, "Delete the information of Student.",5);
                Output_String(1, count + 4, "Delete ID : ", 14);
                SetLocation(15, count + 4);
                cin.ignore();
                cin.getline(DeleteID, 100);
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    if(strcmp(Stu.getID(),DeleteID)==0)
                    {
                        Check = true;
                    }
                    else
                    {
                        deletefile.write((char *)&Stu, sizeof(Stu));
                    }
                }
                file.close();
                deletefile.close();

                if(Check==false)
                {
                    system("cls");
                    Output_String(65, count+17, "You enter the wrong data!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                else
                {
                    system("cls");
                    Output_String(65, count+17, "This information have been Delete!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                remove("StudentDatabase.bin");
                rename("NewRecord.bin", "StudentDatabase.bin");
            }
            break;
            case 5 :
            {
                system("cls");
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                int y = 7,a=8,count;
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    Stu.Output(y);
                    small_line(5, a, 149, 1);
                    y += 2;
                    a += 2;
                }
                count = y;
                file.close();

                small_line(0, count + 2, 164, 14);
                box( 0,count+3,30,count+5,4);
                bool Check = false;
                fstream searchfile;
                char UpdateID[100];
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                searchfile.open("NewRecord.bin", ios::out | ios::binary);
                Output_String(60, count + 1, "Update the information of Student.",6);
                Output_String(1, count + 4, "Update ID : ", 14);
                SetLocation(14, count + 4);
                cin.ignore();
                cin.getline(UpdateID, 100);
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    if(strcmp(Stu.getID(),UpdateID)==0)
                    {
                        system("cls");
                        Check = true;
                        Stu.Input();
                        searchfile.write((char *)&Stu, sizeof(Stu));
                    }
                    else
                    {
                        searchfile.write((char *)&Stu, sizeof(Stu));
                    }
                }
                file.close();
                searchfile.close();

                if(Check==false)
                {
                    system("cls");
                    Output_String(65, count+17, "You enter the wrong data!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                else
                {
                    system("cls");
                    Output_String(65, count+17, "This information have been Update!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                remove("StudentDatabase.bin");
                rename("NewRecord.bin", "StudentDatabase.bin");
            }
            break;
            case 6 :
            {
                system("cls");
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                int y = 7,a=8,count;
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    Stu.Output(y);
                    small_line(5, a, 149, 1);
                    y += 2;
                    a += 2;
                }
                count = y;
                file.close();

                small_line(0, count + 2, 164, 14);
                box( 0,count+3,30,count+5,4);
                bool Check = false;
                fstream insertfile;
                Student Stu1;
                char FindID[100];
                file.open("StudentDatabase.bin",ios::in | ios::binary);
                insertfile.open("NewRecord.bin", ios::out | ios::binary);
                Output_String(60, count + 1, "Insert the information of Student.",6);
                Output_String(1, count + 4, "Search ID : ", 14);
                SetLocation(14, count + 4);
                cin.ignore();
                cin.getline(FindID, 100);
                while(file.read((char *)&Stu, sizeof(Stu)))
                {
                    if(strcmp(Stu.getID(),FindID)==0)
                    {
                        system("cls");
                        Check = true;
                        Stu1.Input();
                        insertfile.write((char *)&Stu1, sizeof(Stu1));
                        insertfile.write((char *)&Stu, sizeof(Stu));
                    }
                    else
                    {
                        insertfile.write((char *)&Stu1, sizeof(Stu1));
                    }
                }
                file.close();
                insertfile.close();

                if(Check==false)
                {
                    system("cls");
                    Output_String(65, count+17, "You enter the wrong data!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                else
                {
                    system("cls");
                    Output_String(65, count+17, "This information have been Insert!", 4);
                    small_line(0, count + 18, 164, 14);
                }
                remove("StudentDatabase.bin");
                rename("NewRecord.bin", "StudentDatabase.bin");
            }
            break;
        }
        Output_String(65, 36, ">>>Press any key to go back to Menu<<<",2);
        getch();
    } while (1);

    getch();
    return 0;
}
