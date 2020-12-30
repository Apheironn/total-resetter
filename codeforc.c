#include <stdio.h>

int main(void){
	int day,i,a,value,total=0;
	
	while(!(day>=1 &&  day<=30)){
		
		printf("Enter a day value between [1-30] : \n");
		scanf("%d", &day);
		
		if(day<1 || day>30)
		{
			printf("Try Again.\n\n");
		}
		else
		{
			int values[day];
			
			for(i=0;i<day;i++){
				printf("Enter  %d. Day's Temperature Value:\n",i+1);
				scanf("%d",&values[i]);
				total+= values[i];
				
			}
			
			//function declaration
			
			int findtheReset(int values[],int day,int total); 
			value= findtheReset(values,day,total);
	
		}	
	}

return 0;
}

int findtheReset(int values[],int day,int total){
	int a=0,i,command=0,totalCopy; //a for degree
		
		for(i=0;i<day;i++){
			
			totalCopy=total;
			total += values[i] * (-2);
				
				if(total==0){
					a=i+1 ; 
					printf("It's %d. value that resets the sum of temperature when multiplied by -1 and it's %d.\n",a,values[i]);
					i=day; // end of the code
						
				}
				else{
					total = totalCopy; // reset of total
				}
		}
	
	if(a==0){
		printf("There is no value to reset the sum of temperature when multiplied by -1.\n");
		
	}
	else{
		return a;	// in that code i didn't use it. But it's usuble for other purposes.
	}
}
