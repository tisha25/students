#include <iostream>
using namespace std;

class customers {
	private:
		int cust_id;
		char  cust_name[30];
		int   cust_age;
		char cust_telecome_brand_name[50];
		int cust_mobilenumber;
		char cust_city[50];
		char cust_collage[50];
public:
	void setter(){		
	cout<<"Enter  the cust _Id : ";
	cin >>cust_id ;
	cout << "Enter the cust_name: " ;
	cin >> cust_name;
	cout << "Enter the cust_Age: ";
	cin >> cust_age;
	cout<<"Enter the cust_telecome_brand_name : ";
	cin>>cust_telecome_brand_name;
	cout<<"Enter the cust_mobile_number: ";
	cin>>cust_mobile_number;
	cout<<"Enter cust_City : ";
	cin>>cust_city;
	cout<<"Enter the cust_simcard_validity : ";
	cin>>cust_simcard_validity;
	cout<<endl;
}

	void getter(){
		cout<<"\nyour value are hear::";
		cout<<"\n cust_id"<<cust_id;
		cout<<"\n cust_name"<<cust_name;
		cout<<"\n cust_age"<<cust_age;
		cout<<"\n cust_telecome_brand_name"<<cust_telecome_brand_name;
		cout<<"\n cust_email"<<cust_mobile_number;
		cout<<"\n cust_city"<<cust_city;
		cout<<"\n cust_simcard"<<cust_simcard<<end1;
	}
};
	
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
  
