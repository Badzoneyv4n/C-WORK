#include <iostream>

//Global variables
bool HaveGills = true; 
bool GrowInForest = true;
bool HasConvex = true;
bool HasRing  = true;

std::string Mushroom(); //This will display the name of the mushroom

int main(){
	
	std::string answer; //hold the answer
	
	std::cout<<"\n Think of a mushroom and answer the following questions with [yes/no] "<<std::endl;
	
	std::cout<<"\n 1) Does your mushroom have gills "<<std::endl;
	std::cin>>answer;
		if(answer == "no"){
			HaveGills = false;
		}
	std::cout<<"\n 2) Does your mushroom grow in forest "<<std::endl;
	std::cin>>answer;
		if(answer == "no"){
			GrowInForest = false;
		}
	
	std::cout<<"\n 3) Does your mushroom have a convex cup "<<std::endl;
	std::cin>>answer;
		if(answer == "no"){
			HasConvex = false;
		}
	
	std::cout<<"\n 4) Does your mushroom have a ring "<<std::endl;
	std::cin>>answer;
		if(answer == "no"){
			HasRing = false;
		}
	
	//display the name of the mushroom if it is known
	std::cout<<"\n Your mushroom is "<<Mushroom()<<std::endl;
	
	return 0;
}

//Check the name of the mushroom

std::string Mushroom(){
	std::string name;
		
		if ( (HaveGills == true) && (GrowInForest == false) && (HasConvex == true) && (HasRing == true) ){
			name = "Agaric Jaunissant";
		}
		else
		if ( (HaveGills == true) && (GrowInForest == true) && (HasConvex == true) && (HasRing == true) ){
			name = "Amanite Tue-mouche";
		}
		else
		if ( (HaveGills == false) && (GrowInForest == true) && (HasConvex == false) && (HasRing == false) ){
			name = "Cepe De Bordeau";
		}
		else
		if ( (HaveGills == true) && (GrowInForest == false) && (HasConvex == false) && (HasRing == true) ){
			name = "Coprin Chevelu";
		}
		else
		if ( (HaveGills == true) && (GrowInForest == true) && (HasConvex == false) && (HasRing == false) ){
			name = "Girolle";
		}
		else
		if ( (HaveGills == true) && (GrowInForest == true) && (HasConvex == true) && (HasRing == false) ){
			name = "Pied Bleu";
		}
		else{
			name = "Unkown";
		}
		
	return name;
}
