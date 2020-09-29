#include<iostream>
#include<cstdlib>
#include<string>
#include<windows.h>
#include<conio.h>

using namespace std;

int tag=0;

struct Node
{
string name1;
string place1;
string animal1;
string thing1;
int flag;
};

class Player 
{
private:
int points1;
int points2;
char letter;
string name;
string place;
string animal;
string thing;
public:
Player()
    {
	letter=' ';
	name=" ";
	place=" ";
	animal=" ";
	thing=" ";
	points1=0;
	points2=0;
	}	
void offend();
void defend();
void result();
};

void Player :: offend()
{
cout<<"\t\t\tOpponent please enter the letter you want to give to the defender!"<<endl;	
cin>>letter;
if(isalpha(letter))
defend();
else
{
	cout<<"You entered the wrong character!"<<endl;
	cout<<"Please enter a correct choice!"<<endl;
	offend();
}
}

void Player :: defend()
{
cout<<"\t\t\t\t\t\tDefender be ready!"<<endl;
cout<<"\t\t\t\t\t  The letter given to you is "<<letter<<endl;
cout<<"\t\t\t\t  You get 10 secs to enter each of your answer!"<<endl;
Sleep(4000);

struct Node* new_node;
new_node= new Node;

new_node->name1=" ";
new_node->place1=" ";
new_node->animal1=" ";
new_node->thing1=" ";
new_node->flag=0;

cout<<"Enter a name starting with letter "<<letter<<endl;
    for(int i=0; i<10; i++)
    {
	Sleep(1000);
	if(kbhit())
	{
	cin>>name;
	break;
    }
    }
cout<<"Enter a place starting with letter "<<letter<<endl;
     for(int i=0; i<10; i++)
    {
	Sleep(1000);
	if(kbhit())
	{
	cin>>place;
	break;
    }
    }
cout<<"Enter a animal starting with letter "<<letter<<endl;
     for(int i=0; i<10; i++)
    {
	Sleep(1000);
	if(kbhit())
	{
	cin>>animal;
	break;
    }
    }
cout<<"Enter a thing starting with letter "<<letter<<endl;
     for(int i=0; i<10; i++)
    {
	Sleep(1000);
	if(kbhit())
	{
	cin>>thing;
	break;
    }
    }
    
    if(name[0]==letter)
    {
    new_node->name1=name;
    new_node->flag=(new_node->flag)+1;
    }
    if(place[0]==letter)
    {
       new_node->place1=place;
       new_node->flag=(new_node->flag)+1;
	}
    if(animal[0]==letter)
	{
		new_node->animal1=animal;
		new_node->flag=(new_node->flag)+1;
	}
    if(thing[0]==letter)
    {
   	    new_node->thing1=thing;
        new_node->flag=(new_node->flag)+1;
   }	   

    if(tag==1)
    {
	
	struct Node* play1;
	
	play1=new_node;
	
	if(play1->flag==4)
	{
	   points1=4;
	}
	else 
	  if(play1->flag==3)
	  {
		points1=3;
	  }
	    else
	      if(play1->flag==2)
	     {
		   points1=2;
	     }
	      else
	       if(play1->flag==1)
	       {
	       	 points1=1;
		   }
		    else
		      points1=0;
    }

    if(tag==2)
    {
	struct Node* play2;
	
	play2=new_node;
	
	if(play2->flag==4)
	{
	   points2=4;
	}
	else 
	  if(play2->flag==3)
	  {
		points2=3;
	  }
	    else
	      if(play2->flag==2)
	     {
		   points2=2;
	     }
	      else
	       if(play2->flag==1)
	       {
	       	 points2=1;
		   }
		    else
		      points2=0;

    }
}
    void Player :: result()
    {
    cout<<"\n\n\n\n";
	cout<<"Points of Player 1 = "<<points1<<endl;
	cout<<"Points of Player 2 = "<<points2<<endl;
	cout<<"\n\n\n\n";
    Sleep(100);
    cout<<"\t\t\t\t\t\t*";
    Sleep(100);
    cout<<"R";
    Sleep(100);
    cout<<"E";
    Sleep(100);
    cout<<"S";
    Sleep(100);
    cout<<"U";
    Sleep(100);
    cout<<"L";
    Sleep(100);
    cout<<"T";
    Sleep(100);
    cout<<"  ";
    Sleep(100);
    cout<<"L";
    Sleep(100);
    cout<<"O";
    Sleep(100);
    cout<<"A";
    Sleep(100);
    cout<<"D";
    Sleep(100);
    cout<<"I";
    Sleep(100);
    cout<<"N";
    Sleep(100);
    cout<<"G";
    Sleep(100);
    cout<<"*";
    Sleep(100);
	cout<<"\n\n\n\n\n\n\\n\n\n\n\n";
if(points1==points2)
{
cout<<"\t\t\t\t\t*****************"<<endl;
cout<<"\t\t\t\t\t* MATCH IS DRAW *"<<endl;
cout<<"\t\t\t\t\t*****************"<<endl;
}
else 
if(points1<points2)
{
cout<<"\t\t\t\t\t******************"<<endl;
cout<<"\t\t\t\t\t*  PLAYER 2 WINS *"<<endl;
cout<<"\t\t\t\t\t******************"<<endl;
}
else
{
cout<<"\t\t\t\t\t*****************"<<endl;
cout<<"\t\t\t\t\t* PLAYER 1 WINS *"<<endl;
cout<<"\t\t\t\t\t*****************"<<endl;
}
}

int main()
{
	Player pobj;
	string player1;
	string player2;
	char choice;
	int cnt=5;
	do
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t  ********WELCOME*********\n";
	cout<<"\t\t\t\t\t\tNAME PLACE ANIMAL THING GAME"<<endl;
	cout<<"\t\t\t\t\t\t\t   NPAT"<<endl;	
	for(int i=0; i<8;i++)
	{
	Sleep(500);
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t\t**LOADING**";
	cout<<"\n\n";	
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t*********************************************************"<<endl;
	cout<<"\t\t\t\t*                                                       *"<<endl;
	cout<<"\t\t\t\t* BEFORE THE GAME STARTS HERE ARE THE RULES OF THE GAME *"<<endl;
	cout<<"\t\t\t\t*                                                       *"<<endl;
	cout<<"\t\t\t\t*********************************************************"<<endl;
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t\t\t    ||  RULES  ||"<<endl;
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t~THE GAME INCLUDES TWO PLAYERS~"<<endl;
	cout<<"\t\t\t\t~THERE WILL BE TWO ROUNDS IN ONE PLAY~"<<endl;
	cout<<"\t\t\t\t~OFFENDER WILL GIVE A LETTER TO THE DEFENDER~"<<endl;
	cout<<"\t\t\t\t~DEFENDER WILL WRITE NPAT STARTING FROM THE LETTER GIVEN BY OFFENDER~"<<endl;
	cout<<"\t\t\t\t~Player 1 will be offender in round 1~"<<endl;
	cout<<"\t\t\t\t~Player 2 will be defender in round 1~"<<endl;
	cout<<"\t\t\t\t~Player 1 and player 2 will play vice versa roles in round 2~"<<endl;
	cout<<"\n\n";
	cout<<"\t\t\t\tARE YOU READY?"<<endl;
	cout<<"\t\t\t\tPress Enter Key!"<<endl;
	cin.ignore();
	for(int j=0; j<=5; j++)
	{
		Sleep(500);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		Sleep(100);
		cout<<"\t\t\t\t\t\t\t"<<cnt;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cnt--;
	}
    cout<<"\t\t\t********************ENTER THE NAMES OF THE PLAYERS*******************"<<endl;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t^PLAYER 1^"<<endl;
    cout<<"\t\t";
    cin>>player1;
    cout<<"\t\t^PLAYER 2^"<<endl;
    cout<<"\t\t";
    cin>>player2;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t";
    cout<<"ROUND 1 BEGINS"<<endl;
    cout<<"\n\n\n\n\t\t\t\t";
    cout<<player1<<" is the opponent and "<<player2<<" is the defender"<<endl;
    tag=2;
	pobj.offend();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t";
    cout<<"ROUND 2 BEGINS"<<endl;
    cout<<"\n\n\n\n\t\t\t\t";
    cout<<player2<<" is the opponent and "<<player1<<" is the defender"<<endl;
    tag=1;
    pobj.offend();
    cout<<"\n\n\t\t\tPLAYER 1 : "<<player1<<endl;
    cout<<"\t\t\tPLAYER 2 : "<<player2<<endl;
	pobj.result(); 
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\tDo you want to try another game?(y/n)"<<endl;
    cin>>choice;
	}while(choice=='y');
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t*****GAME ENDS*****"<<endl;
	return(EXIT_SUCCESS);
}
