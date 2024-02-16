/*
write a C++ program that will read name,fathers name,mothers name,address, class, roll and marks
of 5 subject and print result.
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string name,fname,mname,address,grade,clas;
	string subject_name[5]={" S.Science "," Science "," Maths "," English "," Hindi "};
	string additional_subject[3]={" "," Sanskrit "," Computer "};
	int roll,i,selected_additional_sub, additional_sub_obtained_marks;
	int full_marks[5]={100,100,100,100,100};
	int obtained_marks[5]={0};
	cout<<" Enter Your Name :";
	getline(cin,name);
	cout<<" Enter Your Mother's Name :";
	getline(cin,mname);
	cout<<" Enter Your Father's Name :";
	getline(cin,fname);
	cout<<" Enter Your Address :";
	getline(cin,address);
	cout<<" Enter Your Class:";
	getline(cin,clas);
	cout<<" Enter Your Roll_No:";
	cin>>roll;
	if(roll>0)
	roll=roll;
	else if(roll<=0)
	{
		cout<<" Sorry! Roll_No Can't Be Zero(0) Or Negative(-).";
		cout<<endl<<" Enter Your Roll_No:";
		cin>>roll;
	}
	
	cout<<endl<<" Enter The Marks Below:";
	cout<<endl<<"-----------------------------";
	for(i=0;i<5;i++)
	{
		cout<<endl<<" Enter The Marks Of "<<subject_name[i]<<" (0-"<<full_marks[i]<<"):";
		cin>>obtained_marks[i];
		if(obtained_marks[i]<0 || obtained_marks[i]>full_marks[i] )
		{
			cout<<endl<<" Please Enter The Marks Between Range As Shown Below.";
			i--;
		}
	}
	
	do
    {
        //code to print all additional subject
        cout<<endl<<" Choose Your Additional Subject Between Sanskrit Or Computer."<<endl;
        for(int i=1;i<3;i++)
        {
            cout<<"  ("<<i<<")"<<additional_subject[i];
        }
        cout<<endl<<" Enter The Code Of Additional Subject (1/2): ";
        cin>>selected_additional_sub;
        if(selected_additional_sub<1|| selected_additional_sub>=3)
        {
            cout<<endl<<" Please Enter Valid Subject Code. ";
        }
        else
        break;
    }
    while(1);
    cout<<" Enter The Marks Of Additional Paper ("<<additional_subject[selected_additional_sub]<<"): ";
    cin>>additional_sub_obtained_marks;
    
	int total_full_marks=0, total_obtained_marks=0;
	for(i=0;i<5;i++)
	total_full_marks+=full_marks[i];
	
	for(i=0;i<5;i++)
	total_obtained_marks+=obtained_marks[i];
	
	float per=(total_obtained_marks*100)/total_full_marks;
	
	if(per>=60)
    grade="First";
	else if(per>=40)
	grade="Second";
	else if(per>=30)
	grade="Third";
	else
	grade="Fail";
	
	system("cls");
	cout<<endl<<"----------------------------";
	cout<<endl<<"\tResult";
	cout<<endl<<"----------------------------";
	cout<<endl<<" Name		 :"<<name;
	cout<<endl<<" Mother's name	 :"<<mname;
	cout<<endl<<" Father's name	 :"<<fname;
	cout<<endl<<" Class		 :"<<clas;
	cout<<endl<<" Roll_no	 :"<<roll;
	cout<<endl<<" Address	 :"<<address;
	cout<<endl<<"----------------------------------------------------";
	cout<<endl<<"\t\tMarks Details";
	cout<<endl<<"----------------------------------------------------";
	cout<<endl<<" Total Subjects"<<"\t Total Marks"<<"\tTotal Obtained Marks";
	cout<<endl<<"-----------------------------------------------------";
	for(i=0;i<5;i++)
	cout<<endl<<setw(13)<<subject_name[i]<<setw(12)<<full_marks[i]<<setw(12)<<obtained_marks[i];
	cout<<endl<<"-----------------------------------------------------";
	cout<<endl<<" Total"<<setw(19)<<total_full_marks<<setw(12)<<total_obtained_marks;
	cout<<endl<<"-----------------------------------------------------";
	cout<<endl<<" Percentage    :"<<per<<"%"<<endl<<" Grade         :"<<grade;
	cout<<endl<<" Additional Subject"<<endl<<additional_subject[selected_additional_sub]<<setw(8)<<"100"<<setw(8)<<additional_sub_obtained_marks;
	return 0;
}



/*
write a C++ program that will read name,fathers name,mothers name,address, class, roll and marks
of 5 subject and print result.


#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name,fname,mname,address,grade;
    char subjects[5];
	int roll,clas,maths,eng,hindi,sci,sst;
	
	cout<<"Enter your name :";
	getline(cin,name);
	cout<<"Enter your mother's name :";
	getline(cin,mname);
	cout<<"Enter your father's name :";
	getline(cin,mname);
	cout<<"Enter your address :";
	getline(cin,address);
	cout<<"\nEnter your roll_no:";
	cin>>roll;
	cout<<"\nEnter your class:";
	cin>>clas;
	cout<<"Enter your marks :";
	cout<<"\nEnter the marks of maths subject:";
	cin>>maths;
	cout<<"Enter the marks of hindi subject:";
	cin>>hindi;
	cout<<"Enter the marks of engish subject:";
	cin>>eng;
	cout<<"Enter the marks of science subject:";
	cin>>sci;
	cout<<"Enter the marks of s.st subject:";
	cin>>sst;
		
	float tmarks=maths+eng+hindi+sci+sst;
	float per=tmarks/5;
	if(per>=60)
	grade="First";
	if(per>=50)
	grade="Second";
	if(per>=40)
	grade="Third";
	else
	grade="Fail";
	
	cout<<"\n----------------------------";
	cout<<"\n\n\tResult";
	cout<<"\n----------------------------";
	cout<<"\nName: "<<name;
	cout<<"\nMother's name: "<<mname;
	cout<<"\nFather's name: "<<fname;
	cout<<"\nRoll_no: "<<roll;
	cout<<"\nAddress: "<<address;
	cout<<"\nClass: "<<clas;
	cout<<"\nMarks of all subject:-";
	sprintf(subjects, "\nMaths: %d",maths);
		cout<<subjects;
	sprintf(subjects, "\nEnglish: %d",eng);
		cout<<subjects;
	sprintf(subjects, "\nHindi: %d",hindi);
		cout<<subjects;
	sprintf(subjects, "\nScience: %d",sci);
		cout<<subjects;
	sprintf(subjects, "\nSocial Science: %d",sst);
		cout<<subjects;
	sprintf(subjects, "\nTotal Marks and Percentage of all subjects is: %f and %f",tmarks,per);
	cout<<subjects;
	cout<<"\nGrade: "<<grade;
	return 0;
}
*/