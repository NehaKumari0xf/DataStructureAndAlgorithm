//Write a C++ program that will accept 5 names and print all names in ascending order.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string names[5],temp;
    // Accept 5 names from the user
    for (int i = 0; i < 5; i++) {
        cout << "Enter name #" << i+1 << ": ";
        getline(cin,names[i]);
    }
	    for (int i = 0; i < 5-1; i++) {
	     for (int j = i+1; i < 5; ++j) {
				if(names[i]>names[j])
				{
					temp=names[i];
					names[i]=names[j];
					names[j]=temp;
				}
			}
		}
		cout<<"names in ascending order:"<<endl;
        for (int i = 0; i < 5; i++) {			
			cout<<names[i]<<endl;
			}

    return 0;
}
