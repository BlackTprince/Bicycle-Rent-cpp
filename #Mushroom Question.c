#include<iostream>
using namespace std;

string identifyMushroom();

void askQuestion(string question, int answer)
{
	cout<< question <<" (1 or 0): ";
	cin>>answer;
}

string identifyMushroom()
{
	int answer;
	string mushroom;
	
	
	askQuestion("Does your mushroom have gills?", answer); //ask about gills and pores
	if(answer == 1)
	{
		askQuestion("Does your mushroom grow in forest?", answer);//ask about forest and meadow
		if(answer == 1)
		{
			
			askQuestion("Does your mushroom have a convex cap?", answer);//ask about convex cap
			if(answer == 1)
			{
				
				askQuestion("Does your mushroom have a ring?", answer);//ask about ring
				if(answer == 1)
				{
					mushroom = "Amanite tuemouche";
				}
				else
				{
					mushroom = "Pied bleu";
				}
			}
			else
			{
				mushroom = "Girolle";
			}
		}
		else
		{
			
			askQuestion("Does your mushroom have a Convex cap?", answer);//ask about convex cap
			if(answer == 1)
			{
				mushroom = "Agaric Jaunissant";
			}
			else
			{
				mushroom = "Coprin chevelu";
			}
		}
	}
	else
	{
		mushroom = "Cepe de bordeau";
	}
	
	return mushroom;
}

int main()
{
	cout<<"\n\nThink a mushroom and answer the following questions (1 for yes and 0 for no) to get the name of mushroom you thought\n\n";
	string identifiedMushroom = identifyMushroom();
	cout<<"\n\nThe mushroom you have in mind is: "<<identifiedMushroom <<endl;
	
	return 0;
	
}

