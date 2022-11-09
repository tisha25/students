#include <iostream>
using namespace std;

class students

{
	private:
		int stu_id;
		char  stu_name[30];
		int   stu_age;
		char stu_course[50];
		char stu_email[10];
		char stu_city[50];
		char stu_collage[50];
public:
	void setter(){		
	cout<<"Enter  the stu_Id : ";
	cin >>stu_id ;
	cout << "Enter the stu_name: " ;
	cin >> stu_name;
	cout << "Enter the stu_Age: ";
	cin >> stu_age;
	cout<<"Enter the stu_course : ";
	cin>>stu_course;
	cout<<"Enter the stu_email: ";
	cin>>stu_email;
	cout<<"Enter stu_City : ";
	cin>>stu_city;
	cout<<"Enter the stu_collage : ";
	cin>>stu_collage;
	cout<<endl;
}

	void getter(){
		cout<<"\nyour value are hear::";
		cout<<"\n stu_id"<<stu_id;
		cout<<"\n stu_name"<<stu_name;
		cout<<"\n stu_age"<<stu_age;
		cout<<"\n stu_course"<<stu_course;
		cout<<"\n stu_email"<<stu_email;
		cout<<"\n stu_city"<<stu_city;
		cout<<"\n stu_collage"<<stu_collage<<end1;
	}
	
int main(){

  students obj1,obj2,obj3,obj4,obj5;
  obj1.getter();
  obj1.getter(); 
  obj2.getter();
  obj2.getter();
  obj3.getter();
  obj3.getter();
  obj4.getter();
  obj4.getter();
  obj5.getter();
  obj5.getter();
}
  
  	
  

