#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include "Minor.h"
#define Total_bowlers 277


 int *Bowler_Random(struct bowlers b[])  
  {
   int arr_186[Total_bowlers];
   int i;
   double distance_x_150 , distance_y_150 , distance_z_150 , distance_a_150 , distance_b_150  , distance_c_150, distance_150;
 
   int randomIndex_150   = rand() % Total_bowlers;
  
   int econ1             =      b[randomIndex_150].econ;
   int wickets1          =      b[randomIndex_150].wickets;
   int matches1          =      b[randomIndex_150].matches;
   int count_1           =      b[randomIndex_150].count_150;
   int balls_per_wicket1 =      b[randomIndex_150].balls_per_wicket;
   int SR1               =      b[randomIndex_150].SR;
   
   for(i=1;i<Total_bowlers;i++)
   {
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 +distance_a_150 + distance_b_150 + distance_c_150;  
   arr_186[i] = (sqrt(distance_150));

}
return arr_186;
}


void bowlers(int counter_150 , int tnb){
	
	
	int id_151[10],id_152[10];
	int arr_192[Total_bowlers] , arr_193[Total_bowlers] , arr_194[Total_bowlers],arr_195[Total_bowlers],arr_196[Total_bowlers],arr_197[Total_bowlers];
	int cluster_150[Total_bowlers];
	int *c1 , *c2 , *c3, *c4, *c5, *c6;	
    int arr_150[Total_bowlers] , arr_151[Total_bowlers] , arr_152[Total_bowlers]  , arr_153[Total_bowlers];
	int arr_154[Total_bowlers] , arr_155[Total_bowlers] , arr_156[Total_bowlers]  , arr_157[Total_bowlers];
	int arr_158[Total_bowlers] , arr_159[Total_bowlers], arr_160[Total_bowlers] , arr_161[Total_bowlers];
	int arr_162[Total_bowlers] , arr_163[Total_bowlers], arr_164[Total_bowlers] , arr_165[Total_bowlers];
	int arr_166[Total_bowlers] , arr_167[Total_bowlers], arr_168[Total_bowlers] , arr_169[Total_bowlers];
	int arr_170[Total_bowlers] , arr_171[Total_bowlers], arr_172[Total_bowlers] , arr_173[Total_bowlers];
	int arr_174[Total_bowlers] , arr_175[Total_bowlers], arr_176[Total_bowlers] , arr_177[Total_bowlers];
	int arr_178[Total_bowlers] , arr_179[Total_bowlers], arr_180[Total_bowlers] , arr_181[Total_bowlers];
	int arr_182[Total_bowlers] , arr_183[Total_bowlers], arr_184[Total_bowlers] , arr_185[Total_bowlers];
	int count_150 = 0;
	int count_151 = 0;
	int count_152 = 0;
	int count_153 = 0;
	int count_154 = 0;
	int count_155 = 0;
    int econ1 , wickets1 , matches1 , count_1 , balls_per_wicket1 , SR1;     
    double distance_x_150 , distance_y_150 , distance_z_150 , distance_a_150 , distance_b_150  , distance_c_150, distance_150;
    int arr_186[Total_bowlers] ,arr_187[Total_bowlers] , arr_188[Total_bowlers],arr_189[Total_bowlers],arr_190[Total_bowlers],arr_191[Total_bowlers];
    int z;
    int n;
    int i=0;
	
	    FILE *the_file = fopen("best-bowler-overall-ipl-data-QueryResult.csv","r");
    if (the_file == NULL)
    {

        perror("Unable to open the file");
        exit(1);
    }
    
    
    char line[200];

    while(fgets(line, sizeof(line), the_file)!= NULL && i < Total_bowlers)
    {
        strcpy(b[i].bowler, strtok(line, ","));

        b[i].econ = atoi(strtok(NULL, ","));

        b[i].wickets = atoi(strtok(NULL, ","));

        b[i].matches = atof(strtok(NULL, ","));
        
        b[i].caping = atoi(strtok(NULL, ","));

        b[i].count_150 = atof(strtok(NULL, ","));

        b[i].balls_per_wicket = atof(strtok(NULL, ","));

        b[i].SR = atof(strtok(NULL, ","));
        
        b[i].id_150 = atoi(strtok(NULL, ","));

        i++;
    } 
    
    
	srand(time(0));
    int K;
    printf("\n");
    printf("How many clusters you want?\n"); 	
	printf("\n");
    printf("Enter the value of K (2-7): ");
    scanf("%d",&K);
    printf("\n");

switch(K){
case 3:{
	
 //calling Random   
c1 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_192[i] = *(c1+i);
}
c2 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_193[i] = *(c2+i);
}
c3 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_194[i] = *(c3+i);
}
    
//Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++)
{
	if(arr_192[i] < arr_193[i] && arr_192[i] < arr_194[i] )
	{
		cluster_150[i] = 1;
	}
	else if(arr_193[i] < arr_192[i] && arr_193[i] < arr_194[i]) 
	{
		cluster_150[i] = 2;
	}
	else
	{
		cluster_150[i] = 3;
	}
}

//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else
	{
		arr_162[count_152] =b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	}

//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5,sum6;
int loop;
float mean1,mean2,mean3,mean4,mean5,mean6;
int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_150; loop++) {
      sum =  sum  + arr_150[loop];
      sum2 = sum2 + arr_151[loop];
      sum3 = sum3 + arr_152[loop];
      sum4 = sum4 + arr_153[loop];
      sum5 = sum5 + arr_154[loop]; 
	  sum6 = sum6 + arr_155[loop];   
   }
   mean1 = sum  / count_150;
   mean2 = sum2 / count_150; 
   mean3 = sum3 / count_150; 
   mean4 = sum4 / count_150; 
   mean5 = sum5 / count_150; 
   mean6 = sum6 / count_150;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_186[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_151; loop++) {
      sum  =  sum  + arr_156[loop];
      sum2 = sum2 + arr_157[loop];
      sum3 = sum3 + arr_158[loop];
      sum4 = sum4 + arr_159[loop];
      sum5 = sum5 + arr_160[loop]; 
	  sum6 = sum6 + arr_161[loop];   
   }
   mean1 = sum  / count_151;
   mean2 = sum2 / count_151; 
   mean3 = sum3 / count_151; 
   mean4 = sum4 / count_151; 
   mean5 = sum5 / count_151; 
   mean6 = sum6 / count_151;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_187[i] = (sqrt(distance_150));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_152; loop++) {
      sum  =  sum  + arr_162[loop];
      sum2 = sum2 + arr_163[loop];
      sum3 = sum3 + arr_164[loop];
      sum4 = sum4 + arr_165[loop];
      sum5 = sum5 + arr_166[loop]; 
	  sum6 = sum6 + arr_167[loop];   
   }
   mean1 = sum  / count_152;
   mean2 = sum2 / count_152; 
   mean3 = sum3 / count_152; 
   mean4 = sum4 / count_152; 
   mean5 = sum5 / count_152; 
   mean6 = sum6 / count_152;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1        = mean1;
   wickets1     = mean2;
   matches1     = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1          = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150   = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_188[i]     = (sqrt(distance_150));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++){
	if(arr_186[i] < arr_187[i] && arr_186[i] < arr_188[i]){
		cluster_150[i] = 1;
	}
	else if (arr_187[i] < arr_186[i] && arr_187[i] < arr_188[i]) {
		cluster_150[i] = 2;
	}
	else{
		cluster_150[i] = 3;
	}
}

count_150 = count_151  =  count_152 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else
	{
		arr_162[count_152] =b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	}

printf("Iteration %d\n",iter);
printf("Total number of Players in cluster 1:%d\t%d\n",iter , count_150 );
printf("Total number of Players in cluster 2:%d\t%d\n",iter , count_151);
printf("Total number of Players in cluster 3:%d\t%d\n",iter , count_152);
printf("\n");
iter++;   
}

printf("\n");
int choice = 1;
 //Printing the output
 while(choice){
 printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:
	 for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 1){
	 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
		}
	  }

	  break;
	case 2:
		for(z = 1; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 2){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	  break;
	case 3:
		for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 3){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	  break;
	default:
{
		printf("Enter valid input !");
break;
}
}
printf("Do you want to see another cluster(1/0):\n");
scanf("%d",&choice);
}
if(counter_150 == 0){
printf("Enter the player id you want to select");
for(i=0;i<tnb;i++){
    scanf("%d",&id_151[i]);
	}
	printf("\n");
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3){
			if(id_151[z] == b[i].id_150){
				
			strcpy(b2[z].bowler,b[i].bowler); 
				b2[z].id_150  = b[i].id_150;
		 	    b2[z].econ    = b[i].econ;
				b2[z].wickets = b[i].wickets;
				b2[z].matches = b[i].matches;
				b2[z].caping  = b[i].caping;
				b2[z].count_150   = b[i].count_150;
				b2[z].balls_per_wicket    = b[i].balls_per_wicket;
				b2[z].SR      = b[i].SR;
			}
		}
	}
}


//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(b3[i].bowler,b2[i].bowler);
	b3[i].id_150           = b2[i].id_150;  
	b3[i].econ             = b2[i].econ;
	b3[i].wickets          = b2[i].wickets;
	b3[i].matches          = b2[i].matches;
	b3[i].caping           = b2[i].caping;
	b3[i].count_150        = b2[i].count_150;
	b3[i].balls_per_wicket = b2[i].balls_per_wicket;
    b3[i].SR               = b2[i].SR;
}
}
else
{
printf("Enter the player id you want to select");

for(i=0;i<size_1;i++){
    scanf("%d",&id_152[i]);
	}

	for(z=0;z<size_1;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3){
			if(id_152[z] == b[i].id_150){
				
			strcpy(b4[z].bowler,b[i].bowler);
			    b4[z].id_150              = b[i].id_150;
		 	    b4[z].econ                = b[i].econ;
				b4[z].wickets             = b[i].wickets;
				b4[z].matches             = b[i].matches;
				b4[z].caping              = b[i].caping;
				b4[z].count_150           = b[i].count_150;
				b4[z].balls_per_wicket    = b[i].balls_per_wicket;
				b4[z].SR                  = b[i].SR;
			
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  = b4[z].id_150;
	strcpy(t4[z].name,b4[z].bowler);
	t4[z].caping = b4[z].caping;
}
}
}
break;
case 4:{
	//calling Random   
c1 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_192[i] = *(c1+i);
}
c2 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_193[i] = *(c2+i);
}
c3 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_194[i] = *(c3+i);
}
c4 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_195[i] = *(c4+i);
}
    
//Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++)
{
	if(arr_192[i] < arr_193[i] && arr_192[i] < arr_194[i] && arr_192[i] < arr_195[i] )
	{
		cluster_150[i] = 1;
	}
	else if(arr_193[i] < arr_192[i] && arr_193[i] < arr_194[i] && arr_193[i] < arr_195[i])  
	{
		cluster_150[i] = 2;
	}
	else if(arr_194[i] < arr_192[i] && arr_194[i] < arr_193[i] && arr_194[i] < arr_195[i])
	{
		cluster_150[i] = 3;
	}
	else
	{
		cluster_150[i] = 4;
	}
}
//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] =b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else
	{
		arr_168[count_153] =b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5,sum6;
int loop;
float mean1,mean2,mean3,mean4,mean5,mean6;
int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_150; loop++) {
      sum =  sum  + arr_150[loop];
      sum2 = sum2 + arr_151[loop];
      sum3 = sum3 + arr_152[loop];
      sum4 = sum4 + arr_153[loop];
      sum5 = sum5 + arr_154[loop]; 
	  sum6 = sum6 + arr_155[loop];   
   }
   mean1 = sum  / count_150;
   mean2 = sum2 / count_150; 
   mean3 = sum3 / count_150; 
   mean4 = sum4 / count_150; 
   mean5 = sum5 / count_150; 
   mean6 = sum6 / count_150;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_186[i] = (sqrt(distance_150));
}
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_151; loop++) {
      sum =  sum  + arr_156[loop];
      sum2 = sum2 + arr_157[loop];
      sum3 = sum3 + arr_158[loop];
      sum4 = sum4 + arr_159[loop];
      sum5 = sum5 + arr_160[loop]; 
	  sum6 = sum6 + arr_161[loop];   
   }
   mean1 = sum  / count_151;
   mean2 = sum2 / count_151; 
   mean3 = sum3 / count_151; 
   mean4 = sum4 / count_151; 
   mean5 = sum5 / count_151; 
   mean6 = sum6 / count_151;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_187[i] = (sqrt(distance_150));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_152; loop++) {
      sum =  sum  + arr_162[loop];
      sum2 = sum2 + arr_163[loop];
      sum3 = sum3 + arr_164[loop];
      sum4 = sum4 + arr_165[loop];
      sum5 = sum5 + arr_166[loop]; 
	  sum6 = sum6 + arr_167[loop];   
   }
   mean1 = sum  / count_152;
   mean2 = sum2 / count_152; 
   mean3 = sum3 / count_152; 
   mean4 = sum4 / count_152; 
   mean5 = sum5 / count_152; 
   mean6 = sum6 / count_152;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_188[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_153; loop++) {
      sum =  sum  + arr_168[loop];
      sum2 = sum2 + arr_169[loop];
      sum3 = sum3 + arr_170[loop];
      sum4 = sum4 + arr_171[loop];
      sum5 = sum5 + arr_172[loop]; 
	  sum6 = sum6 + arr_173[loop];   
   }
   mean1 = sum  / count_153;
   mean2 = sum2 / count_153; 
   mean3 = sum3 / count_153; 
   mean4 = sum4 / count_153; 
   mean5 = sum5 / count_153; 
   mean6 = sum6 / count_153;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_189[i] = (sqrt(distance_150));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++){
	if(arr_186[i] < arr_187[i] && arr_186[i] < arr_188[i] && arr_186[i] < arr_189[i]){
		cluster_150[i] = 1;
	}
	else if (arr_187[i] < arr_186[i] && arr_187[i] < arr_188[i] && arr_187[i] < arr_189[i])  {
		cluster_150[i] = 2;
	}
	else if(arr_188[i] < arr_186[i] && arr_188[i] < arr_187[i] && arr_188[i] < arr_189[i]){
		cluster_150[i] = 3;
	}
	else{
		cluster_150[i] = 4;
	}
}

count_150 = count_151  =  count_152 = count_153 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] = b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else
	{
		arr_168[count_153] = b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	}

printf("Iteration %d\n",iter);
printf("Total number of Players in cluster 1:%d\t%d\n",iter , count_150 );
printf("Total number of Players in cluster 2:%d\t%d\n",iter , count_151);
printf("Total number of Players in cluster 3:%d\t%d\n",iter , count_152);
printf("Total number of Players in cluster 4:%d\t%d\n",iter , count_153);
printf("\n");
iter++;   
}
printf("\n");
int choice = 1;
 //Printing the output
 while(choice){
 printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:
	 for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 1){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
    }

	  break;
	case 2:
		for(z = 1; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 2){
			 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	case 3:
		for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 3){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	
	case 4:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 4){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	}
}
	break;  

	default:
{
printf("Enter valid input !");
break;
}
}
printf("Do you want to see another cluster(1/0):\n");
scanf("%d",&choice);
}

if(counter_150 == 0){
printf("Enter the player id you want to select");
for(i=0;i<tnb;i++){
    scanf("%d",&id_151[i]);
	}
	
	printf("\n");
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4){
			if(id_151[z] == b[i].id_150){
				
			strcpy(b2[z].bowler,b[i].bowler); 
				b2[z].id_150  = b[i].id_150;
		 	    b2[z].econ    = b[i].econ;
				b2[z].wickets = b[i].wickets;
				b2[z].matches = b[i].matches;
				b2[z].caping  = b[i].caping;
				b2[z].count_150   = b[i].count_150;
				b2[z].balls_per_wicket    = b[i].balls_per_wicket;
				b2[z].SR      = b[i].SR;
			}
		}
	}
}

//File Writing
	for(i=0;i<6;i++)
{
	strcpy(b3[i].bowler,b2[i].bowler);
	b3[i].id_150           = b2[i].id_150;  
	b3[i].econ             = b2[i].econ;
	b3[i].wickets          = b2[i].wickets;
	b3[i].matches          = b2[i].matches;
	b3[i].caping           = b2[i].caping;
	b3[i].count_150        = b2[i].count_150;
	b3[i].balls_per_wicket = b2[i].balls_per_wicket;
    b3[i].SR               = b2[i].SR;
}

}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_152[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_152[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4){
			if(id_152[z] == b[i].id_150){
				
			strcpy(b4[z].bowler,b[i].bowler); 
				b4[z].id_150              = b[i].id_150;
		 	    b4[z].econ                = b[i].econ;
				b4[z].wickets             = b[i].wickets;
				b4[z].matches             = b[i].matches;
				b4[z].caping              = b[i].caping;
				b4[z].count_150           = b[i].count_150;
				b4[z].balls_per_wicket    = b[i].balls_per_wicket;
				b4[z].SR                  = b[i].SR;
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  = b4[z].id_150;
	strcpy(t4[z].name,b4[z].bowler);
	t4[z].caping = b4[z].caping;
}
}
}
break;


case 5:{
	//calling Random   
c1 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_192[i] = *(c1+i);
}
c2 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_193[i] = *(c2+i);
}
c3 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_194[i] = *(c3+i);
}
c4 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_195[i] = *(c4+i);
}
c5 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_196[i] = *(c5+i);
}
    
//Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++)
{
	if(arr_192[i] < arr_193[i] && arr_192[i] < arr_194[i] && arr_192[i] < arr_195[i] && arr_192[i] < arr_196[i])
	{
		cluster_150[i] = 1;
	}
	else if(arr_193[i] < arr_192[i] && arr_193[i] < arr_194[i] && arr_193[i] < arr_195[i] && arr_193[i] < arr_196[i])  
	{
		cluster_150[i] = 2;
	}
	else if(arr_194[i] < arr_192[i] && arr_194[i] < arr_193[i] && arr_194[i] < arr_195[i] && arr_194[i] < arr_196[i])
	{
		cluster_150[i] = 3;
	}
	else if(arr_195[i] < arr_192[i] && arr_195[i] < arr_193[i] && arr_195[i] < arr_194[i] && arr_195[i] < arr_196[i])
	{
		cluster_150[i] = 4;
	}
	else{
		cluster_150[i] = 5;
	}
}
//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] =b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else if(cluster_150[i]==4)
	{
		arr_168[count_153] =b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	else
	{
	    arr_174[count_154] =b[i].econ;
        arr_175[count_154] = b[i].wickets;
        arr_176[count_154] = b[i].matches;
        arr_177[count_154] = b[i].count_150;
        arr_178[count_154] = b[i].balls_per_wicket;
        arr_179[count_154] = b[i].SR;
		count_154++;	
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5,sum6;
int loop;
float mean1,mean2,mean3,mean4,mean5,mean6;
int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_150; loop++) {
      sum =  sum  + arr_150[loop];
      sum2 = sum2 + arr_151[loop];
      sum3 = sum3 + arr_152[loop];
      sum4 = sum4 + arr_153[loop];
      sum5 = sum5 + arr_154[loop]; 
	  sum6 = sum6 + arr_155[loop];   
   }
   mean1 = sum  / count_150;
   mean2 = sum2 / count_150; 
   mean3 = sum3 / count_150; 
   mean4 = sum4 / count_150; 
   mean5 = sum5 / count_150; 
   mean6 = sum6 / count_150;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_186[i] = (sqrt(distance_150));
}
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_151; loop++) {
      sum =  sum  + arr_156[loop];
      sum2 = sum2 + arr_157[loop];
      sum3 = sum3 + arr_158[loop];
      sum4 = sum4 + arr_159[loop];
      sum5 = sum5 + arr_160[loop]; 
	  sum6 = sum6 + arr_161[loop];   
   }
   mean1 = sum  / count_151;
   mean2 = sum2 / count_151; 
   mean3 = sum3 / count_151; 
   mean4 = sum4 / count_151; 
   mean5 = sum5 / count_151; 
   mean6 = sum6 / count_151;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_187[i] = (sqrt(distance_150));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_152; loop++) {
      sum =  sum  + arr_162[loop];
      sum2 = sum2 + arr_163[loop];
      sum3 = sum3 + arr_164[loop];
      sum4 = sum4 + arr_165[loop];
      sum5 = sum5 + arr_166[loop]; 
	  sum6 = sum6 + arr_167[loop];   
   }
   mean1 = sum  / count_152;
   mean2 = sum2 / count_152; 
   mean3 = sum3 / count_152; 
   mean4 = sum4 / count_152; 
   mean5 = sum5 / count_152; 
   mean6 = sum6 / count_152;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_188[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_153; loop++) {
      sum =  sum  + arr_168[loop];
      sum2 = sum2 + arr_169[loop];
      sum3 = sum3 + arr_170[loop];
      sum4 = sum4 + arr_171[loop];
      sum5 = sum5 + arr_172[loop]; 
	  sum6 = sum6 + arr_173[loop];   
   }
   mean1 = sum  / count_153;
   mean2 = sum2 / count_153; 
   mean3 = sum3 / count_153; 
   mean4 = sum4 / count_153; 
   mean5 = sum5 / count_153; 
   mean6 = sum6 / count_153;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_189[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_154; loop++) {
      sum =  sum  + arr_174[loop];
      sum2 = sum2 + arr_175[loop];
      sum3 = sum3 + arr_176[loop];
      sum4 = sum4 + arr_177[loop];
      sum5 = sum5 + arr_178[loop]; 
	  sum6 = sum6 + arr_179[loop];   
   }
   mean1 = sum  / count_154;
   mean2 = sum2 / count_154; 
   mean3 = sum3 / count_154; 
   mean4 = sum4 / count_154; 
   mean5 = sum5 / count_154; 
   mean6 = sum6 / count_154;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_190[i] = (sqrt(distance_150));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++){
	if(arr_186[i] < arr_187[i] && arr_186[i] < arr_188[i] && arr_186[i] < arr_189[i] && arr_186[i] < arr_190[i]){
		cluster_150[i] = 1;
	}
	else if (arr_187[i] < arr_186[i] && arr_187[i] < arr_188[i] && arr_187[i] < arr_189[i] && arr_187[i] < arr_190[i])  {
		cluster_150[i] = 2;
	}
	else if(arr_188[i] < arr_186[i] && arr_188[i] < arr_187[i] && arr_188[i] < arr_189[i] && arr_188[i] < arr_190[i]){
		cluster_150[i] = 3;
	}
	else if(arr_189[i] < arr_186[i] && arr_189[i] < arr_187[i] && arr_189[i] < arr_188[i] && arr_189[i] < arr_190[i]){
		cluster_150[i] = 4;
	}
	else
	{
	   cluster_150[i] = 5;
	}
}

count_150 = count_151  =  count_152 = count_153 = count_154 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] = b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else if(cluster_150[i]==4)
	{
		arr_168[count_153] = b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	else 
	{
		arr_174[count_154] = b[i].econ;
        arr_175[count_154] = b[i].wickets;
        arr_176[count_154] = b[i].matches;
        arr_177[count_154] = b[i].count_150;
        arr_178[count_154] = b[i].balls_per_wicket;
        arr_179[count_154] = b[i].SR;
		count_154++;
	}
	}

printf("Iteration %d\n",iter);
printf("Total number of Players in cluster 1:%d\t%d\n",iter , count_150 );
printf("Total number of Players in cluster 2:%d\t%d\n",iter , count_151);
printf("Total number of Players in cluster 3:%d\t%d\n",iter , count_152);
printf("Total number of Players in cluster 4:%d\t%d\n",iter , count_153);
printf("Total number of Players in cluster 5:%d\t%d\n",iter , count_154);
printf("\n");
iter++;   
}

printf("\n");
int choice = 1;

 while(choice){
 printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:
	 for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 1){
	 		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
    }

	  break;
	case 2:
		for(z = 1; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 2){
	 		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	case 3:
		for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 3){
	 	 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	
	case 4:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 4){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
}
}
	break;  
	
	case 5:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 5){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	}
}
	break;  

	default:
{
	printf("Enter valid input !");
break;
}
}
printf("Do you want to see another cluster(1/0):\n");
scanf("%d",&choice);
}

if(counter_150 == 0){
printf("Enter the player id you want to select");
for(i=0;i<tnb;i++){
    scanf("%d",&id_151[i]);
	}
	
	printf("\n");
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4 || cluster_150[i] == 5){
			if(id_151[z] == b[i].id_150){
				
			strcpy(b2[z].bowler,b[i].bowler); 
				b2[z].id_150  = b[i].id_150;
		 	    b2[z].econ    = b[i].econ;
				b2[z].wickets = b[i].wickets;
				b2[z].matches = b[i].matches;
				b2[z].caping  = b[i].caping;
				b2[z].count_150   = b[i].count_150;
				b2[z].balls_per_wicket    = b[i].balls_per_wicket;
				b2[z].SR      = b[i].SR;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(b3[i].bowler,b2[i].bowler);
	b3[i].id_150           = b2[i].id_150;  
	b3[i].econ             = b2[i].econ;
	b3[i].wickets          = b2[i].wickets;
	b3[i].matches          = b2[i].matches;
	b3[i].caping           = b2[i].caping;
	b3[i].count_150        = b2[i].count_150;
	b3[i].balls_per_wicket = b2[i].balls_per_wicket;
    b3[i].SR               = b2[i].SR;
}
}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_152[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_152[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4 || cluster_150[i] == 5){
			if(id_152[z] == b[i].id_150){
				
			strcpy(b4[z].bowler,b[i].bowler);
				b4[z].id_150              = b[i].id_150; 
		 	    b4[z].econ                = b[i].econ;
				b4[z].wickets             = b[i].wickets;
				b4[z].matches             = b[i].matches;
				b4[z].caping              = b[i].caping;
				b4[z].count_150           = b[i].count_150;
				b4[z].balls_per_wicket    = b[i].balls_per_wicket;
				b4[z].SR                  = b[i].SR;
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  = b4[z].id_150;
	strcpy(t4[z].name,b4[z].bowler);
	t4[z].caping = b4[z].caping;
}
}
}
break;


case 6:{
	//calling Random   
c1 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_192[i] = *(c1+i);
}
c2 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_193[i] = *(c2+i);
}
c3 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_194[i] = *(c3+i);
}
c4 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_195[i] = *(c4+i);
}
c5 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_196[i] = *(c5+i);
}
c6 = Bowler_Random(b);
for(i = 0; i<Total_bowlers ; i++){
arr_197[i] = *(c6+i);
}
    
//Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++)
{
	if(arr_192[i] < arr_193[i] && arr_192[i] < arr_194[i] && arr_192[i] < arr_195[i] && arr_192[i] < arr_196[i] && arr_192[i] < arr_197[i])
	{
		cluster_150[i] = 1;
	}
	else if(arr_193[i] < arr_192[i] && arr_193[i] < arr_194[i] && arr_193[i] < arr_195[i] && arr_193[i] < arr_196[i] && arr_193[i] < arr_197[i])  
	{
		cluster_150[i] = 2;
	}
	else if(arr_194[i] < arr_192[i] && arr_194[i] < arr_193[i] && arr_194[i] < arr_195[i] && arr_194[i] < arr_196[i] && arr_194[i] < arr_197[i])
	{
		cluster_150[i] = 3;
	}
	else if(arr_195[i] < arr_192[i] && arr_195[i] < arr_193[i] && arr_195[i] < arr_194[i] && arr_195[i] < arr_196[i] && arr_195[i] < arr_197[i])
	{
		cluster_150[i] = 4;
	}
	else if(arr_196[i] < arr_192[i] && arr_196[i] < arr_193[i] && arr_196[i] < arr_194[i] && arr_196[i] < arr_195[i] && arr_196[i] < arr_197[i]){
		cluster_150[i] = 5;
	}
	else{
		cluster_150[i] = 6;
	}
}
//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] =b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else if(cluster_150[i]==4)
	{
		arr_168[count_153] =b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	else if(cluster_150[i]==5)
	{
	    arr_174[count_154] =b[i].econ;
        arr_175[count_154] = b[i].wickets;
        arr_176[count_154] = b[i].matches;
        arr_177[count_154] = b[i].count_150;
        arr_178[count_154] = b[i].balls_per_wicket;
        arr_179[count_154] = b[i].SR;
		count_154++;	
	}
	else
	{
	    arr_180[count_155] =b[i].econ;
        arr_181[count_155] = b[i].wickets;
        arr_182[count_155] = b[i].matches;
        arr_183[count_155] = b[i].count_150;
        arr_184[count_155] = b[i].balls_per_wicket;
        arr_185[count_155] = b[i].SR;
		count_155++;	
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5,sum6;
int loop;
float mean1,mean2,mean3,mean4,mean5,mean6;
int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_150; loop++) {
      sum =  sum  + arr_150[loop];
      sum2 = sum2 + arr_151[loop];
      sum3 = sum3 + arr_152[loop];
      sum4 = sum4 + arr_153[loop];
      sum5 = sum5 + arr_154[loop]; 
	  sum6 = sum6 + arr_155[loop];   
   }
   mean1 = sum  / count_150;
   mean2 = sum2 / count_150; 
   mean3 = sum3 / count_150; 
   mean4 = sum4 / count_150; 
   mean5 = sum5 / count_150; 
   mean6 = sum6 / count_150;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_186[i] = (sqrt(distance_150));
}
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_151; loop++) {
      sum =  sum  + arr_156[loop];
      sum2 = sum2 + arr_157[loop];
      sum3 = sum3 + arr_158[loop];
      sum4 = sum4 + arr_159[loop];
      sum5 = sum5 + arr_160[loop]; 
	  sum6 = sum6 + arr_161[loop];   
   }
   mean1 = sum  / count_151;
   mean2 = sum2 / count_151; 
   mean3 = sum3 / count_151; 
   mean4 = sum4 / count_151; 
   mean5 = sum5 / count_151; 
   mean6 = sum6 / count_151;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1 = mean1;
   wickets1 = mean2;
   matches1 = mean3;
   count_151 = mean4;
   balls_per_wicket1 = mean5;
   SR1 = mean6;
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_187[i] = (sqrt(distance_150));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_152; loop++) {
      sum =  sum  + arr_162[loop];
      sum2 = sum2 + arr_163[loop];
      sum3 = sum3 + arr_164[loop];
      sum4 = sum4 + arr_165[loop];
      sum5 = sum5 + arr_166[loop]; 
	  sum6 = sum6 + arr_167[loop];   
   }
   mean1 = sum  / count_152;
   mean2 = sum2 / count_152; 
   mean3 = sum3 / count_152; 
   mean4 = sum4 / count_152; 
   mean5 = sum5 / count_152; 
   mean6 = sum6 / count_152;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_188[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_153; loop++) {
      sum =  sum  + arr_168[loop];
      sum2 = sum2 + arr_169[loop];
      sum3 = sum3 + arr_170[loop];
      sum4 = sum4 + arr_171[loop];
      sum5 = sum5 + arr_172[loop]; 
	  sum6 = sum6 + arr_173[loop];   
   }
   mean1 = sum  / count_153;
   mean2 = sum2 / count_153; 
   mean3 = sum3 / count_153; 
   mean4 = sum4 / count_153; 
   mean5 = sum5 / count_153; 
   mean6 = sum6 / count_153;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_189[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_154; loop++) {
      sum =  sum  + arr_174[loop];
      sum2 = sum2 + arr_175[loop];
      sum3 = sum3 + arr_176[loop];
      sum4 = sum4 + arr_177[loop];
      sum5 = sum5 + arr_178[loop]; 
	  sum6 = sum6 + arr_179[loop];   
   }
   mean1 = sum  / count_154;
   mean2 = sum2 / count_154; 
   mean3 = sum3 / count_154; 
   mean4 = sum4 / count_154; 
   mean5 = sum5 / count_154; 
   mean6 = sum6 / count_154;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_190[i] = (sqrt(distance_150));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = sum6 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = mean6 = 0;
econ1 = wickets1 = matches1 = count_1 = balls_per_wicket1 = SR1 = 0;

   for(loop = 0; loop < count_155; loop++) {
      sum =  sum  + arr_180[loop];
      sum2 = sum2 + arr_181[loop];
      sum3 = sum3 + arr_182[loop];
      sum4 = sum4 + arr_183[loop];
      sum5 = sum5 + arr_184[loop]; 
	  sum6 = sum6 + arr_185[loop];   
   }
   mean1 = sum  / count_155;
   mean2 = sum2 / count_155; 
   mean3 = sum3 / count_155; 
   mean4 = sum4 / count_155; 
   mean5 = sum5 / count_155; 
   mean6 = sum6 / count_155;   
 
//calculating distance   
   for(i=1;i<Total_bowlers;i++)
   {
   econ1     = mean1;
   wickets1  = mean2;
   matches1  = mean3;
   count_151    = mean4;
   balls_per_wicket1 = mean5;
   SR1       = mean6;
   
   distance_x_150 = (econ1 - b[i].econ) * (econ1 - b[i].econ);
   distance_y_150 = (wickets1 - b[i].wickets) * (wickets1 - b[i].wickets);
   distance_z_150 = (matches1 - b[i].matches) * (matches1 - b[i].matches);
   distance_a_150 = (count_1 - b[i].count_150) * (count_1 - b[i].count_150);
   distance_b_150 = (balls_per_wicket1 - b[i].balls_per_wicket) * (balls_per_wicket1 - b[i].balls_per_wicket);
   distance_c_150 = (SR1 - b[i].SR) * (SR1 - b[i].SR);
   distance_150 = distance_x_150 + distance_y_150 + distance_z_150 + distance_a_150 + distance_b_150 + distance_c_150; 
   arr_191[i] = (sqrt(distance_150));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i<Total_bowlers ; i++){
	if(arr_186[i] < arr_187[i] && arr_186[i] < arr_188[i] && arr_186[i] < arr_189[i] && arr_186[i] < arr_190[i] && arr_186[i] < arr_191[i]){
		cluster_150[i] = 1;
	}
	else if (arr_187[i] < arr_186[i] && arr_187[i] < arr_188[i] && arr_187[i] < arr_189[i] && arr_187[i] < arr_190[i] && arr_187[i] < arr_191[i]) {
		cluster_150[i] = 2;
	}
	else if(arr_188[i] < arr_186[i] && arr_188[i] < arr_187[i] && arr_188[i] < arr_189[i] && arr_188[i] < arr_190[i] && arr_188[i] < arr_191[i]){
		cluster_150[i] = 3;
	}
	else if(arr_189[i] < arr_186[i] && arr_189[i] < arr_187[i] && arr_189[i] < arr_188[i] && arr_189[i] < arr_190[i] && arr_189[i] < arr_191[i]) {
		cluster_150[i] = 4;
	}
	else if(arr_190[i] < arr_186[i] && arr_190[i] < arr_187[i] && arr_190[i] < arr_188[i] && arr_190[i] < arr_189[i] && arr_190[i] < arr_191[i])
	{
	   cluster_150[i] = 5;
	}
	else{
		cluster_150[i] = 6;
	}
}

count_150 = count_151  =  count_152 = count_153 = count_154 = count_155 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_bowlers ; i++ ){
	if(cluster_150[i] == 1){
		arr_150[count_150] = b[i].econ;
        arr_151[count_150] = b[i].wickets;
        arr_152[count_150] = b[i].matches;
        arr_153[count_150] = b[i].count_150;
        arr_154[count_150] = b[i].balls_per_wicket;
        arr_155[count_150] = b[i].SR;
        count_150++;
    }
    else if(cluster_150[i]==2)
    {
    	arr_156[count_151] = b[i].econ;
        arr_157[count_151] = b[i].wickets;
        arr_158[count_151] = b[i].matches;
        arr_159[count_151] = b[i].count_150;
        arr_160[count_151] = b[i].balls_per_wicket;
        arr_161[count_151] = b[i].SR;
		count_151++;
	}
	else if(cluster_150[i]==3)
	{
		arr_162[count_152] = b[i].econ;
        arr_163[count_152] = b[i].wickets;
        arr_164[count_152] = b[i].matches;
        arr_165[count_152] = b[i].count_150;
        arr_166[count_152] = b[i].balls_per_wicket;
        arr_167[count_152] = b[i].SR;
		count_152++;
	}
	else if(cluster_150[i]==4)
	{
		arr_168[count_153] = b[i].econ;
        arr_169[count_153] = b[i].wickets;
        arr_170[count_153] = b[i].matches;
        arr_171[count_153] = b[i].count_150;
        arr_172[count_153] = b[i].balls_per_wicket;
        arr_173[count_153] = b[i].SR;
		count_153++;
	}
	else if(cluster_150[i]==5)
	{
		arr_174[count_154] = b[i].econ;
        arr_175[count_154] = b[i].wickets;
        arr_176[count_154] = b[i].matches;
        arr_177[count_154] = b[i].count_150;
        arr_178[count_154] = b[i].balls_per_wicket;
        arr_179[count_154] = b[i].SR;
		count_154++;
	}
	else 
	{
		arr_180[count_155] = b[i].econ;
        arr_181[count_155] = b[i].wickets;
        arr_182[count_155] = b[i].matches;
        arr_183[count_155] = b[i].count_150;
        arr_184[count_155] = b[i].balls_per_wicket;
        arr_185[count_155] = b[i].SR;
		count_155++;
	}
	}

printf("Iteration %d\n",iter);
printf("Total number of Players in cluster 1:%d\t%d\n",iter , count_150 );
printf("Total number of Players in cluster 2:%d\t%d\n",iter , count_151);
printf("Total number of Players in cluster 3:%d\t%d\n",iter , count_152);
printf("Total number of Players in cluster 4:%d\t%d\n",iter , count_153);
printf("Total number of Players in cluster 5:%d\t%d\n",iter , count_154);
printf("Total number of Players in cluster 6:%d\t%d\n",iter , count_155);
printf("\n");
iter++;   
}

printf("\n");
int choice = 1;

 //Printing the output
 while(choice){
 printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:
	 for(z =1 ; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 1){
	 	 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
    }

	  break;
	case 2:
		for(z = 1; z < Total_bowlers ; z++)
	 {
	 	if(cluster_150[z] == 2){
	 	 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	case 3:
	for(z =1 ; z < Total_bowlers ; z++)
	 {
	if(cluster_150[z] == 3){
			 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	break;
	
	case 4:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 4){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	}
}
	break;  
	
	case 5:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 5){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	}
}
	case 6:
	for(z =1 ; z < Total_bowlers ; z++)
	{
	if(cluster_150[z] == 6){
		 printf("%d\t %s\t\t " ,b[z].id_150,b[z].bowler);
	 if(b[z].caping == 10000000){
		printf("1 Crore");
	}
	if(b[z].caping == 5000000){
		printf("50 Lakhs");
	}
	if(b[z].caping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	}
}

	break;  

	default:
{
	printf("Enter valid input !\n");
break;
}
}
printf("Do you want to see another cluster(1/0):\n");
scanf("%d",&choice);
}

if(counter_150 == 0){
printf("Enter the player id you want to select");
for(i=0;i<tnb;i++){
    scanf("%d",&id_151[i]);
	}
	
	printf("\n");
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_bowlers;i++){
			if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4 || cluster_150[i] == 5 || cluster_150[i] == 6){
			if(id_151[z] == b[i].id_150){
				
			strcpy(b2[z].bowler,b[i].bowler);
				b2[z].id_150  = b[i].id_150; 
		 	    b2[z].econ    = b[i].econ;
				b2[z].wickets = b[i].wickets;
				b2[z].matches = b[i].matches;
				b2[z].caping  = b[i].caping;
				b2[z].count_150   = b[i].count_150;
				b2[z].balls_per_wicket    = b[i].balls_per_wicket;
				b2[z].SR      = b[i].SR;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(b3[i].bowler,b2[i].bowler);
	b3[i].id_150           = b2[i].id_150;  
	b3[i].econ             = b2[i].econ;
	b3[i].wickets          = b2[i].wickets;
	b3[i].matches          = b2[i].matches;
	b3[i].caping           = b2[i].caping;
	b3[i].count_150        = b2[i].count_150;
	b3[i].balls_per_wicket = b2[i].balls_per_wicket;
    b3[i].SR               = b2[i].SR;
}
}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_152[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_152[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_bowlers;i++){
		if(cluster_150[i] == 1 ||cluster_150[i] == 2 || cluster_150[i] == 3 || cluster_150[i] == 4 || cluster_150[i] == 5 || cluster_150[i] == 6){
			if(id_152[z] == b[i].id_150){
				
			strcpy(b4[z].bowler,b[i].bowler); 
				b4[z].id_150              = b[i].id_150;
		 	    b4[z].econ                = b[i].econ;
				b4[z].wickets             = b[i].wickets;
				b4[z].matches             = b[i].matches;
				b4[z].caping              = b[i].caping;
				b4[z].count_150           = b[i].count_150;
				b4[z].balls_per_wicket    = b[i].balls_per_wicket;
				b4[z].SR                  = b[i].SR;
			}
		}
	}
}
	for(z=0;z<size_1;z++){
	t4[z].b_id  = b4[z].id_150;
	strcpy(t4[z].name,b4[z].bowler);
	t4[z].caping = b4[z].caping;
}
}
}
break;
}
}

