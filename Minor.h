#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define N 619
#define Total_bowlers 277
#define Total_batsman 265


struct team
{
	int b_id;
	char name[60];
	int caping;
};

struct team2
{
	int b_id;
	char name[60];
	int caping;
};

struct team3
{
	int b_id;
	char name[60];
	int caping;
};

struct team4
{
	int b_id;
	char name[60];
	int caping;
};


struct team t1[11];
struct team2 t2[11];
struct team3 t3[11];
struct team4 t4[11];



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



//Batsman variables
struct players
{
    char batsman[50];
    int total_runs;
    int out;
    int numberofballs;
    double average;
    double strikerate;
    int capping;
	int id;
    
};


struct player1
{

    char batsman_5[50];
    int total_runs_5;
    int out_5;
    int numberofballs_5;
    double average_5;
    double strikerate_5;
    int capping_5;
    int id_5; 
};

struct player2
{

    char batsman_5[50];
    int total_runs_5;
    int out_5;
    int numberofballs_5;
    double average_5;
    double strikerate_5;
    int capping_5;
    int id_5; 
};

struct player3
{

    char batsman_5[50];
    int total_runs_5;
    int out_5;
    int numberofballs_5;
    double average_5;
    double strikerate_5;
    int capping_5;
    int id_5; 
};

struct player4
{

    char batsman_5[50];
    int total_runs_5;
    int out_5;
    int numberofballs_5;
    double average_5;
    double strikerate_5;
    int capping_5;
    int id_5; 
};

struct players p[ Total_batsman];
struct player1 p_1[ Total_batsman];
struct player2 p_2[ Total_batsman];
struct player3 p_3[ Total_batsman];
struct player4 p_4[ Total_batsman];
	
	int id_1[6];
	int size_1;
	int size_2;
	int del;
	int number;
	int choice_2;
	int input;
	int tnb1;
	int tnb2;
	int l_1;
	int search;
	int i,j;
	int y ;
	int size;
	int lakshay;
	FILE *output,*ftr;

//bowler
struct bowlers
{
    char bowler[50];
    int id_150;
    int econ;
    int wickets;
    int matches;
    int caping;
	int count_150;
    int balls_per_wicket;
    int SR;
};

struct bowlers2
{
    char bowler[50];
    int id_150;
    int econ;
    int wickets;
    int matches;
    int caping;
    int count_150;
    int balls_per_wicket;
    int SR;
};

struct bowlers3
{
    char bowler[50];
    int id_150;
    int econ;
    int wickets;
    int matches;
    int caping;
    int count_150;
    int balls_per_wicket;
    int SR;
};

struct bowlers4
{
    char bowler[50];
    int id_150;
    int econ;
    int wickets;
    int matches;
    int caping;
    int count_150;
    int balls_per_wicket;
    int SR;
};

	struct bowlers b[Total_bowlers];
    struct bowlers2 b2[Total_bowlers];
    struct bowlers3 b3[Total_bowlers];
    struct bowlers4 b4[Total_bowlers];



void func1();
void getProbability(char Team[50],char stadium[70], char stadium1[70] , char stadium2[70]);
void displayProbability();
void func(FILE *output);
void Create_Team(int counter,int tnb1);
void bowlers(int counter, int tnb1);
int *Random(struct players p[]); 
int *Bowler_Random(struct bowlers b[]);
