#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<ctype.h>

const int MAXLENGTH=80;
const int MAX_TRIES=5;
const int MAXROW=7;

int letterFill (char, char[], char[]);
void initUnknown (char[], char[]);

int main ()
{
 int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   setcolor(LIGHTBLUE);
   setbkcolor(WHITE);
   settextstyle(3,0,4);
   outtextxy(30,10,"POORNIMA COLLEGE OF ENGINEERING");
   outtextxy(130,150,"NON SYLLABUS PROJECT");
   outtextxy(220,220,"\"HANGMAN\"");
   settextstyle(3,0,3);
   outtextxy(10,350,"GUIDED BY:-");
   outtextxy(10,380,"MR.ATUL KUMAR VERMA");
   outtextxy(470,350,"SUBMITTED BY:-");
   outtextxy(360,380,"AKSHAR GOSWAMI A CS");
   outtextxy(360,400,"GAURAV SHARMA  A CS");
   outtextxy(360,420,"GAURAV DWIVEDI  A CS");
   outtextxy(360,440,"HIMANSHU JOSHI   A CS");
   getch();
   cleardevice();

   setbkcolor(BLACK);

   /* draw the circle */
   setcolor(RED);
   ellipse(300,150,0,360,50,60);
   line(300,90,300,0);
   setcolor(YELLOW);
   circle(300, 150, 40);
   line(300,190,300,300);
   line(250,375,300,300);
   line(300,300,350,375);
   line(245,217,300,245);
   line(300,245,355,217);
   setcolor(03);
   settextstyle(4,0,7);
   outtextxy(150,400,"HANGMAN");

   /* clean up */
   getch();
   cleardevice();

setcolor(BLUE);
int X=170,I;
setbkcolor(WHITE);
settextstyle(1,0,4);
outtextxy(150,200,"LOADING....PLEASE WAIT");
for(I=0;I<300;I++)
{
delay(2);
line(X,300,X,320);
X++;
}
getch();
cleardevice();


	 Z:
	 cleardevice();
	setbkcolor(BLACK);
	setcolor(3);

	char unknown [MAXLENGTH];
	char letter;
	int num_of_wrong_guesses=0;
	char word[MAXLENGTH];
	char hint[][MAXLENGTH]=
	{
	"LATEST_COUNTRY_TO_SEND_MISSION_TO_MARS",
	"WHERE_LADEN_WAS_CAUGHT_AND_KILLED_RECENTLY",
	"WORLD'S_BIGGEST_MANUFACTURER",
	"COUNTRY_FAMOUS_FOR_ITS_SILICON_VALLEY",
	"LAND_OF_THE_RISING_SUN",
	"COUNTRY_WHICH_WON_FIFA_WC_2014",
	"HOST_OF_2018_FIFA_WC",
	"HAS_ONE_OF_THE_7_WONDERS_CHRIST_THE_REDEMEER",
	"BIRTHPLACE_OF_SHAKESPEARE",
	"THE_COUNTRY_WHICH_GIFTED_STATUE_OF_LIBERTY_TO_AMERICA",
	"NORTH_AMERICAN_COUNTRY_FAMOUS_FOR_ITS_FOOD",
	"FAMOUS_FOR_VENICE_THE_FLOATING_CITY_OF_LOVE",
	"GANGNAM_STYLE_FAME_RAPPER_PSY_BELONGS_TO_THIS_COUNTRY",
	"NORTH_AMERICAN_COUNTRY_FAMOUS_FOR_ICE_HOCKEY",
	"BULL_FIGHTING_IS_NATIONAL_SPORT",
	"CAPITAL_OF_THIS_COUNTRY_IS_JAKARTA",
	"THIS_ASIAN_COUNTRY_IS_FAMOUS_FOR_BLUE_MOSQUE",
	"THIS_FORMER_BRITISH_COLONY_HAS_CRICKET_AS_ITS_NATIONAL_SPORT",
	"THIS_ASIAN_COUNTRY_IS_THE_ONLY_MAJOR_SHIA_COUNTRY",
	"MONARCHY_AND_MAJOR_OIL_EXPORTER",
	"WARSAW_IS_THE_CAPITAL_OF_THIS_CONTRY",
	"FAMOUS_FOOTBALLER_LIONEL_MESSI_BELONGS_TO_THIS_COUNTRY",
	"THEY_ARE_POPULARLY_CALLED_AS_DUTCH",
	"LAND_OF_WHITE_ELEPHANTS",
	"THEY_ARE_POPULARLY_KNOWN_AS_PROTEAS",
	"LAND_OF_PYRAMIDS",
	"HOME_OF_POP_SINGER_SHAKIRA",
	"CURRENTLY_HAS_WORLD'S_LARGEST_TWIN_TOWER",
	"THIS_AFRICAN_FOOTBALL_TEAM_QUALIFIED_FOR_SEMIS_IN_FIFA_WC_2010",
	"MANILA_IS_THE_CAPITAL_OF_THIS_COUNTRY",
	"ITS_CAPITAL_BRUSSELS_IS_THE_CAPITAL_OF_EUROPEAN_UNION",
	"THIS_SOUTH_AMERICAN_COUNTRY_IS_FAMOUS_FOR_ITS_WILDLIFE_DIVERSITY",
	"THIS_EUROPEAN_COUNTRY_IS_FAMOUS_FOR_FURNITURE",
	"BOLLYWOOD'S_FAVORITE_EUROPEAN_SHOOTING_LOCATION",
	"VIENNA_THE_FAMOUS_CITY_IS_ITS_CAPITAL",
	"ASIAN_COUNTRY_WHICH_DEFEATED_USA_AND_LOST_MILLIONS_OF_LIVES",
	"MACHU_PICCHU_ONE_OF_THE_7_WONDERS_IS_IN_THIS_COUNTRY",
	"THIS_COUNTRY_IS_DEFAMED_FOR_ITS_PIRATES",
	"KIEV_IS_THE_CAPITAL_OF_THIS_COUNTRY",
	"PESO_IS_THE_CURRENCY_OF_THIS_COUNTRY",
	"IT_SHARES_SUNDARBAN_DELTA_WITH_INDIA",
	"FAMOUS_ANGKOR_VAT_TEMPLE_IS_IN_THIS_COUNTRY",
	"VASCO_DE_GAMA_THE_FAMOUS_TRAVELLER_BELONGED_TO_THIS_COUNTRY",
	"ALGIERS_IS_THE_CAPITAL_OF_THIS_AFRICAN_COUNTRY",
	"LAND_OF_MIDNIGHT_SUN",
	"BIRTHPLACE_OF_JESUS_CHRIST_IS_CAPITAL_OF_THIS_COUNTRY",
	"THIS_COUNTRY_INVENTED_OLYMPIC_GAMES",
	"THEY_ARE_POPULARLY_CALLED_KIWIS",
	"COUNTRY_SUFFERING_FROM_ISIS",
	"COUNTRY_FAMOUS_FOR_CIGARS",
	"FAMOUS_TRAVELLER_IBN_E_BATUTA_BELONGED_TO_THIS_COUNTRY"
};

	char words[][MAXLENGTH] =
	{

		"india",
		"pakistan",
		"china",
		"unitedstatesofamerica",
		"japan",
		"germany",
		"russia",
		"brazil",
		"england",
		"france",
		"mexico",
		"italy",
		"southkorea",
		"canada",
		"spain",
		"indonesia",
		"turkey",
		"australia",
		"iran",
		"saudiarabia",
		"poland",
		"argentina",
		"netherlands",
		"thailand",
		"southafrica",
		"egypt",
		"colombia",
		"malaysia",
		"nigeria",
		"philippines",
		"belgium",
		"venezuela",
		"sweden",
		"switzerland",
		"austria",
		"vietnam",
		"peru",
		"somalia",
		"ukraine",
		"chile",
		"bangladesh",
		"cambodia",
		"portugal",
		"algeria",
		"norway",
		"israel",
		"greece",
		"newzealand",
		"syria",
		"cuba",
		"morocco"
	};

	//choose and copy a word from array of words randomly
	randomize();
	int n=random(49);
	strcpy(word,words[n]);

	// Initialize the secret word with the * character.
	initUnknown(word, unknown);

	// welcome the user
	settextstyle(3,0,3);
	outtextxy(10,30,"\n\n # Welcome to hangman....");
	outtextxy(10,90,"\n\n # Guess a country Name.");
	outtextxy(10,160,"\n\n # Each letter is represented by a star.");
	outtextxy(10,230,"\n\n # You have to type only one letter in one try.");
	outtextxy(10,300,"\n\n # You have  5 tries to try and guess the word.");
	outtextxy(0,370, "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	getch();
	cleardevice();

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{       cleardevice();
		setbkcolor(BLACK);
		setcolor(YELLOW);
	       if(num_of_wrong_guesses==1)
	       {
		line(395,217,450,245);
		line(450,245,505,217);
		}
		if(num_of_wrong_guesses==2)
		{

		line(450,190,450,300);
		line(395,217,450,245);
		line(450,245,505,217);
		}
		if(num_of_wrong_guesses==3)
		{
		 line(450,190,450,300);
		line(400,375,450,300);
		line(450,300,500,375);
		line(395,217,450,245);
		line(450,245,505,217);
		  }
		if(num_of_wrong_guesses==4)
		{
		 circle(450, 150, 40);
		line(450,190,450,300);
		line(400,375,450,300);
		line(450,300,500,375);
		line(395,217,450,245);
		line(450,245,505,217);
		}
		Q:
		outtextxy(10,25,"HINT:");
		gotoxy(10,3.5);
		cout<<hint[n]<<"\n";
		gotoxy(10,6);
		cout<< unknown;
		outtextxy(10,100,"Guess a letter:");
		gotoxy(24,8);
		cin>>letter;
		if(islower(letter))
		{ outtextxy(10,180,"");
		}

	       else
	     {  outtextxy(10,170,"Invalid Input...please enter a character only");
		delay(2000);
		cleardevice();
		goto Q; }

		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{       sound(100);
			delay(400);
			nosound();
			outtextxy(10,200,"Whoops! That letter isn't in there!");
			num_of_wrong_guesses++;

		}
		else
		{
			outtextxy(10,200,"You found a letter! Isn't that exciting!");
		}
		// Tell user how many guesses has left.
		outtextxy(10,245,"You have ");
		gotoxy(16,17);
		 cout<<MAX_TRIES - num_of_wrong_guesses;
		outtextxy(130,245," guesses left.");
		getch();
		// Check if they guessed the word.
		if (strcmp(word, unknown) == 0)
		{       cleardevice();
			cout << word << endl;
			outtextxy(30,300,"\n\nCONGRATULATIONS!!!!!! YOU WON");
			break;
		}

	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{        cleardevice();
		 setcolor(WHITE);
		 ellipse(450,150,0,360,50,60);
		 line(450,90,450,0);
		 setcolor(WHITE);
		 circle(450, 150, 40);
		 line(450,190,450,300);
		 line(400,375,450,300);
		 line(450,300,500,375);
		 line(395,217,450,245);
		 line(450,245,505,217);
		outtextxy(10,270,"\nSORRY, YOU LOSE...YOU'VE BEEN HANGED.");
		outtextxy(10,290,"The word was : ");
		gotoxy(25,20);
		cout<< word << endl;
	}
	getch();
	outtextxy(10,330,"\n\n do you want to continue");
	outtextxy(10,350,"\n\n press y to continue or any other character to exit");
	char ch;
	gotoxy(25,25);
	cin>>ch;
	if(ch=='y')
	goto Z;
	else
	exit(1);
	return 0;
	closegraph();
}

/* Take a one character guess and the secret word, and fill in the
 unfinished guessword. Returns number of characters matched.
 Also, returns zero if the character is already guessed. */

int letterFill (char guess, char secretword[], char guessword[])
{
	int i;
	int matches=0;
	for (i = 0; secretword[i]!='\0'; i++)
	{

		// Did we already match this letter in a previous guess?
		if (guess == guessword[i])
			return 0;

		// Is the guess in the secret word?
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}


// Initialize the unknown word

void initUnknown (char word[], char unknown[])
{
	int i;
	int length = strlen(word);
	for (i = 0; i < length; i++)
		unknown[i]='*';
	unknown[i]='\0';
}
