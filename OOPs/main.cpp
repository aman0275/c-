#include<bits/stdc++.h>
using namespace std;


class Car{
 string name;
 int speed;
 int weight;
 public:
 	Car(string name,int speed,int weight){
 		this->name = name;
 		this->speed= speed;
 		this->weight = weight;
 	}
 	// copy constructor
 	Car (Car &a){
 		name = "copy const";
 		speed= a.speed;
 	}

 	void printObj(){
 		cout<< name<<endl;
 		cout<< speed<<endl;
 		cout<< weight<<endl;
 	}

};


class ElectricCar : public Car{
	int miles;
	int batteryLeft;

	public:
	 ElectricCar(string name , int speed , int weight,int miles, int batteryLeft):Car(name,speed,batteryLeft){
	 	this->miles = miles;
	 	this->batteryLeft = batteryLeft;
	 }

	 void printObjChild(){
 		cout<< miles<<endl;
 		cout<< batteryLeft<<endl;
 	} 	
};


int main(){

	Car a("ford",200,2000);
	a.printObj();

	Car b(a);
	b.printObj();

	cout<<"inheritance - "<<endl;
	ElectricCar ev("Tesla",340,1400,569,50);
	ev.printObjChild();
	ev.printObj();

}