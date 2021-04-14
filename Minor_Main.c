#include<stdio.h>
#include <dirent.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "Minor.h"
#define N 619

void func(FILE *output){                             
int z;
fwrite(t1,sizeof(struct team),size,output);
	if(fwrite != 0)
	{
    // printf("contents to file written successfully !\n"); 
    }
	else
	{ 
    printf("error writing file !\n"); 
	}
fseek(output,0,SEEK_SET);
fread(t2,sizeof(struct team2),size,output);
printf("Sr No.\tID\tPlayer's Name\t\tBase Price\n");
for(z=0;z<size;z++)
{
	printf("%d\t",z+1);
	printf("%d\t",t2[z].b_id);
	printf("%s\t\t  ",t2[z].name);
	if(t2[z].caping == 10000000){
		printf("1 Crore");
	}
	if(t2[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(t2[z].caping == 2000000){
		printf("20 Lakhs");
	}
	printf("\n");
}
fclose(output); 
}



int main()
{
int price = 0;
int choice_3;	
int captain_counter = 0;	
int z;
int ipl = 0;	
int counter_150 = 0;
int counter = 0;
size = 11;
int index;
int captain_id;
char fname1[30];
char fname[30];
char fname2[50] = "F:/Lakshay_imp/Team/";
char fname3[50] = "F:/Lakshay_imp/Team/";
char ext[4] = ".txt";
char captain[4] = " (C)";
	
printf(" ******************************* Player Selection(IPL Team) using Clustering algorithm ******************************\n");	
printf("\n");
do{
        printf("Press 1: Create Your own Team\n");
		printf("Press 2: Modification in your Team\n");
		printf("Press 3: Show my Team\n");
	    printf("Press 4: Show Previous Team\n");
		printf("Press 5: Probability of Game wining vs Toss Wining\n");
		printf("Press 6: Exit\n");
		printf("\n");
		
		printf("Enter the number what you want to do:");	
        scanf("%d",&number);
        printf("\n");
switch(number){
		
	case 1: 
{
	printf("Enter your Team name : \n");
	scanf("%s",fname);
	strcat(fname,ext);  
	strcat(fname2,fname);
	
	output = fopen(fname2,"w+"); 
	if (output == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (1); 
    }  
	
	printf("\n");
	printf("What do you want to choose first:\n");
	printf("1.Batsman\n2.Bowler\n");
	scanf("%d",&choice_2);
	
	if(choice_2==1)
	{
		printf("How many batsman do you want in your team?\n");
		scanf("%d",&tnb1);
		tnb2=11-tnb1;
		Create_Team(counter,tnb1);
		printf("\n");
		printf("Now select your bowlers: ");
		printf("\n");
		bowlers(counter_150,tnb2);
		
		for(i=0;i<tnb1;i++)
	{	
		t1[i].b_id= p_1[i].id_5;
		strcpy(t1[i].name,p_1[i].batsman_5); 
		t1[i].caping = p_1[i].capping_5;
	}
		
		for(j=tnb1;j<11;j++)
	{
		t1[j].b_id= b2[ipl].id_150;
		strcpy(t1[j].name,b2[ipl].bowler); 
		t1[j].caping = b2[ipl].caping;
		ipl++;
	}
			
	}
	else
	{
		printf("How many bowler do you want in your team?\n");
		scanf("%d",&tnb1);
		tnb2=11-tnb1;
		bowlers(counter_150,tnb1);
		printf("\n");
		printf("Now select your batsman and wicket keeper: ");
		printf("\n");
		Create_Team(counter,tnb2);
	
		for(i=0;i<tnb1;i++)
	{
		t1[i].b_id= b2[i].id_150;
		strcpy(t1[i].name,b2[i].bowler); 
		t1[i].caping = b2[i].caping;
	}
	for(j=tnb1;j<11;j++)
	{
		t1[j].b_id= p_1[ipl].id_5;
		strcpy(t1[j].name,p_1[ipl].batsman_5); 
		t1[j].caping = p_1[ipl].capping_5;
		ipl++;
	}
	}
		
	for(i=0;i<11;i++){
		t3[i].b_id = t1[i].b_id;
		strcpy(t3[i].name,t1[i].name);
		t3[i].caping = t1[i].caping;
}
}

break;

case 2:
	{
	printf("Press 1: Searching\n");
	printf("Press 2: Deleting\n");
	printf("Press 3: Adding\n");
	printf("\n");
	int l_1;
	printf("Enter the value: ");
	scanf("%d",&l_1);
	
	switch(l_1){
	
	case 1:
		
	printf("Enter the player id you want to search: ");
	scanf("%d",&search);
	for(i=0;i<size;i++){
	if(search == t3[i].b_id)
	{
	printf("%d\t",t3[i].b_id);	
	printf(" %s\t\t ",t3[i].name);
	printf("%d\t",t3[i].caping);
	printf("\n");
	printf("Search successfully!\n");
}
}
	break;

case 2:
{
printf("Enter the player id you want to delete: ");
scanf("%d",&del);

if(captain_id == del){
	captain_counter =0;
}

for(j=0;j<11;j++){
if(del == t3[j].b_id){
		printf("Deleted %d",del);
		printf("\n");
		index = j;
		price = price - t3[j].caping;
		
}
}
printf("Index of %d : %d\n",del,index);

for(j=0;j<11;j++){
if(del == t3[j].b_id){
if(index < 0 || index >= size)
{
	printf("Invalid input/n");
}
else
{
	for(i = index;i<size;i++){
	    t3[i].b_id = t3[i+1].b_id;
	    strcpy(t3[i].name,t3[i+1].name);
	    t3[i].caping = t3[i+1].caping;
	    
	}
	size--;
	
for(i=0;i<size;i++)
{
	strcpy(t2[i].name,t3[i].name);
	t2[i].b_id    = t3[i].b_id;
	t2[i].caping  = t3[i].caping;

} 
func(output);
}
}
}
}
break;
		
case 3:	
lakshay = 0;
y=1;	
size_1 = (tnb1+tnb2) - size;

counter++;
counter_150++;
printf("Counter :%d\n",counter);
printf("Counter_150 :%d\n",counter_150);

printf("What you want to add: \n");

printf("1.Batsman\n");
printf("2.Bowler\n");
scanf("%d",&choice_3);

if(choice_3==1)
	{
		Create_Team(counter,tnb1);

	}
	else
	{
		bowlers(counter_150,tnb2);
	}


for(i=size;i<11;i++){
if(lakshay<size){
	strcpy(t2[i].name,t4[lakshay].name);
	t2[i].b_id   = t4[lakshay].b_id;
	t2[i].caping = t4[lakshay].caping;

lakshay++;
size++;	
}
}

for(i=0;i<11;i++)
{
	t1[i].b_id  = t2[i].b_id;
	strcpy(t1[i].name,t2[i].name);
	t1[i].caping = t2[i].caping;
}

output = fopen(fname2,"w+"); 
	if (output == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (1); 
    }  
func(output);
	break;
}
}
break;

case 3:
	{

		func(output);
		printf("\n");
		price = 0;
		for(i=0;i<size;i++){
		price = price + t2[i].caping;
		}
		printf("Your Team cost is: %d\n",price);
		
		if(captain_counter == 0){
			printf("Enter the player whom you want to select captain: ");
			scanf("%d",&captain_id);
			for(i=0;i<11;i++){
			if(captain_id == t2[i].b_id){
			strcat(t2[i].name,captain);
			captain_counter = 1;
		}
		}
}
}
break;

case 4:
	{
		
	struct dirent *de;
    DIR *dr = opendir("Team");
    if (dr == NULL)  
    
	{
        printf("Could not open current directory" );
        return 0;
	}
	
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);

    closedir(dr);	
		
			
	printf("Enter your Previous Team: \n");		
	scanf("%s",fname1);
	
	strcat(fname1,ext);  
	strcat(fname3,fname1);
		
	ftr = fopen(fname3, "r+"); 
	if (ftr == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (1); 
    }  	
	fread(t2,sizeof(struct team),11,ftr);
	printf("Sr No.\tID\tPlayer's Name\t\tBase Price\n");
	for(z=0;z<size;z++){
	printf("%d\t",z+1);	
	printf("%d\t",t2[z].b_id);
	printf("%s\t\t ",t2[z].name);
	if(t2[z].caping == 10000000){
		printf("1 Crore");
	}
	if(t2[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(t2[z].caping == 2000000){
		printf("20 Lakhs");
	}
	printf("\n");
}
	}
break;
case 5:
	{
		func1();
	}
case 6:
{
	exit(0);
 } 
}
printf("\ncontinue(1/0)\n");
scanf("%d",&input);
}
while(input == 1);
    
}
