#include<iostream>
using namespace std;
class  Demo
{
    private:
    static int x;
    int  y;
    int z;
    public:
    	
    Demo()
    {
    	//static member should not ber initialized here
    	y=0;
		z=0;	
	}
	Demo(int y, int z)
	{
		this->y=y;
		this->z=z;
	}
	void show()
	{
		cout<<"\nx="<<x<<",y="<<y<<",and z="<<z;
	}
	static void setx(int x)
	{
		//this function hasno "this" pointer
		Demo::x=x;
		//y+=1;
	}
};
 int Demo::x;//static member declaration
Demo ob5;
int main()
{
	Demo ob1,ob2(10,20),ob3(45,78);
	ob1.show();//x=0,y=0 and z=0
	ob2.show();//x=0,y=10 and z=20
	ob3.show();//x=0,y=45 and z=78
	
	Demo::setx(12);
	ob1.show();//x=12,y=0 and z=0
	ob2.show();//x=12,y=10 and z=20
	ob3.show();//x=12,y=45 and z=78
	{
		Demo ob4;
	}
	
	return 0;
	
}