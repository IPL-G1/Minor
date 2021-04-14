#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define N 619


struct match
{
char team1[50];
char team2[50];
char toss_winner[50];
char toss_loser[50];
char toss_winner_decision[40];
char toss_loser_decision[40];
char match_winner[50];
char weather[20];
char venue[100];
int id;
};

int count__8 = 0;
int count__9 = 0;
int count__10 = 0;
int count__11 = 0;
int count__12 = 0;
int count__13 = 0;
int value_1;
int value , value1 , value2;


void func1()
{
struct match m[N];

int i;
int j;

char Team[50];
char stadium[70];
char stadium1[70];
char stadium2[70];
int n;
int choose;

printf("\n");
printf("********************************** Winning Predictions *********************************\n");


printf("1. Mumbai Indians\n");
printf("2. Chennai Super Kings\n");
printf("3. Royal Challengers Banglore\n");
printf("4. Rajasthan Royals\n");
printf("5. Pune Warriors\n");
printf("6. Gujarat Lions\n");
printf("7. Kolkata Knight Riders\n");
printf("8. King XI Punjab\n");
printf("9. Delhi Daredevils\n");
printf("10. Sunrisers Hyderabad\n");
printf(" \n");
printf("Enter your Team id : ");
scanf("%d",&choose);

switch(choose){

case 1:
{
strcpy(Team,"Mumbai Indians");
strcpy(stadium,"Wankhede Stadium");
strcpy(stadium1,"Brabourne Stadium");
strcpy(stadium2,"Null");
getProbability(Team,stadium,stadium1,stadium2);
}
break;

case 2:
{
strcpy(Team,"Chennai Super Kings");
strcpy(stadium,"MA Chidambaram Stadium");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 3:
{
strcpy(Team,"Royal Challengers Bangalore");
strcpy(stadium,"M Chinnaswamy Stadium");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 4:
{
strcpy(Team,"Rajasthan Royals");
strcpy(stadium,"Sawai Mansingh Stadium");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 5:
{
strcpy(Team,"Pune Warriors");
strcpy(stadium,"Dr DY Patil Sports Academy");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 6:
{
strcpy(Team,"Gujarat Lions");
strcpy(stadium,"Saurashtra Cricket Association Stadium");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 7:
{
strcpy(Team,"Kolkata Knight Riders");
strcpy(stadium,"Eden Gardens");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 8:
{
strcpy(Team,"Kings XI Punjab");
strcpy(stadium,"Punjab Cricket Association Stadium");
strcpy(stadium1,"Himachal Pradesh Cricket Association Stadium");
strcpy(stadium2,"Maharashtra Cricket Association Stadium");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 9:
{
strcpy(Team,"Delhi Daredevils");
strcpy(stadium,"Feroz Shah Kotla");
strcpy(stadium1,"Shaheed Veer Narayan Singh International Stadium");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
case 10:
{
strcpy(Team,"Sunrisers Hyderabad");
strcpy(stadium,"Rajiv Gandhi International Stadium");
strcpy(stadium1,"NULL");
strcpy(stadium2,"NULL");
getProbability(Team,stadium,stadium1,stadium2);
}
break;
}
}

void getProbability(char Team[50] , char stadium[70] , char stadium1[70] , char stadium2[70])
{
struct match m[N];
int i , j;
int n;
int compare , compare1 , compare2 , compare3;
int compare4 , compare5 , compare6 , compare7;
int compare8 , compare9 , compare10,   compare11 , compare12 , compare13;
int count  = 0;
int count3 = 0;
int count1 = 0;
int count2 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count_99 = 0;
int count_1 = 0;


int choose;

FILE *the_file = fopen("probability.csv","r");
if (the_file == NULL)
{

perror("Unable to open the file");
exit(1);
}

char line[200];

while(fgets(line, sizeof(line), the_file)!= NULL && i < N)
{
strcpy(m[i].team1, strtok(line, ","));

strcpy(m[i].team2, strtok(NULL, ","));

strcpy(m[i].toss_winner, strtok(NULL, ","));

strcpy(m[i].toss_loser, strtok(NULL , ","));

strcpy(m[i].toss_winner_decision, strtok(NULL, ","));

strcpy(m[i].toss_loser_decision, strtok(NULL, ","));

strcpy(m[i].match_winner, strtok(NULL, ","));

strcpy(m[i].venue,strtok(NULL, ","));

strcpy(m[i].weather, strtok(NULL, ","));

 m[i].id = atoi(strtok(NULL, ","));



i++;
}

printf("Please select all the following conditions:\n");
printf(" \n");
printf("Choose one option:\n 1.Toss wins\n 2.Toss looses\n");
printf("Enter the value : ");
scanf("%d",&value_1);
printf(" \n ");
printf("Choose one option:\n 1.Bat\n 2.Field\n");
printf("Enter the value : ");
scanf("%d",&value);
printf(" \n ");
printf("Choose one option:\n 1.Home\n 2.Away\n");
printf("Enter the value : ");
scanf("%d",&value1);
printf(" \n ");
printf("Choose one option:\n 1.Humid\n 2.Sunny\n 3.Dry\n");
printf("Enter the value : ");
scanf("%d",&value2);


//input toss decision

if(value_1 == 1){ 
for(j=1;j<N;j++){
compare1 = strcmp(m[j].team1,Team);
compare2 =  strcmp(m[j].team2,Team);

if(compare1 == 0 || compare2 == 0){
count1 = count1+1;
compare3 = strcmp(m[j].toss_winner,Team);
if(compare3 == 0){              
count2 = count2 + 1;
if(value == 1){
compare4 = strcmp(m[j].toss_winner_decision,"Bat");
if(compare4 == 0){
count3 = count3 + 1;

//Stadium
if(value1 == 1){   //venue
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
count5  = count5 + 1;

if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");
if(compare7 == 0){	
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}
}

// Bat Stadium Away

else // value not 1
{
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
}
else
{
count7 = count7+1;
if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");

if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}
}
}
}


// Field
else
{
compare4 = strcmp(m[j].toss_winner_decision,"Field");
if(compare4 == 0){
count4 = count4 + 1;
if(value1 == 1){   //venue
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
count5  = count5 + 1;

if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");
if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}

}
else
{
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
}
else
{
count7 = count7+1;
if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");

if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}
}
}
}
}
}
}
}

// Toss lose

else if(value_1 == 2)                                          
{
for(j=1;j<N;j++){
compare1 = strcmp(m[j].team1,Team);
compare2 =  strcmp(m[j].team2,Team);

if(compare1 == 0 || compare2 == 0){
count1 = count1+1;
compare3 = strcmp(m[j].toss_loser,Team);
if(compare3 == 0){  // Toss decision
count_99 = count_99+1;
if(value == 1){
compare4 = strcmp(m[j].toss_loser_decision,"Bat");
if(compare4 == 0){
count3 = count3 + 1;

//Stadium
if(value1 == 1){   //venue
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
count5  = count5 + 1;

if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");
if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}

else{
count__13 = count__13 + 1;
}

}
}
else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
}
}

//Stadium Away

else // value not 1
{
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
}
else
{
count7 = count7+1;
if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");

if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}
}
}
}

else
{
compare4 = strcmp(m[j].toss_loser_decision,"Field");
if(compare4 == 0){
count4 = count4 + 1;
if(value1 == 1){   //venue
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
count5  = count5 + 1;

if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");
if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}
}

}


// Field with Away
else
{
compare5 = strcmp(m[j].venue,stadium);
compare6 = strcmp(m[j].venue,stadium1);
compare13 = strcmp(m[j].venue,stadium2);
if(compare5 == 0 || compare6 == 0 || compare13 == 0){
}
else
{
count7 = count7+1;
if(value2 == 1){    //weather
compare7 = strcmp(m[j].weather,"Humid");

if(compare7 == 0){
count__8 = count__8 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 2){
compare8 = strcmp(m[j].weather,"Sunny");
if(compare8 == 0){
count__9 = count__9 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}
}
}

else if(value2 == 3){ //dry weather
compare9 = strcmp(m[j].weather,"Dry");
if(compare9 == 0){
count__10 = count__10 + 1;
compare12 = strcmp(m[j].match_winner,Team);
if(compare12 == 0 ){
count__12 = count__12+1;
}
else{
count__13 = count__13 + 1;
}

}
}
}
}
}
}
}
}
}
}
	
displayProbability();
}


void displayProbability()
{
int mwon; 
int mlose;
int totalm;     
float w1;
float l1;

if(value_1 == 1){
	if(value == 1){
		if(value1 == 1){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;	
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;	
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
	else if(value1 == 2){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
}
else if(value == 2){
		if(value1 == 1){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
	else if(value1 == 2){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
}
}
else if(value_1 == 2){
	if(value == 1){
		if(value1 == 1){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
	else if(value1 == 2){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
}
else if(value == 2){
		if(value1 == 1){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
	else if(value1 == 2){
			if(value2 == 1){      
			mwon = count__12;
			mlose = count__13;
			totalm = count__8;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
		else if(value2 == 2){
			mwon = count__12;
			mlose = count__13;
			totalm = count__9;
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;		
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
			
		}
		else if(value2 == 3){
			mwon = count__12;
			mlose = count__13;
			totalm = count__10;		
			w1 = (float)mwon/totalm;
			l1 = (float)mlose/totalm;
				printf("Total matches played = %d\n",totalm);
				printf("Number of matches win = %d\n",mwon);
				printf("Number of matches lose = %d\n",mlose);
				if(mwon==0 && mlose==0)
				{
					printf("Probablity cannot be calculated since the matches won and lost in this condition are zero\n");
				}
				else
				{
				printf("Probability of win P(w) = %1.2f\n",w1);
				printf("Probability of lose P(l) = %1.2f\n",l1);
			}
		}
	}
}
}
}

