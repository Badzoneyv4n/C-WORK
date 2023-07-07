#include <iostream>

//Global variables
int Start_hour;
int End_hour;

int RentAmount(int Start, int End);

int main(){
	
	check_1:
	std::cout<<"\n Enter The starting hour (No decimals allowed) : ";
	std::cin>>Start_hour;
	
	check_2:
	std::cout<<"\n Enter The ending hour (No decimals allowed) : ";
	std::cin>>End_hour;
	
	// Check if EndHour is greater than StartHour
	if (Start_hour >= End_hour){
		std::cout<<"\n Error: The starting hour should be always less than The ending time : ";
		goto check_1;
	}

	// Check if The StartHour is between 0 and 23
	if(Start_hour < 0 || Start_hour > 23){
		std::cout<<"\n Error : The starting hour should be between 0 and 23";
		goto check_1;
	}
	
	// Check if EndHour is below 24 
	if(End_hour > 24){
		std::cout<<"\n Error : No rental span more than 24 hours";
		goto check_2;
	}
	
	//Check if EndHour is between 1 and 24
	if(End_hour < 1 || Start_hour > 24){
		std::cout<<"\n Error : End hour should be between 1 and 24";
		goto check_2;
	}
	
	RentAmount(Start_hour,End_hour); //Renting amount
	return 0;
}

/** FUNCTION TO CLACULATE RENTING AMOUNT*/
int RentAmount(int Start, int End){
	int amount;
	
	//Renting amount between 0h and 7h 
	if(Start >= 0 && End <= 7){
		amount = (End-Start)*500;
		std::cout<<"\n You'll pay 500 rwf/hour, please pay "<<amount<<" rwf"<<std::endl;
	}
	else //Renting amount between 21h and 24h
	if(Start >= 21 && End <= 24){
		amount = (End-Start)*500;
		std::cout<<"\n You'll pay 500 rwf/hour, please pay "<<amount<<" rwf"<<std::endl;
	}
	else //Renting amount between 7h and 14h
	if(Start >= 7 && End <= 14){
		amount = (End-Start)*1000;
		std::cout<<"\n You'll pay 1000 rwf/hour, please pay "<<amount<<" rwf"<<std::endl;
	}
	else //Renting amount between 19h and 21h
	if(Start >= 19 && End <= 21){
		amount = (End-Start)*1000;
		std::cout<<"\n You'll pay 1000 rwf/hour, please pay "<<amount<<" rwf"<<std::endl;
	}
	else //Renting amount between 14h and 19h
	if(Start >= 14 && End <= 19){
		amount = (End-Start)*1500;
		std::cout<<"\n You'll pay 1500 rwf/hour, please pay "<<amount<<" rwf"<<std::endl;
	}
	else
		std::cout<<"\n Time specified isn't available for rent ";
	
	return 0;
}
