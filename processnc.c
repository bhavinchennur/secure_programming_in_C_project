#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//static void pcb1(int processID[],float executioncontext[],int time,float *ptime,float stime[],int r,char *state,int *ptr[]);
float*  pcb(int n)
{
	
	
	float *ptime;
	 if (n== 0) {
    exit(1);
  }
  
  
	
	ptime=(float*)malloc(n*sizeof(float));								  //"MEM02-A. Do not cast the return value from malloc()
	//		avoid using --->float ptime[n];							      //"MEM05-C. Avoid large stack allocations
																		  //MEM04-C. Beware of zero-length allocations
	if (!ptime) {
    exit(1);
  }
	for(int k=0;k<n;k++)
	{
		scanf("%f",&ptime[k]);
	}
	
	
	
	return ptime;
	
}
float* pcb2(int n)
{
	float *stime;int a;
	a=sizeof(stime);
	printf("%d",a);
	//if (n >(sizeof(stime)/sizeof(float)))
	//	{exit(1);
  /* Handle error condition */;
     //  }
	stime=calloc(n,sizeof(float));
	for(int k=0;k<n;k++)
	{
		scanf("%f",&stime[k]);
	}
	
	
	
	return stime;
}
void pcb1(int processID[],float executioncontext[],int time,float *ptime,float* stime,int r,char *state[],int *ptr[],int n)
{
/*{for(int j=0;j<n;j++)
	{	printf("%f",ptime[j]);
}
for(int l=0;l<n;l++)
	{	printf("%f",stime[l]);
}*/

	printf("\t\t\t PROCESS CONTROL BLOCK\n");
	for(int s=1;s<n;s++)
	{
		printf("Add time to elapse\n");
		scanf("%d",&time);
		r=3;
		for(int i=0;i<n;i++)
		{
			(processID[i])=100+i;
			executioncontext[i]=time+stime[i]/ptime[i]*100;
			ptr[i]=(&processID[i]);
			if(r==i)
			{
				state[i]="running";
			}
			else if(executioncontext[i]>100)
			{	state[i]="exited";}
		else if((executioncontext[i])>40&&(executioncontext[i])<60)
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
				
				
					if(executioncontext[m]<=0)
					{
						executioncontext[m]=0;
					}
			printf("----------------------------------------------------------------------------");	
			printf("%d\t\t%s\t\t\%f\t\t%d\t\t\n",processID[m],state[m],executioncontext[m],&ptr[m]);
			}
	}
			free(ptime);
			free(stime);	                                          //MEM00-C. Allocate and free memory in the same module, at the same level of abstraction
			}
	int main()
	{	int n;
		float *stime;
		int processID[10];
		float executioncontext[5];
		int time=0;
		//float stime[5]={0,-2,-3,-4,-1};
		int  r;
		char *state[10];
		int *ptr[5];
		float *ptime;
		//float *ptime;
		printf("enter the observations\n");
		scanf("%d",&n);
		printf("enter the proceesor time of %d observations\n",n);
		ptime=pcb(n);
		printf("enter the waiting time of %d observations\n",n);
		stime=pcb2(n);
		pcb1(processID,executioncontext,time,&ptime[0],&stime[0],r,&state[0],&ptr[0],n);
		printf("-------------------------------------------------------");
		printf("PROCESS ID\t\t\PROCESSING TIME")
		for(int i=0;i<n;i++)
		{
			printf("%d\t\t%f\n",processID[i],ptime[i]);                           //MEM30-C. Do not access freed memory
		}
		/*free(ptime);       													//MEM01-C. Store a new value in pointers immediately after free()
		ptime=NULL;                                                             //MEM31-C. Free dynamically allocated memory when no longer needed
		free(stime);
		stime=NULL;*/
		//free(ptr);                                                             //MEM34-C. Only free memory allocated dynamically


	}
	
