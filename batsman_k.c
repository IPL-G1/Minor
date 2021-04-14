#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "Minor.h"
#define Total_batsman 265



 int *Random(struct players p[])  
  {
   int arr[ Total_batsman];
   int i ;
    double distance_x , distance_y , distance_z , distance_a , distance_b , distance;
 
   int randomIndex   = rand() % Total_batsman;
  
   int Runs     = p[randomIndex].total_runs;
   int Out    	= p[randomIndex].out;
   int Balls   	= p[randomIndex].numberofballs;
   int Avg  	= p[randomIndex].average;
   int Strike   = p[randomIndex].strikerate;
   for(i=1;i< Total_batsman;i++)
   {
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr[i] = (sqrt(distance));

}
return arr;
}

void Create_Team(int counter,int tnb){	

	
	int id_101[6];
	int arr[ Total_batsman] ,arr1[ Total_batsman] , arr2[ Total_batsman] , arr_3[ Total_batsman] , arr_4[ Total_batsman] , arr_5[ Total_batsman];
	int arr98[ Total_batsman] , arr99[ Total_batsman] , arr100[ Total_batsman] , arr101[ Total_batsman] , arr102[ Total_batsman] , arr103[ Total_batsman];
	int *a , *b , *c , *d , *e , *f;
	int cluster[ Total_batsman];
	int  arr3[ Total_batsman] ,  arr4[ Total_batsman] ,  arr5[ Total_batsman] , arr6[ Total_batsman];
	int  arr7[ Total_batsman] ,  arr8[ Total_batsman] ,  arr9[ Total_batsman] , arr10[ Total_batsman];
	int arr11[ Total_batsman] , arr12[ Total_batsman] , arr13[ Total_batsman] , arr14[ Total_batsman];
	int arr15[ Total_batsman] , arr16[ Total_batsman] , arr17[ Total_batsman] ;
	int arr18[ Total_batsman] , arr19[ Total_batsman] , arr20[ Total_batsman] , arr21[ Total_batsman] , arr22[ Total_batsman];
	int arr23[ Total_batsman] , arr24[ Total_batsman] , arr25[ Total_batsman] , arr26[ Total_batsman] , arr27[ Total_batsman];
	int arr28[ Total_batsman] , arr29[ Total_batsman] , arr30[ Total_batsman] , arr31[ Total_batsman] , arr32[ Total_batsman];
	int Runs ;
	int Out ;
	int Balls ;
	int Avg ;
	int Strike;

	double distance_x , distance_y , distance_z , distance_a , distance_b , distance;

	int n_1 ;
    y = 1;
    int z ,n;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
	int K;
	int z1;
	
	
		
	while(y){
	printf("\n");	
	printf("How many clusters you want?\n"); 	
    printf("Enter the value of K (2-7): ");
    scanf("%d",&K);
    
	FILE *the_file = fopen("most_runs_average_strikerate-2.csv","r");
    if (the_file == NULL)
    {

        perror("Unable to open the file");
        exit(1);
    }
    
    char line[200];

    while(fgets(line, sizeof(line), the_file)!=NULL && i < Total_batsman)
    {

        strcpy(p[i].batsman, strtok(line, ","));

        p[i].total_runs = atoi(strtok(NULL, ","));

        p[i].out = atoi(strtok(NULL, ","));

        p[i].numberofballs = atoi(strtok(NULL, ","));

        p[i].average = atof(strtok(NULL, ","));

        p[i].strikerate = atof(strtok(NULL, ","));
        
        p[i].capping = atoi(strtok(NULL, ","));
		
		p[i].id = atoi(strtok(NULL, ","));
        
        i++;
    }
srand(time(0));
switch(K){
	case 3:
{
 //calling Random   
c = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr98[i] = *(c+i);
}
a = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr99[i] = *(a+i);
}
b = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr100[i] = *(b+i);
}

 	
//Dividing into clusters
for(i=1 ; i< Total_batsman ; i++)
{
	if(arr98[i] < arr99[i] && arr98[i] < arr100[i] )
	{
		cluster[i] = 1;
	}
	else if(arr99[i] < arr98[i] && arr99[i] < arr100[i]) 
	{
		cluster[i] = 2;
	}
	else
	{
		cluster[i] = 3;
	}
}

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    	arr8[count1] = p[i].total_runs;
        arr9[count1] = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else
	{
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	}
	

//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5;
int loop;
   float mean1,mean2,mean3,mean4,mean5;
   int iteration;
   int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
Runs = Out = Balls = Avg = Strike = 0;

   for(loop = 0; loop < count; loop++) {
      sum =  sum  + arr3[loop];
      sum2 = sum2 + arr4[loop];
      sum3 = sum3 + arr5[loop];
      sum4 = sum4 + arr6[loop];
      sum5 = sum5 + arr7[loop];    
   }
   mean1 = sum  / count;
   mean2 = sum2 / count; 
   mean3 = sum3 / count; 
   mean4 = sum4 / count; 
   mean5 = sum5 / count;    
 
//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr[i] = (sqrt(distance));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count1; loop++) {
       sum = sum  + arr8[loop];
      sum2 = sum2 + arr9[loop];
      sum3 = sum3 + arr10[loop];
      sum4 = sum4 + arr11[loop];
      sum5 = sum5 + arr12[loop];
      
      
   }
   mean1 = sum / count1;
   mean2 = sum2 / count1; 
   mean3 = sum3 / count1; 
   mean4 = sum4 / count1; 
   mean5 = sum5 / count1;     

//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
    distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr1[i] = (sqrt(distance));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count2; loop++) {
       sum = sum  + arr13[loop];
      sum2 = sum2 + arr14[loop];
      sum3 = sum3 + arr15[loop];
      sum4 = sum4 + arr16[loop];
      sum5 = sum5 + arr17[loop];
     
   }
   mean1 = sum  / count2;
   mean2 = sum2 / count2; 
   mean3 = sum3 / count2; 
   mean4 = sum4 / count2; 
   mean5 = sum5 / count2;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr2[i] = (sqrt(distance));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i< Total_batsman ; i++){
	if(arr[i] < arr1[i] && arr[i] < arr2[i]){
		cluster[i] = 1;
	}
	else if (arr1[i] < arr[i] && arr1[i] < arr2[i]) {
		cluster[i] = 2;
	}
	else{
		cluster[i] = 3;
	}
}

count = count1  =  count2 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    //	player_name2[count1] = p[i].batsman;
    	arr8[count1]  = p[i].total_runs;
        arr9[count1]  = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else
	{
	//	player_name3[count2] = p[i].batsman;
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	}
printf("Iteration :%d\n",iter);
printf("Total number of Players in cluster 1:%d\n", count );
printf("Total number of Players in cluster 2:%d\n", count1);
printf("Total number of Players in cluster 3:%d\n", count2);
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
	 for(z =1 ; z < Total_batsman ; z++)
	 {
	 	if(cluster[z] == 1){
	 		
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
    }
}

	  break;
	case 2:
		for(z = 1; z < Total_batsman ; z++)
	 {
	 	if(cluster[z] == 2){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
	  break;
	case 3:
		for(z =1 ; z < Total_batsman ; z++)
	 {
	 	if(cluster[z] == 3){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
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
if(counter == 0){
printf("Enter the player id you want to select");
    for(i=0;i<tnb;i++){
    	scanf("%d",&id_1[i]);
	}
	
printf("\n");
printf("Selected Id's are: \n");	
for(i=0;i<tnb;i++){
	printf("%d\n",id_1[i]);
}
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3){
			if(id_1[z] == p[i].id){
				
			strcpy(p_1[z].batsman_5,p[i].batsman); 
		 	    p_1[z].total_runs_5    = p[i].total_runs;
				p_1[z].out_5           = p[i].out;
				p_1[z].numberofballs_5 = p[i].numberofballs;
				p_1[z].average_5       = p[i].average;
				p_1[z].strikerate_5    = p[i].strikerate;
				p_1[z].capping_5       = p[i].capping;
				p_1[z].id_5            = p[i].id;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(p_3[i].batsman_5,p_1[i].batsman_5);
	p_3[i].id_5            = p_1[i].id_5;  
	p_3[i].total_runs_5    = p_1[i].total_runs_5;
	p_3[i].out_5           = p_1[i].out_5;
	p_3[i].numberofballs_5 = p_1[i].numberofballs_5;
	p_3[i].average_5       = p_1[i].average_5;
	p_3[i].strikerate_5    = p_1[i].strikerate_5;
	p_3[i].capping_5       = p_1[i].capping_5;
}
}
else
{	
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_101[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_101[i]);
}
	printf("\n");                                                                        
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3){
			if(id_101[z] == p[i].id){
				
			strcpy(p_4[z].batsman_5,p[i].batsman); 
		 	    p_4[z].total_runs_5    = p[i].total_runs;
				p_4[z].out_5           = p[i].out;
				p_4[z].numberofballs_5 = p[i].numberofballs;
				p_4[z].average_5       = p[i].average;
				p_4[z].strikerate_5    = p[i].strikerate;
				p_4[z].id_5            = p[i].id;
				p_4[z].capping_5       = p[i].capping;
			
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  = p_4[z].id_5;
	strcpy(t4[z].name,p_4[z].batsman_5);
	t4[z].caping = p_4[z].capping_5;
}
}
}
break;

case 4:{
 //calling Random   
c = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr98[i] = *(c+i);
}
a = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr99[i] = *(a+i);
}
b = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr100[i] = *(b+i);
}
d = Random(p);
for(i=0; i< Total_batsman ; i++){
arr101[i] = *(d+i);
}

 	
//Dividing into clusters
for(i=1 ; i< Total_batsman ; i++)
{
	if(arr98[i] < arr99[i] && arr98[i] < arr100[i] && arr98[i] < arr101[i] )
	{
		cluster[i] = 1;
	}
	else if(arr99[i] < arr98[i] && arr99[i] < arr100[i] && arr99[i] < arr101[i])  
	{
		cluster[i] = 2;
	}
	else if(arr100[i] < arr98[i] && arr100[i] < arr99[i] && arr100[i] < arr101[i])
	{
		cluster[i] = 3;
	}
	else
	{
		cluster[i] = 4;
	}
}

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    	arr8[count1] = p[i].total_runs;
        arr9[count1] = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;
		count3++;
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5;
int loop;
   float mean1,mean2,mean3,mean4,mean5;
   int iteration;
   int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
Runs = Out = Balls = Avg = Strike = 0;

   for(loop = 0; loop < count; loop++) {
      sum =  sum  + arr3[loop];
      sum2 = sum2 + arr4[loop];
      sum3 = sum3 + arr5[loop];
      sum4 = sum4 + arr6[loop];
      sum5 = sum5 + arr7[loop];    
   }
   mean1 = sum  / count;
   mean2 = sum2 / count; 
   mean3 = sum3 / count; 
   mean4 = sum4 / count; 
   mean5 = sum5 / count;    
 
//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr[i] = (sqrt(distance));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count1; loop++) {
       sum = sum  + arr8[loop];
      sum2 = sum2 + arr9[loop];
      sum3 = sum3 + arr10[loop];
      sum4 = sum4 + arr11[loop];
      sum5 = sum5 + arr12[loop];
      
      
   }
   mean1 = sum / count1;
   mean2 = sum2 / count1; 
   mean3 = sum3 / count1; 
   mean4 = sum4 / count1; 
   mean5 = sum5 / count1;     

//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
    distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr1[i] = (sqrt(distance));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count2; loop++) {
       sum = sum  + arr13[loop];
      sum2 = sum2 + arr14[loop];
      sum3 = sum3 + arr15[loop];
      sum4 = sum4 + arr16[loop];
      sum5 = sum5 + arr17[loop];
     
   }
   mean1 = sum  / count2;
   mean2 = sum2 / count2; 
   mean3 = sum3 / count2; 
   mean4 = sum4 / count2; 
   mean5 = sum5 / count2;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr2[i] = (sqrt(distance));

}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count3; loop++) {
       sum = sum  + arr18[loop];
      sum2 = sum2 + arr19[loop];
      sum3 = sum3 + arr20[loop];
      sum4 = sum4 + arr21[loop];
      sum5 = sum5 + arr22[loop];
     
   }
   mean1 = sum  / count3;
   mean2 = sum2 / count3; 
   mean3 = sum3 / count3; 
   mean4 = sum4 / count3; 
   mean5 = sum5 / count3;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_3[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i< Total_batsman ; i++){
	if(arr[i] < arr1[i] && arr[i] < arr2[i] && arr[i] < arr_3[i]){
		cluster[i] = 1;
	}
	else if (arr1[i] < arr[i] && arr1[i] < arr2[i] && arr1[i] < arr_3[i])  {
		cluster[i] = 2;
	}
	else if(arr2[i] < arr[i] && arr2[i] < arr1[i] && arr2[i] < arr_3[i]){
		cluster[i] = 3;
	}
	else{
		cluster[i] = 4;
	}
}

count = count1  =  count2 = count3 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    	arr8[count1]  = p[i].total_runs;
        arr9[count1]  = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;	
		count3++;
	}
	}
printf("Iteration :%d\n",iter);
printf("Total number of Players in cluster 1:%d\n", count );
printf("Total number of Players in cluster 2:%d\n", count1);
printf("Total number of Players in cluster 3:%d\n", count2);
printf("Total number of Players in cluster 4:%d\n", count3);
printf("\n");
iter++;   
}

int choice = 1;

 //Printing the output
 while(choice){
printf("Enter the value of cluster:");
 int z,n;
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:	
	 for(z = 1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 1){
	printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
	}
	break;
	  
	case 2:
	for(z = 1; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 2){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
break;
	case 3:
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 3){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
break;
	case 4:
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 4){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
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
if(counter == 0){
printf("Enter the player id you want to select");
    for(i=0;i<tnb;i++){
    	scanf("%d",&id_1[i]);
	}
	
printf("\n");
printf("Selected Id's are: \n");	
for(i=0;i<tnb;i++){
	printf("%d\n",id_1[i]);
}
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4){
			if(id_1[z] == p[i].id){
				
			strcpy(p_1[z].batsman_5,p[i].batsman); 
		 	    p_1[z].total_runs_5    = p[i].total_runs;
				p_1[z].out_5           = p[i].out;
				p_1[z].numberofballs_5 = p[i].numberofballs;
				p_1[z].average_5       = p[i].average;
				p_1[z].strikerate_5    = p[i].strikerate;
				p_1[z].capping_5       = p[i].capping;
				p_1[z].id_5            = p[i].id;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(p_3[i].batsman_5,p_1[i].batsman_5);
	p_3[i].id_5            = p_1[i].id_5;  
	p_3[i].total_runs_5    = p_1[i].total_runs_5;
	p_3[i].out_5           = p_1[i].out_5;
	p_3[i].numberofballs_5 = p_1[i].numberofballs_5;
	p_3[i].average_5       = p_1[i].average_5;
	p_3[i].strikerate_5    = p_1[i].strikerate_5;
	p_3[i].capping_5       = p_1[i].capping_5;
}
}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_101[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_101[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4){
			if(id_101[z] == p[i].id){
				
			strcpy(p_4[z].batsman_5,p[i].batsman); 
		 	    p_4[z].total_runs_5    = p[i].total_runs;
				p_4[z].out_5           = p[i].out;
				p_4[z].numberofballs_5 = p[i].numberofballs;
				p_4[z].average_5       = p[i].average;
				p_4[z].strikerate_5    = p[i].strikerate;
				p_4[z].capping_5       = p[i].capping;
				p_4[z].id_5            = p[i].id;
						
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  = p_4[z].id_5;
	strcpy(t4[z].name,p_4[z].batsman_5);
	t4[z].caping = p_4[z].capping_5;
}
}
}
break;


case 5:
	{
		 //calling Random   
c = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr98[i] = *(c+i);
}
a = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr99[i] = *(a+i);
}
b = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr100[i] = *(b+i);
}
d = Random(p);
for(i=0; i< Total_batsman ; i++){
arr101[i] = *(d+i);
}
e = Random(p);
for(i=0; i< Total_batsman ; i++){
arr102[i] = *(e+i);
}

 	
//Dividing into clusters
for(i=1 ; i< Total_batsman ; i++)
{
	if(arr98[i] < arr99[i] && arr98[i] < arr100[i] && arr98[i] < arr101[i] && arr98[i] < arr102[i])
	{
		cluster[i] = 1;
	}
	else if(arr99[i] < arr98[i] && arr99[i] < arr100[i] && arr99[i] < arr101[i] && arr99[i] < arr102[i])  
	{
		cluster[i] = 2;
	}
	else if(arr100[i] < arr98[i] && arr100[i] < arr99[i] && arr100[i] < arr101[i] && arr100[i] < arr102[i])
	{
		cluster[i] = 3;
	}
	else if(arr101[i] < arr98[i] && arr101[i] < arr99[i] && arr101[i] < arr100[i] && arr101[i] < arr102[i])
	{
		cluster[i] = 4;
	}
	else{
		cluster[i] = 5;
	}
}

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    	arr8[count1] = p[i].total_runs;
        arr9[count1] = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else if(cluster[i]==4)
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;
		count3++;
	}
	else
	{
	    arr23[count4] = p[i].total_runs;
		arr24[count4] = p[i].out;
		arr25[count4] = p[i].numberofballs;
		arr26[count4] = p[i].average;
		arr27[count4] = p[i].strikerate;
		count4++;
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5;
int loop;
   float mean1,mean2,mean3,mean4,mean5;
   int iteration;
   int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
Runs = Out = Balls = Avg = Strike = 0;

   for(loop = 0; loop < count; loop++) {
      sum =  sum  + arr3[loop];
      sum2 = sum2 + arr4[loop];
      sum3 = sum3 + arr5[loop];
      sum4 = sum4 + arr6[loop];
      sum5 = sum5 + arr7[loop];    
   }
   mean1 = sum  / count;
   mean2 = sum2 / count; 
   mean3 = sum3 / count; 
   mean4 = sum4 / count; 
   mean5 = sum5 / count;    
 //  printf("%d Mean %.2f \t",iter, mean1);
 //  printf("%d Mean %.2f\n",iter , mean2); 
 
//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr[i] = (sqrt(distance));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count1; loop++) {
       sum = sum  + arr8[loop];
      sum2 = sum2 + arr9[loop];
      sum3 = sum3 + arr10[loop];
      sum4 = sum4 + arr11[loop];
      sum5 = sum5 + arr12[loop];
      
      
   }
   mean1 = sum / count1;
   mean2 = sum2 / count1; 
   mean3 = sum3 / count1; 
   mean4 = sum4 / count1; 
   mean5 = sum5 / count1;     

//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
    distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr1[i] = (sqrt(distance));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count2; loop++) {
       sum = sum  + arr13[loop];
      sum2 = sum2 + arr14[loop];
      sum3 = sum3 + arr15[loop];
      sum4 = sum4 + arr16[loop];
      sum5 = sum5 + arr17[loop];
     
   }
   mean1 = sum  / count2;
   mean2 = sum2 / count2; 
   mean3 = sum3 / count2; 
   mean4 = sum4 / count2; 
   mean5 = sum5 / count2;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr2[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count3; loop++) {
       sum = sum  + arr18[loop];
      sum2 = sum2 + arr19[loop];
      sum3 = sum3 + arr20[loop];
      sum4 = sum4 + arr21[loop];
      sum5 = sum5 + arr22[loop];
     
   }
   mean1 = sum  / count3;
   mean2 = sum2 / count3; 
   mean3 = sum3 / count3; 
   mean4 = sum4 / count3; 
   mean5 = sum5 / count3;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_3[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count4; loop++) {
       sum = sum  + arr23[loop];
      sum2 = sum2 + arr24[loop];
      sum3 = sum3 + arr25[loop];
      sum4 = sum4 + arr26[loop];
      sum5 = sum5 + arr27[loop];
     
   }
   mean1 = sum  / count4;
   mean2 = sum2 / count4; 
   mean3 = sum3 / count4; 
   mean4 = sum4 / count4; 
   mean5 = sum5 / count4;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_4[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i< Total_batsman ; i++){
	if(arr[i] < arr1[i] && arr[i] < arr2[i] && arr[i] < arr_3[i] && arr[i] < arr_4[i]){
		cluster[i] = 1;
	}
	else if (arr1[i] < arr[i] && arr1[i] < arr2[i] && arr1[i] < arr_3[i] && arr1[i] < arr_4[i])  {
		cluster[i] = 2;
	}
	else if(arr2[i] < arr[i] && arr2[i] < arr1[i] && arr2[i] < arr_3[i] && arr2[i] < arr_4[i]){
		cluster[i] = 3;
	}
	else if(arr_3[i] < arr[i] && arr_3[i] < arr1[i] && arr_3[i] < arr2[i] && arr_3[i] < arr_4[i]){
		cluster[i] = 4;
	}
	else
	{
	   cluster[i] = 5;
	}
}

count = count1  =  count2 = count3 = count4 =  0;

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    //	player_name2[count1] = p[i].batsman;
    	arr8[count1]  = p[i].total_runs;
        arr9[count1]  = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
	//	player_name3[count2] = p[i].batsman;
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else if(cluster[i] == 4)
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;	
		count3++;
	}
	else
	{
		arr23[count4] = p[i].total_runs;
		arr24[count4] = p[i].out;
		arr25[count4] = p[i].numberofballs;
		arr26[count4] = p[i].average;
		arr27[count4] = p[i].strikerate;	
		count4++;
	}
	}
printf("Iteration :%d\n",iter);
printf("Total number of Players in cluster 1:%d\n", count );
printf("Total number of Players in cluster 2:%d\n", count1);
printf("Total number of Players in cluster 3:%d\n", count2);
printf("Total number of Players in cluster 4:%d\n", count3);
printf("Total number of Players in cluster 5:%d\n", count4);
printf("\n");
iter++;   
}
int choice = 1;
 int z,n;
 //Printing the output
 while(choice){
printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:	
	 for(z = 1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 1){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
	}
	break;
	  
	case 2:
	for(z = 1; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 2){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
break;
	case 3:
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 3){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
break;
	case 4:
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 4){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}

break;
	case 5:
	for(z =1 ; z < Total_batsman ; z++){
	 if(cluster[z] == 5){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
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
if(counter == 0){
printf("Enter the player id you want to select");
    for(i=0;i<tnb;i++){
    	scanf("%d",&id_1[i]);
	}
	
printf("\n");
printf("Selected Id's are: \n");	
for(i=0;i<tnb;i++){
	printf("%d\n",id_1[i]);
}
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4 || cluster[i] == 5){
			if(id_1[z] == p[i].id){
				
			strcpy(p_1[z].batsman_5,p[i].batsman); 
		 	    p_1[z].total_runs_5    = p[i].total_runs;
				p_1[z].out_5           = p[i].out;
				p_1[z].numberofballs_5 = p[i].numberofballs;
				p_1[z].average_5       = p[i].average;
				p_1[z].strikerate_5    = p[i].strikerate;
				p_1[z].capping_5       = p[i].capping;
				p_1[z].id_5            = p[i].id;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(p_3[i].batsman_5,p_1[i].batsman_5);
	p_3[i].id_5            = p_1[i].id_5;  
	p_3[i].total_runs_5    = p_1[i].total_runs_5;
	p_3[i].out_5           = p_1[i].out_5;
	p_3[i].numberofballs_5 = p_1[i].numberofballs_5;
	p_3[i].average_5       = p_1[i].average_5;
	p_3[i].strikerate_5    = p_1[i].strikerate_5;
	p_3[i].capping_5       = p_1[i].capping_5;
}
}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_101[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_101[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4 || cluster[i] == 5){
			if(id_101[z] == p[i].id){
				
			strcpy(p_4[z].batsman_5,p[i].batsman); 
		 	    p_4[z].total_runs_5    = p[i].total_runs;
				p_4[z].out_5           = p[i].out;
				p_4[z].numberofballs_5 = p[i].numberofballs;
				p_4[z].average_5       = p[i].average;
				p_4[z].strikerate_5    = p[i].strikerate;
				p_4[z].capping_5       = p[i].capping;
				p_4[z].id_5            = p[i].id;
				
			}
		}
	}
}
	for(z=0;z<size_1;z++){
	t4[z].b_id  	= p_4[z].id_5;
	strcpy(t4[z].name,p_4[z].batsman_5);
	t4[z].caping 	= p_4[z].capping_5;
}
}
}
break;


 case 6:
 	{

c = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr98[i] = *(c+i);
}
a = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr99[i] = *(a+i);
}
b = Random(p);
for(i = 0; i< Total_batsman ; i++){
arr100[i] = *(b+i);
}
d = Random(p);
for(i=0; i< Total_batsman ; i++){
arr101[i] = *(d+i);
}
e = Random(p);
for(i=0; i< Total_batsman ; i++){
arr102[i] = *(e+i);
}
f= Random(p);
for(i=0;i< Total_batsman;i++){
arr103[i] = *(f+i);
}
 	
//Dividing into clusters
for(i=1 ; i< Total_batsman ; i++)
{
	if(arr98[i] < arr99[i] && arr98[i] < arr100[i] && arr98[i] < arr101[i] && arr98[i] < arr102[i] && arr98[i] < arr103[i])
	{
		cluster[i] = 1;
	}
	else if(arr99[i] < arr98[i] && arr99[i] < arr100[i] && arr99[i] < arr101[i] && arr99[i] < arr102[i] && arr99[i] < arr103[i])  
	{
		cluster[i] = 2;
	}
	else if(arr100[i] < arr98[i] && arr100[i] < arr99[i] && arr100[i] < arr101[i] && arr100[i] < arr102[i] && arr100[i] < arr103[i])
	{
		cluster[i] = 3;
	}
	else if(arr101[i] < arr98[i] && arr101[i] < arr99[i] && arr101[i] < arr100[i] && arr101[i] < arr102[i] && arr101[i] < arr103[i])
	{
		cluster[i] = 4;
	}
	else if(arr102[i] < arr98[i] && arr102[i] < arr99[i] && arr102[i] < arr100[i] && arr102[i] < arr101[i] && arr102[i] < arr103[i]){
		cluster[i] = 5;
	}
	else{
		cluster[i] = 6;
	}
}

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    	arr8[count1] = p[i].total_runs;
        arr9[count1] = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else if(cluster[i]==4)
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;
		count3++;
	}
	else if(cluster[i]==5)
	{
	    arr23[count4] = p[i].total_runs;
		arr24[count4] = p[i].out;
		arr25[count4] = p[i].numberofballs;
		arr26[count4] = p[i].average;
		arr27[count4] = p[i].strikerate;
		count4++;
	}
	else
	{
		arr28[count5] = p[i].total_runs;
		arr29[count5] = p[i].out;
		arr30[count5] = p[i].numberofballs;
		arr31[count5] = p[i].average;
		arr32[count5] = p[i].strikerate;
		count5++;
		
	}
	}
	
//Calculating mean and next iterations will be followed
float sum,sum2,sum3,sum4,sum5;
int loop;
   float mean1,mean2,mean3,mean4,mean5;
   int iteration;
   int iter=1;

while(iter < 4)
{
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
Runs = Out = Balls = Avg = Strike = 0;

   for(loop = 0; loop < count; loop++) {
      sum =  sum  + arr3[loop];
      sum2 = sum2 + arr4[loop];
      sum3 = sum3 + arr5[loop];
      sum4 = sum4 + arr6[loop];
      sum5 = sum5 + arr7[loop];    
   }
   mean1 = sum  / count;
   mean2 = sum2 / count; 
   mean3 = sum3 / count; 
   mean4 = sum4 / count; 
   mean5 = sum5 / count;     
 
//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr[i] = (sqrt(distance));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count1; loop++) {
       sum = sum  + arr8[loop];
      sum2 = sum2 + arr9[loop];
      sum3 = sum3 + arr10[loop];
      sum4 = sum4 + arr11[loop];
      sum5 = sum5 + arr12[loop];
      
      
   }
   mean1 = sum / count1;
   mean2 = sum2 / count1; 
   mean3 = sum3 / count1; 
   mean4 = sum4 / count1; 
   mean5 = sum5 / count1;     

//calculating distance   
   for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
    distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr1[i] = (sqrt(distance));
}
   
//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count2; loop++) {
       sum = sum  + arr13[loop];
      sum2 = sum2 + arr14[loop];
      sum3 = sum3 + arr15[loop];
      sum4 = sum4 + arr16[loop];
      sum5 = sum5 + arr17[loop];
     
   }
   mean1 = sum  / count2;
   mean2 = sum2 / count2; 
   mean3 = sum3 / count2; 
   mean4 = sum4 / count2; 
   mean5 = sum5 / count2;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr2[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

//Calculating mean
sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count3; loop++) {
       sum = sum  + arr18[loop];
      sum2 = sum2 + arr19[loop];
      sum3 = sum3 + arr20[loop];
      sum4 = sum4 + arr21[loop];
      sum5 = sum5 + arr22[loop];
     
   }
   mean1 = sum  / count3;
   mean2 = sum2 / count3; 
   mean3 = sum3 / count3; 
   mean4 = sum4 / count3; 
   mean5 = sum5 / count3;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_3[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count4; loop++) {
       sum = sum  + arr23[loop];
      sum2 = sum2 + arr24[loop];
      sum3 = sum3 + arr25[loop];
      sum4 = sum4 + arr26[loop];
      sum5 = sum5 + arr27[loop];
     
   }
   mean1 = sum  / count4;
   mean2 = sum2 / count4; 
   mean3 = sum3 / count4; 
   mean4 = sum4 / count4; 
   mean5 = sum5 / count4;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_4[i] = (sqrt(distance));
  // printf("%f\t", round(sqrt(distance)));
}

sum = sum2 = sum3 = sum4 = sum5 = 0;
mean1 = mean2 = mean3 = mean4 = mean5 = 0;
   
   for(loop = 0; loop < count5; loop++) {
       sum = sum  + arr23[loop];
      sum2 = sum2 + arr24[loop];
      sum3 = sum3 + arr25[loop];
      sum4 = sum4 + arr26[loop];
      sum5 = sum5 + arr27[loop];
     
   }
   mean1 = sum  / count5;
   mean2 = sum2 / count5; 
   mean3 = sum3 / count5; 
   mean4 = sum4 / count5; 
   mean5 = sum5 / count5;     

//calculating distance
for(i=1;i< Total_batsman;i++)
   {
   	Runs = mean1;
   	Out = mean2;
   	Balls = mean3;
   	Avg = mean4;
   	Strike = mean5;
   	
   distance_x = (Runs - p[i].total_runs) * (Runs - p[i].total_runs);
   distance_y = (Out - p[i].out) * (Out - p[i].out);
   distance_z = (Balls - p[i].numberofballs) * (Balls - p[i].numberofballs);
   distance_a = (Avg - p[i].average) * (Avg - p[i].average);
   distance_b = (Strike - p[i].strikerate) * (Strike - p[i].strikerate);
   distance = distance_x + distance_y + distance_z + distance_a + distance_b;  
   arr_5[i] = (sqrt(distance));
}

//Comparing Distance and Dividing into clusters
for(i=1 ; i< Total_batsman ; i++){
	if(arr[i] < arr1[i] && arr[i] < arr2[i] && arr[i] < arr_3[i] && arr[i] < arr_4[i] && arr[i] < arr_5[i]){
		cluster[i] = 1;
	}
	else if (arr1[i] < arr[i] && arr1[i] < arr2[i] && arr1[i] < arr_3[i] && arr1[i] < arr_4[i] && arr1[i] < arr_5[i])  {
		cluster[i] = 2;
	}
	else if(arr2[i] < arr[i] && arr2[i] < arr1[i] && arr2[i] < arr_3[i] && arr2[i] < arr_4[i] && arr2[i] < arr_5[i]){
		cluster[i] = 3;
	}
	else if(arr_3[i] < arr[i] && arr_3[i] < arr1[i] && arr_3[i] < arr2[i] && arr_3[i] < arr_4[i] && arr_3[i] < arr_5[i])  {
		cluster[i] = 4;
	}
	else if(arr_4[i] < arr[i] && arr_4[i] < arr1[i] && arr_4[i] < arr2[i] && arr_4[i] < arr_3[i] && arr_4[i] < arr_5[i])
	{
	   cluster[i] = 5;
	}
	else{
		cluster[i] = 6;
	}
}

count = count1  =  count2 = count3 = count4 = count5 = 0;

//Storing cluster data into array
for(i = 1 ; i < Total_batsman ; i++ ){
	if(cluster[i] == 1){
		
		arr3[count] = p[i].total_runs;
        arr4[count] = p[i].out;
        arr5[count] = p[i].numberofballs;
        arr6[count] = p[i].average;
        arr7[count] = p[i].strikerate;
        count++;
    }
    else if(cluster[i]==2)
    {
    //	player_name2[count1] = p[i].batsman;
    	arr8[count1]  = p[i].total_runs;
        arr9[count1]  = p[i].out;
        arr10[count1] = p[i].numberofballs;
        arr11[count1] = p[i].average;
        arr12[count1] = p[i].strikerate;
        count1++;
	}
	else if(cluster[i]==3)
	{
	//	player_name3[count2] = p[i].batsman;
		arr13[count2] = p[i].total_runs;
        arr14[count2] = p[i].out;
        arr15[count2] = p[i].numberofballs;
        arr16[count2] = p[i].average;
        arr17[count2] = p[i].strikerate;
        count2++;
	}
	else if(cluster[i] == 4)
	{
		arr18[count3] = p[i].total_runs;
		arr19[count3] = p[i].out;
		arr20[count3] = p[i].numberofballs;
		arr21[count3] = p[i].average;
		arr22[count3] = p[i].strikerate;	
		count3++;
	}
	else if(cluster[i] == 5)
	{
		arr23[count4] = p[i].total_runs;
		arr24[count4] = p[i].out;
		arr25[count4] = p[i].numberofballs;
		arr26[count4] = p[i].average;
		arr27[count4] = p[i].strikerate;	
		count4++;
	}
	else
	{
		arr28[count5] = p[i].total_runs;
		arr29[count5] = p[i].out;
		arr30[count5] = p[i].numberofballs;
		arr31[count5] = p[i].average;
		arr32[count5] = p[i].strikerate;
		count5++;
	}
	}
printf("Iteration :%d\n",iter);
printf("Total number of Players in cluster 1:%d\n", count );
printf("Total number of Players in cluster 2:%d\n", count1);
printf("Total number of Players in cluster 3:%d\n", count2);
printf("Total number of Players in cluster 4:%d\n", count3);
printf("Total number of Players in cluster 5:%d\n", count4);
printf("Total number of Players in cluster 6:%d\n", count5);
printf("\n");
iter++;   
}
int choice = 1;
 int z,n;
 //Printing the output
while(choice){
printf("Enter the value of cluster:");
 scanf("%d",&n);
 switch(n)
 {
 	
 	case 1:
	 {	
	 for(z = 1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 1){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
	}
}
	break;
	  
	case 2:
{	
	for(z = 1; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 2){
	printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
}
break;
	case 3:
{
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 3){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
}
break;
	case 4:
{
	for(z =1 ; z < Total_batsman ; z++)
	 {
	 if(cluster[z] == 4){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
}
break;

	case 5:
{
	for(z =1 ; z < Total_batsman ; z++){
	 if(cluster[z] == 5){
	 printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
	  printf("\n");
	  }
}
}
break;
case 6:
	{
	for(z=1 ; z< Total_batsman ; z++){
		if(cluster[z] == 6){
			printf("%d\t %s\t\t" ,p[z].id,p[z].batsman);
	 if(p[z].capping == 10000000){
		printf("1 Crore");
	}
	if(p[z].capping == 5000000){
		printf("50 Lakhs");
	}
	if(p[z].capping == 2000000){
		printf("20 Lakhs");
	  }
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
if(counter == 0){
printf("Enter the player id you want to select");
    for(i=0;i<tnb;i++){
    	scanf("%d",&id_1[i]);
	}
printf("\n");
printf("Selected Id's are: \n");	
for(i=0;i<tnb;i++){
	printf("%d\n",id_1[i]);
}
   	for(z=0;z<tnb;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4 || cluster[i] == 5 || cluster[i] == 6){
			if(id_1[z] == p[i].id){
				
			strcpy(p_1[z].batsman_5,p[i].batsman); 
		 	    p_1[z].total_runs_5    = p[i].total_runs;
				p_1[z].out_5           = p[i].out;
				p_1[z].numberofballs_5 = p[i].numberofballs;
				p_1[z].average_5       = p[i].average;
				p_1[z].strikerate_5    = p[i].strikerate;
				p_1[z].capping_5       = p[i].capping;
				p_1[z].id_5            = p[i].id;
			}
		}
	}
}
//File Writing
	for(i=0;i<tnb;i++)
{
	strcpy(p_3[i].batsman_5,p_1[i].batsman_5);
	p_3[i].id_5            = p_1[i].id_5;  
	p_3[i].total_runs_5    = p_1[i].total_runs_5;
	p_3[i].out_5           = p_1[i].out_5;
	p_3[i].numberofballs_5 = p_1[i].numberofballs_5;
	p_3[i].average_5       = p_1[i].average_5;
	p_3[i].strikerate_5    = p_1[i].strikerate_5;
	p_3[i].capping_5       = p_1[i].capping_5;
}
}
else
{
printf("Enter the player id you want to select");
for(i=0;i<size_1;i++){
    scanf("%d",&id_101[i]);
	}
for(i=0;i<size_1;i++){
	printf("%d\n",id_101[i]);
}
	printf("\n");
	for(z=0;z<size_1;z++){
		for(i=1;i<Total_batsman;i++){
			if(cluster[i] == 1 ||cluster[i] == 2 || cluster[i] == 3 || cluster[i] == 4 || cluster[i] == 5 || cluster[i] == 6){
			if(id_101[z] == p[i].id){
				
			strcpy(p_4[z].batsman_5,p[i].batsman); 
		 	    p_4[z].total_runs_5    = p[i].total_runs;
				p_4[z].out_5           = p[i].out;
				p_4[z].numberofballs_5 = p[i].numberofballs;
				p_4[z].average_5       = p[i].average;
				p_4[z].strikerate_5    = p[i].strikerate;
				p_4[z].capping_5       = p[i].capping;
				p_4[z].id_5            = p[i].id;
			}
		}
	}
}
for(z=0;z<size_1;z++){
	t4[z].b_id  	= p_4[z].id_5;
	strcpy(t4[z].name,p_4[z].batsman_5);
	t4[z].caping 	= p_4[z].capping_5;
}
}
}
break;
}
printf("Do you want to create another sets of cluster(1/0)\n");
scanf("%d",&y);
if(y == 0){
	//printf("Thank you!\n");
}
}
}

