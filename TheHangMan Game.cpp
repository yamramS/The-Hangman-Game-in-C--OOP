//Hangman game-> guess the word correctly or get hanged
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

//using namespace std;

const int tries=6;
class theGame{
	
private:
 
 //member variables
	char guessedletter;
	int tries;
    bool correctguess=false;
	std::string sword; 
	
	
public:
		theGame(){
			tries= 6;	
		}
		
		theGame( std:: string w){
			
			sword= w;
	
		}
		
		void setdata(std::string w){
			sword= w;
		}
		void  guessletter( std::string w);
		//void show_secretword(std::string);

	
	};

     void theGame::guessletter(std::string w)
     {
     	
     	
     	std::cout<<w<<std::endl;
     	std:: cout<<"You have " << tries<<" number of tries"<<std::endl;
        std::string secretword(sword.length(), '*');  //replaces each letter with * to make a mystery word
     
     while(tries>=0)
         {//reset bool
         	
			correctguess= false;  
	
	//information about word
	std:: cout<<"The word is " << secretword<<std::endl;
    std::cout<<std::endl;
    std:: cout<<"\n\nThere are "<< secretword.length() << " letters in the word"<<std::endl;
    std::cout<<"Only "<<tries<<" tries has left\n\n"<<std::endl;
     
     
			//player guess the letter
         	 std:: cout<<"Guess the Letter____"<<std::endl;
             std::cin>> guessedletter;
             
         	//check if letter is there?
         	for(int i=0; i <secretword.length(); i++ )
            { 
			 
         	   if( sword[i]== guessedletter)
         	   {
				
         	       secretword[i]= guessedletter;
                   correctguess= true;
		       }
		   
	        }
	if(sword==secretword){
	
	std::cout<<"\n Congratulations!!!You Got the word right: "<<secretword<<std::endl;
    break;
}
	
	if(correctguess==false){
	tries--;
	std::cout<<"Its not part of the word"<<std::endl;
}

else{
	std::cout<<"\n********************************************"<<std::endl;
	std::cout<<"Yess "<<guessedletter<<" is part of the word "<<std::endl;
    std::cout<<"\n********************************************"<<std::endl;
}

switch(tries)
{

  case 6:
    {
   std::   cout << " ___________"<<std::endl;
   std::   cout << " |        }"<<std::endl;
   std::   cout << " |         " <<std::endl;
   std::   cout << "_|______________\n\n"<<std::endl;
   
   break;
    }
    
    case 5:
    {
      std::  cout << " ___________"<<std::endl;
      std::  cout << " |        }"<<std::endl;
      std::  cout << " |       \\  " <<std::endl;
      std::  cout << "_|______________"<<std::endl;
       std::  cout << "|______________"<<std::endl;
       
       break;
    }
    
   case 4:
    {
     std::   cout << " ___________"<<std::endl;
     std::   cout << " |         }"<<std::endl;
     std::   cout << " |       \\ 0 " <<std::endl;
     std::   cout << "_|______________"<<std::endl;
     
     break;
    }
    
    case 3:
    {
    std::    cout << " ___________"<<std::endl;
    std::    cout << " |         }"<<std::endl;
    std::    cout << " |       \\ 0 /" <<std::endl;
    std::    cout << "_|______________"<<std::endl;
     
    
    break;
    }
    
    case 2:
    {
     std::   cout << " ___________"<<std::endl;
     std::   cout << " |        }"<<std::endl;
     std::  cout << " |      \\ 0 /" <<std::endl;
     std::   cout << " |        |"<<std::endl;
     std::   cout << "_|______________"<<std::endl;
     
     break;
    }
   
   
   case 1:
    {
     std::   cout << " ___________"<<std::endl;
     std::   cout << " |         }"<<std::endl;
     std::   cout << " |       \\ 0 /"<<std::endl;
     std::   cout << " |         | "<<std::endl;
     std::   cout << " |        /  "<<std::endl;
     std::   cout << "_|______________"<<std::endl;
     
     break;
    }
    
    case 0 :
    {
     std::   cout << " ___________"<<std::endl;
     std::   cout << " |         }"<<std::endl;
     std::   cout << " |       \\ 0 /"<<std::endl;
     std::   cout << " |         | "<<std::endl;
     std::   cout << " |        / \\ "<<std::endl;
     std::   cout << "_|______________"<<std::endl;
     std::cout<<"\nGame over!!!"<<std::endl;
     tries= -1;
     break;
    }
}
}
}



int main(){
	
	 char start{};
	 std::   cout <<"         ********************"<<std::endl;
	 std:: cout<<   "         *    HANGMAN GAME  *"<<std::endl;
	 std::   cout <<"         ********************"<<std::endl;
	 std:: cout<<std::endl;
	 std:: cout<<std::endl;
	 std::   cout << " _______________"<<std::endl;
     std::   cout << " |         }    "<<std::endl;
     std::   cout << " |      \   0 / "<<std::endl;
     std::   cout << " |         |    "<<std::endl;
     std::   cout << " |        / \\  "<<std::endl;
     std::   cout << "_|              "<<std::endl;
      std::  cout << "_|______________"<<std::endl;
     std::   cout<<"press any key to start ";
      std::  cin>>start;
      std::cin.ignore(1000000000, '\n');
    
	    std::string acword;
	    theGame word;
	    std::string words[] =
	{
		"india",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"australia",
		"iran",
		"ethiopia",
		"oman",
		"indonesia"
	};

	//choose and copy a word from array of words randomly
	srand(time(NULL));
	int n=rand()% 10;   // it will return the random word from array
	acword=words[n]; 

	   
       
	  // std::cout<<"Enter the secretword for the Player:"<<std::endl;
	  // std::cin>>acword;
	   
	    word.setdata(acword);
        word.guessletter(acword);
  
        return 0;
    }