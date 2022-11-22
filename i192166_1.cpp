#include<iostream>
#include<string.h>
using namespace std;


class Workshop{
	public:                              //hello
		virtual void getWorkshop(){
			cout<<"hello i am workshop"<<endl; //printing
		}
	
};

class produce: public Workshop{
	public:
		void getWorkshop(){
			cout<<"hello i am workshop"<<endl;  //printing
		}
		
};

class assemble: public Workshop{
	public:
		void getWorkshop(){
			cout<<"hello i am workshop"<<endl;   printing
		}
		
	
};
class struct
	
	var =0;
class Vehicle{
	public:
		produce _pro;
		assemble _assem;
		virtual void getVehicle(){          getting vehicle
			cout<<"hello i am vehicle"<<endl; printing
		}
		
	

};

class bike: public Vehicle{
	public:
		void _getVehicle(){
			cout<<"hello i am vehicle"<<endl;
		}
};

class bus: public Vehicle{
	public:
		void getVehicle(){
			cout<<"hello i am vehicle"<<endl;
		}
};


int main(){
	
	bike bik;
	bik.pro.getWorkshop();
	bik.assem.getWorkshop();
	
	cout<<endl;
	cout<<endl;
	
	bus bu;
	bu.assem.getWorkshop();
	bu.pro.getWorkshop();
	
	
	
	
}



