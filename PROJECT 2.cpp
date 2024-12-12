#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace  std;
int main(){   


int number;
int answer;
int score = 0;

srand(time(NULL));


number =rand() %10 +1;
do{
	
	cout<<"enter your guess (1-10) ";
	cin>> answer;
	
	if(answer > number){
		cout<<"that's high";
		cout<<"\n";
		
		
	}
		else if(answer< number){
			cout<<"that's low";
			cout<<"\n";
			
		}
		else{
		
		cout<<"congra";
		cout<<"\n";
		}
		score++;
		}
		
		while( number != answer);
		{
		
		
		cout<<"\nNumber is"<<number;
		cout<<"\nguesses"<<score;
		cout<< "\n";
		}
		
		
		
		
	
	
			return 0;

	 }
