#include "function_prototypes_for_non_compliant_code.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "string.h"


integer_variable main()
{
integer_type_variable x, size=0;

PASSWORD ptr;
ptr.front = 0;
ptr.rear = 0;


constant_buffer_structure_variable buf = {10,20};

flex_array_struct_variable struct_a;
flex_array_struct_variable struct_b;

flex_array_struct_pointer p1 = &(struct_a);
flex_array_struct_pointer p2 = &(struct_b);



struct_a.data[0] = 1;
struct_a.data[1] = 2;
struct_a.data[2] = 4;

number_of_observations n;
		waitingtime_pointer stime;
		process_identification_number processID[10];
		executioncontext exc[5];
		time_elapsed time=0;
		//float stime[5]={0,-2,-3,-4,-1};
		//float ptime[5]=(4,6,7,3,8};
		
		process_state_pointer state[10];
		parent_pointer_pointer ptr1[5];
		processingtime_pointer ptime;
		

Password_verification_system(&ptr);
string_array str[size];
string_pointer destination_array = (string_pointer )calloc(10,1); //calloc avoids garbage values because the array is initialised with 0s
printf("Enter \n1 to find the time taken by a carry_look_ahead_adder	\n\n2 to ENCRYPT a numeric password 	\n\n3 3 to open a file	\n\n4 to see CPU scheduling	\n\n5 to see ERROR DETECTION IN STRINGS	\n\n6 to see a general case of ERROR DETECTION\n\n7 to see process table	\n\n   "); 
scanf("%d",&x);

integer_type_variable clear_array[12];


switch(x)
{
case 1:

time_taken_carry_lookahead_adder();

break;

case 2:

NUMERIC_PASSWORD_ENCRYPTION();

break;

case 3:

open_file_table();

break;

case 4:

CPU_scheduling();

break;


case 5:

string_processing_error_detection();

break;

case 6:
Artificial_error_detection_system( buf, p1, p2);
break;

case 7:
printf("enter the observations\n");
		scanf("%d",&n);
		printf("enter the proceesor time of %d observations\n",n);
		ptime=pcb(n);
		printf("enter the waiting time of %d observations\n",n);
		stime=pcb2(n);
		pcb1(processID,exc,time,&ptime[0],&stime[0],&state[0],&ptr1[0],n);
		printf("-----------------------------------\n");
		printf("PROCESS ID\t\tPROCESSING TIME\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\t\t%f\n",processID[i],ptime[i]);                           //MEM30-C. Do not access freed memory // freed in function
		}
		/*free(ptime);       													//MEM01-C. Store a new value in pointers immediately after free() // assign it to null
		ptime=NULL;                                                             //MEM31-C. Free dynamically allocated memory when no longer needed
		free(stime);
		stime=NULL;
		free(ptr1);                                                             //MEM34-C. Only free memory allocated dynamically
*/
break;

default:
printf("Invalid case\n");
	


}
return 0;
}
