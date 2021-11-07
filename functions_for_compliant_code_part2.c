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


#include "abstract_data_types_for_compliant_code.h"

#include "function_prototypes_for_compliant_code.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

static validation valid(float_pointer pntr);

validation valid(float_pointer pntr)                                                                   //MEM10-C. Define and use a pointer validation function

	{	if(pntr==NULL)
			return 0; // function checks if the ptr is valid
		else
			return 1;
		
	}
processtime_pointer  pcb1(number_of_observations n)
{
	
	processingtime_pointer ptime;
	 if (n== 0) {
    exit(1);
  }
  
  
	
	ptime=malloc(n*sizeof(float));           										
	if (!ptime) {																		//"MEM02-A. Do not cast the return value from malloc() // no (int*)
    exit(1);																			//"MEM05-C. Avoid large stack allocations
  }
																						//MEM04-C. Beware of zero-length allocations	// 0 length => exit
	for(integer_variable k=0;k<n;k++)
	{
		scanf("%f",&ptime[k]);
	}
	
	
	
	return ptime;
	
}
waittime_pointer pcb2(number_of_observations n)
{
	waitingtime_pointer stime;
	 size_of_n size=2147483647; // 10) MEM07-C. Ensure that the arguments to calloc(), when multiplied, do not wrap
	 if(n>(size/sizeof(float)))
	 {
		 exit(1);
	 }
	
	//printf("%d",a);
	/*int valid(float *ptr)
	{	if(ptr==NULL)
			return 0;
		else
			return 1;
		
	}
	//if (n >(sizeof(stime)/sizeof(float)))
	//	{exit(1);
  /* Handle error condition */;
     //  }
	stime=calloc(n,sizeof(float));
	if(valid(stime))
	{
	for(integer_variable k=0;k<n;k++)
	{
		scanf("%f",&stime[k]);
	}
	}
	else{
		exit(1);
	}
	
	
	return stime;
}
void pcb(process_identification_number_pointer processID,executioncontext_pointer exc,time_elapsed time,processingtime_pointer ptime,waitingtime_pointer stime,process_state_pointer state,parent_pointer ptr1,number_of_observations n)
/*{for(int j=0;j<n;j++)
	{	printf("%f",ptime[j]);
}
for(int l=0;l<n;l++)
	{	printf("%f",stime[l]);
}*/
{	random_a r;
	printf("\t\t\t PROCESS CONTROL BLOCK\n");
	for(integer_variable s=1;s<n;s++)
	{
		printf("Add time to elapse\n");
		scanf("%d",&time);
		r=rand()%(n+1);
		for(int i=0;i<n;i++)
		{
			(processID[i])=100+i;
			exc[i]=((time+(stime[i]))/(ptime[i])*100);
			ptr1[i]=(processID[i]);
			if(r==i)
			{
				state[i]="running";
			}
			else if(exc[i]>100)
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
			for(int m=0;m<n;m++)
			{
				
					if(exc[m]<=0)
					{
						exc[m]=0;
					}
				
			printf("%d\t\t%s\t\t\%f\t\t%d\t\t\n",processID[m],state[m],exc[m],ptr1[m]);
			}}
			
			//free(ptime);
			//free(stime);	                       					//MEM00-C. Allocate and free memory in the same module, at the same level of abstraction

// free(ptime) is done twice at both the levels of abstraction.
			
			}
