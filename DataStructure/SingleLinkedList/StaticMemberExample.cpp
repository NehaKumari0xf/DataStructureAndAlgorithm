#include<iostream>
using namespace std;
class Student
{
	private:
		int roll;
		int marks;
		int objNo;
		static int totalObject;
	public:
		Student()
		{
			totalObject++;
			roll=0;
			marks=0;
			objNo=totalObject;
		}
		Student(int roll,int marks)
		{
			totalObject++;
			this->roll=roll;
			this->marks=marks;
			this->objNo=totalObject;
		}
		void show()
		{
			cout<<endl<<"Obj No="<<objNo<<", Roll="<<roll<<", marks="<<marks;
		}
};
//define static member
int Student::totalObject=0;

int main()
{
	Student  neha,kajal(14,85),anshu(15,89),sheetal;
	neha.show();
	kajal.show();
	sheetal.show();
	anshu.show();
	neha.show();
}
