/*
1) MEM10-C. Define and use a pointer validation function

2) MEM02-A. Do not cast the return value from malloc()

3) MEM05-C. Avoid large stack allocations

4) MEM04-C. Beware of zero-length allocations

5) MEM00-C. Allocate and free memory in the same module, at the same level of abstraction.

6) MEM30-C. Do not access freed memory

7) MEM01-C. Store a new value in pointers immediately after free()

8) MEM31-C. Free dynamically allocated memory when no longer needed

9) MEM34-C. Only free memory allocated dynamically

10) MEM07-C. Ensure that the arguments to calloc(), when multiplied, do not wrap
*/


#include "abstract_data_types_for_non_compliant_code.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//static void pcb1(int processID[],float executioncontext[],int time,float *ptime,float stime[],int r,char *state,int *ptr[]);

// process control blog - pcb
processtime_pointer pcb(number_of_observations n)
{
	
	
	processingtime_pointer ptime;
	/* if (n== 0) {
    exit(1);
  }*/
  
  
	
	ptime=(float_pointer)malloc(n*sizeof(float_variable));	



//"MEM02-A. Do not cast the return value from malloc() // no (int*)
//If the datatype of the pointer variable is much larger than the datatype of the memory we are allocating the pointer to then it is better to leave the compiler give more space than required, if we cast it then less space will be allocated and if we handle the pointer according to the pointer datatype then memory overruns might happen.
   


							  //"MEM02-A. Do not cast the return value from malloc()
	//		avoid using --->float ptime[n];							      //"MEM05-C. Avoid large stack allocations
																		  //MEM04-C. Beware of zero-length allocations
	if (!ptime) {
    exit(1);
  }
	for(integer_variable k=0;k<n;k++)
	{
		scanf("%f",&ptime[k]);
	}
	
	
	
	return ptime;
	
}
waittime_pointer pcb2(number_of_observations n)
{
	waitingtime_pointer stime;
	/*size_of_n size=2147483647;
	 if(n>(size/sizeof(float)))                                                //MEM07-C. Ensure that the arguments to calloc(), when multiplied, do not wrap
	 {
		 exit(1);
	 }*/
	
	//if (n >(sizeof(stime)/sizeof(float)))
	//	{exit(1);
  /* Handle error condition */;
     //  }
	stime=calloc(n,sizeof(float_variable));
	for(integer_variable k=0;k<n;k++)
	{
		scanf("%f",&stime[k]); // TIP : GIVE NEGATIVE INPUTS
	}
	
	
	
	return stime;
}
void pcb1(process_identification_number_pointer processID,executioncontext_pointer exc,time_elapsed time,processingtime_pointer ptime,waitingtime_pointer stime,process_state_pointer state,parent_pointer  ptr,number_of_observations n)

{
random_a r;
	printf("\t\t\t PROCESS CONTROL BLOCK\n");
	for(integer_variable s=1;s<n;s++)
	{
		printf("Add time to elapse\n");
		scanf("%d",&time);
		r=3;
		for(integer_variable i=0;i<n;i++)
		{
			(processID[i])=100+i;
			exc[i]=time+stime[i]/ptime[i]*100;	// main formula
			ptr[i]=(&processID[i]);
			if(r==i)
			{
				state[i]="running";
			}
			else if(exc[i]>100)	// execution context > 100 => completed
			{	state[i]="exited";}
		else if((exc[i])>40&&(exc[i])<60)
		{
			state[i]="Blocked";
		}
		else
		{
			state[i]="ready";
		}
		}
		printf("PROCESS ID\tSTATE\tEXECUTIONCONTEXT\tPARENTPOINTER\n");
			for(integer_variable m=0;m<n;m++)
			{
				
					if(exc[m]<=0)
					{
						exc[m]=0;
					}
				
			printf("%d\t\t%s\t\t\%f\t\t%d\t\t\n",processID[m],state[m],exc[m],&ptr[m]);
			}
	}
			free(ptime);
			free(stime);	                                          //MEM00-C. Allocate and free memory in the same module, at the same level of abstraction
			}
	
