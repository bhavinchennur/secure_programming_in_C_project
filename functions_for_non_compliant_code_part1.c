/* 
RECOMMENDATIONS VIOLATED:

1) VIOLATING RECOMMENDATION: PRE00-A. Prefer inline functions to macros.


2) VIOLATING RECOMMENDATION: PRE02-A. Macro expansion should always be parenthesized for function-like macros.


3) VIOLATING RECOMMENDATION: Pass the size of the array whenever the array is passed to a function.


4) VIOLATING RECOMMENDATION: PRE01-A. Use parentheses within macros around variable names.


5) VIOLATING RECOMMENDATION: PRE04-A. Do not reuse a standard header file name.


6) VIOLATING RECOMMENDATION: PRE30-C. Do not create a universal character name through concatenation.


7) VIOLATING RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.


8) VIOLATING RECOMMENDATION: PRE05-A. Avoid using repeated question marks.


9) VIOLATING RECOMMENDATION: DCL02-A. Use visually distinct identifiers.


10) VIOLATING RECOMMENDATION: DCL23-C. Guarantee that mutually visible identifiers are unique.


11) VIOLATING RECOMMENDATION: DCL03-A. Place const as the rightmost declaration specifier.


12) VIOLATING RECOMMENDATION: DCL04-C. Do not declare more than one variable per declaration.

13) VIOLATING RECOMMENDATION: DCL07-C. Include the appropriate type information in function declarators.
(THE VIOLATION OF THIS RECOMMENDATION CAN BE SEEN IN 'function_prototypes_for_non_compliant_code.h' file)

14) VIOLATING RECOMMENDATION:  DCL00-C. Const-qualify immutable objects.

15) VIOLATING RECOMMENDATION:  DCL01-C. Do not reuse variable names in subscopes.

16) VIOLATING RECOMMENDATION: DCL05-C. Use typedefs of non-pointer types only.

17) VIOLATING RECOMMENDATION: DCL06-C. Use meaningful symbolic constants to represent literal values.

18) VIOLATING RECOMMENDATION: DCL08-A. Declare function pointers using compatible types.

19) VIOLATING RECOMMENDATION: DCL09-A. Declare functions that return an errno with a return type of errno_t.

20) VIOLATING RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.

21) VIOLATING RECOMMENDATION: DCL30-C. Declare objects with appropriate storage durations.

22) VIOLATING RECOMMENDATION: EXP03-C. Do not assume the size of a structure is the sum of the sizes of its members.

23) VIOLATING RECOMMENDATION: EXP43-C. Avoid undefined behavior when using restrict-qualified pointers.

24) VIOLATING RECOMMENDATION: STR05-C. Use pointers to const when referring to string literals.

25) VIOLATING RECOMMENDATION: STR06-C. Do not assume that strtok() leaves the parse string unchanged.

26) VIOLATING RULE : STR30-C. Do not attempt to modify string literals.

27) VIOLATING RECOMMENDATION: STR31-C. Guarantee that storage for strings has sufficient space for character data and the null terminator.

28) VIOLATING RECOMMENDATION: STR32-C. Do not pass a non-null-terminated character sequence to a library function that expects a string.

29) VIOLATING RECOMMENDATION: STR10-C. Do not concatenate different type of string literals.

30) VIOLATING RECOMMENDATION: MEM03-C. Clear sensitive information stored in reusable resources.

31) VIOLATING RECOMMENDATION: MEM06-A. Do not use user-defined functions as parameters to allocation routines.

33) (BEYOND_SYLLABUS) VIOLATING RECOMMENDATION: MEM36-C. Do not modify the alignment of objects by calling realloc().

34) VIOLATING RECOMMENDATION: MEM32-C Detect and handle critical memory allocation errors.

35) VIOLATING RECOMMENDATION: MEM33-C. Allocate and copy structures containing a flexible array member dynamically.

36) VIOLATING RECOMMENDATION: MEM35-C. Allocate sufficient memory for an object.

37) (BEYOND_SYLLABUS) VIOLATING RECOMMENDATION:  INT30-C. Ensure that unsigned integer operations do not wrap.

38) VIOLATING RECOMMENDATION: ENV03-C. Sanitize the environment when invoking external programs.

39) VIOLATING RECOMMENDATION: STR00-A. Use TR 24731 for remediation of existing string manipulation code.

40) VIOLATING RECOMMENDATION: STR01-A. Use managed strings for development of new string manipulation code.

41) VIOLATING RECOMMENDATION: STR07-A. Take care when calling realloc() on a null terminated byte string.
*/

























#include "function_prototypes_for_non_compliant_code.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// have all structures, macros, inline functions, ... seperately for both compliant and non-compliant .c files










// 2) VIOLATING RECOMMENDATION: PRE02-A. Macro expansion should always be parenthesized for function-like macros


#define no_of_AND_OR(N,k) N/k-1

void time_taken_carry_lookahead_adder()
{

// 10) VIOLATING RECOMMENDATION: DCL23-C. Guarantee that mutually visible identifiers are unique.

//2 RANDOM LONG VARIABLES WHICH HAVE A LONG COMMON PART CANNOT BE IDENTIFIED EASILY IF THE DISTINCT VARIABLE IS NOT IN THE BEGINNING. 

// 9) VIOLATING RECOMMENDATION: DCL02-A. Use visually distinct identifiers.

time_elapsed time_consumed_by_CLA, time_consumed_by_pg, time_consumed_by_pg_block,time_consumed_by_AND_OR, time_consumed_by_FA;

no_of_blocks_in_cla k;

size_of_cla N;

time_consumed_by_pg = 100; //100ps is the delay of each two-input gate.
time_consumed_by_pg_block = 600; // 6*100 ps, because there are 6 two-input gates in a block.
N = 32; // here we are talking about a 32-bit CLA
k = 4; // here the 32-bit CLA is made up of 4-bit blocks

time_consumed_by_AND_OR = 200 ; //2*100, because there are 2 2-input gates, one AND and one OR

time_consumed_by_FA = 300; //300ps is the full adder delay

time_consumed_by_CLA = time_consumed_by_pg + time_consumed_by_pg_block + no_of_AND_OR(N,k)*time_consumed_by_AND_OR + k*time_consumed_by_FA ;	//CALLING MACRO

printf("Time taken by the Carry look ahead adder is %d \n",time_consumed_by_CLA);
}




// Here in the non-compliant version DATA SANITIZATION AND STRING TRUNCATION WILL NOT BE TAKEN CARE OF






// 5) VIOLATING RECOMMENDATION: PRE04-A. Do not reuse a standard header file name.

// The name is misleading and hence the recommendation asks us not to use the standard header file name to a local header file.


#include "string.h"
// 3) VIOLATING RECOMMENDATION: Pass the size of the array whenever the array is passed to a function. NOT FOLLOWED HERE.
void clear(integer_pointer array) 
{
integer_type_variable i;
printf("The 4 elements in the array are: \n");
//Wrong size of the array will be generated.
for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) 
array[i] = 0;

}




// 4) VIOLATING RECOMMENDATION: PRE01-A. Use parentheses within macros around variable names.
	
#define mul(a,b) (a*b)

// 13) VIOLATING RECOMMENDATION: DCL07-C. Include the appropriate type information in function declarators.
numeric_encryption_variable no1,no2,multiple;
numeric_encryption_procedure_result multiple_of_sum(no1, no2, multiple)
{

// 11) VIOLATING RECOMMENDATION: DCL03-A. Place const as the rightmost declaration specifier.
//IF MANY VARIABLES ARE CONST QUALIFIED, THEIR DATATYPES WILL NOT BE VISUALLY EASY TO IDENTIFY.
constant_numeric_encryption_procedure_result result = mul(no1+no2, multiple);

//result = mul(no1+no2, multiple);

return result;

}








/*

THIS CANNOT BE COMPILED IN EITHER THE LATEST VERSION OF GCC OR VISUAL STUDIO.

// 6) VIOLATING RECOMMENDATION: PRE30-C. Do not create a universal character name through concatenation.


#define assign(uc1, uc2, val) uc1##uc2 = val
 
void test2() {
  int \u0401;
  
  assign(\u04, 01, 4);
printf("The ucn character \u0401 has the value %d\n",\u0401);
}


*/







// 1) VIOLATING RECOMMENDATION: PRE00-A. Prefer inline functions to macros
#define square(a) ( (a) * (a) ) 

// 7) VIOLATING RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.

// 8) VIOLATING RECOMMENDATION: PRE05-A. Avoid using repeated question marks.

#define puts(x) printf("I am in macro\n")



void NUMERIC_PASSWORD_ENCRYPTION()
{

// 17) VIOLATING RECOMMENDATION: DCL06-C. Use meaningful symbolic constants to represent literal values.
// We could have done enum { MAX_PASSWORD_SIZE=4 }
integer_array arr[4]; // array is not masked by an adt because the array is declared here.

//we will initialise this array now

clear(arr);// 3) VIOLATING RECOMMENDATION: Pass the size of the array whenever the array is passed to a function. NOT FOLLOWED HERE.



integer_type_variable i;

//7) VIOLATING RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.

puts("We've created an array of 4 characters\n");



printf("The array after initialization is: \n");

for(i=1;i<=4;i++)
printf("%d) \t %d\n",i,arr[i-1]);
printf("An ENCRYPTION SYSTEM asks the OS to do the following tasks:	\n1) add 1 to every number	\n2)find the square of the new number	\n3) adding the no. with 19 and multiply it by 8\n"); 

printf("Please ENTER A 4 DIGIT PASSWORD (give spaces b/w the nos.): ");
for(i=0;i<4;i++)
scanf("%d",&arr[i]);


//18) VIOLATING RECOMMENDATION: DCL08-A. Declare function pointers using compatible types.

integer_type_variable (*multiple_of_sum_fn_ptr) (integer_type_variable, integer_type_variable) ; // POINTER NOT MADE AN ADT TO ILLUSTRATE THE RECOMMENDATION.

multiple_of_sum_fn_ptr = &multiple_of_sum;// NO. OF PARAMETERS ARE NOT SAME


for(i=0;i<4;i++)
{
printf("For %d : \n",arr[i]);

arr[i] = square(++arr[i]);

printf("After adding 1 and finding the square of it : %d\n",arr[i]);

arr[i] = multiple_of_sum_fn_ptr(arr[i],19); // (arr[i] + 19) *garbage_value instead of (arr[i] + 19) * 8

printf("After adding the no. with the next number in the password and multiply it by 8 : %d\n",arr[i]);
}

// PARANTHESES AVOIDS 7) VIOLATING RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.
(puts)("Finally the ENCRYPTED PASSWORD is, can you believe it ??! \n");
// ??! is THE TRIGRAPH SEQUENCE WHICH GIVES |


for(i=0;i<4;i++)
printf("%d",arr[i]);

printf("\n");



}










// 19) VIOLATING RECOMMENDATION: DCL09-A. Declare functions that return an errno with a return type of errno_t.


//THIS FUNCTION HAS TO BE USED LATER 

void open_file_table()
{

FILE * pf; //FILE SHOULD BE USED WHERE THE HANDLER IS USED, THEREFORE CANNOT MAKE AN ADT.

pf = fopen ("unexist.txt", "rb");
	
   if (pf == NULL) {
   printf("Could not open the file, this non-compliant version does not return an errno\n");
       } else {
   
      printf("OS maintains an Open File Table, this file's name unexist.txt will be added to the table\n");
   }
      
}









// 1) VIOLATING RECOMMENDATION: PRE02-A. Macro expansion should always be parenthesized for function-like macros

//calculating response ratio,//Response Ratio = (Waiting Time + Burst time) / Burst time
#define resp(wt,bt) wt+bt

scheduler Response_Ratio(scheduler_variable waiting_time, scheduler_variable burst_time)
{	scheduler Resp_Ratio;
	
	Resp_Ratio=resp(waiting_time,burst_time)/burst_time;
	return(Resp_Ratio);
	
}





void CPU_scheduling()
{

// 14) VIOLATING  RECOMMENDATION:  DCL00-C. Const-qualify immutable objects.


counter no_of_processes = 5;// no_of_processes can be modified again, its value is not protected from accidental modification, using a const would be the solution.




integer_type_variable j;

integer_array waiting_time[] = { 0, 2, 4, 6, 8 };
integer_array burst_time[] = { 3, 6, 4, 5, 2 }; //Burst time is the amount of time required by a process for executing on CPU.

printf("The details of the processes waiting are: \n\n");
printf("Waiting time \tBurst time\n");

// USE OF ENUM FOR 'FOR LOOP'

for(j=process1;j<no_of_processes;j++)
printf("%d\t\t%d\n",waiting_time[j], burst_time[j] );


integer_type_variable i,max_response_ratio=0,index_of_max_response_ratio=0;

max_response_ratio = Response_Ratio(waiting_time[0],burst_time[0]);



for(i= process1;i<no_of_processes;i++)
{

// 18) VIOLATING RECOMMENDATION:  DCL01-C. Do not reuse variable names in subscopes.
integer_type_variable j;

j = Response_Ratio(waiting_time[i],burst_time[i]);

if(j > max_response_ratio)
{
max_response_ratio = j;
index_of_max_response_ratio = i;
}
}

printf("The process that will be given CPU time is the one with: \n waiting time = %d \n burst time = %d \n It's response ratio = %d\n", waiting_time[index_of_max_response_ratio], burst_time[index_of_max_response_ratio], max_response_ratio);

}






// STRING PASSWORD SECTION






//THE STRUCTURE PASSWORD IS IN ADT'S .h FILE
void Password_verification_system( PASSWORD *ptr) // NO ADT FOR * BECAUSE THAT'S THE RECOMMENDATION
{
integer_type_variable size;
printf("Enter the size of the password, LESS THAN 9 CHARACTERS\n");

scanf("%d",&size);

// 27) VIOLATING RECOMMENDATION: STR31-C. Guarantee that storage for strings has sufficient space for character data and the null terminator.

// Off-by-One Error

string_array str[size]; // no space for '\0'

printf("Enter the password, DO NOT USE any of '^','&','*','$','#',... \n");

scanf("%s",str);

// 21) VIOLATING RECOMMENDATION: DCL30-C. Declare objects with appropriate storage durations.
char_variable front1 = 0; // Now we have front1 declared here and not in structure, MORE THAN ONE PASSWORD WILL NEVER STAY IN THE QUEUE.
strcpy(ptr->queue[front1++], str);


// 28) VIOLATING RECOMMENDATION: STR32-C. Do not pass a non-null-terminated character sequence to a library function that expects a string.
printf("Your password: %s is added to the queue\n",str); //not null terminated


}







//-------------------------------------------------


void string_processing_error_detection()
{

printf("\nOS DETECTS ERRORS BEFOREHAND TO ENSURE A SMOOTH PROCESSING OF ITS INSTRUCTIONS\n\n");

// 24) VIOLATING RECOMMENDATION: STR05-C. Use pointers to const when referring to string literals.
// IF THERE'S NO CONST MODIFICATION WOULD RESULT IN AN UNDEFINED BEHAVIOUR.

printf("TASK 1: To modify a constant string:\n\n");
string_pointer c = "Hello";
//c[2] = 'L';
printf("A constant string: %s\n\n",c);
printf("NO MODIFICATION CAN BE MADE TO A CONSTANT STRING\n\n\n");




// 26) VIOLATING RULE: STR30-C. Do not attempt to modify string literals.


//In this noncompliant code example, the char pointer str1 is initialized to the address of a string literal. Attempting to modify the string literal is undefined behavior:




printf("TASK 2: A CHANGE FOR A DIFFERENCE:\n\n");
string_pointer str1 = "Take Artificial Intelligence";
printf("An array type string: %s\n\n",str1);
printf("CANNOT be modified as it is pointed by a pointer and would cause UNDEFINED BEHAVIOUR\n\n");




// 31) VIOLATING RECOMMENDATION: MEM03-C. Clear sensitive information stored in reusable resources.
string_array stri[20];
printf("TASK 3: To copy a password: \n\n");
strcpy(stri,"PASSWORD: UXf64hTrfd56");
printf("A string has: %s\n\n",stri);

printf("Copied string : %s\n\n",stri);






printf("TASK 4: To split first name and last name\n");

// 29) VIOLATING RECOMMENDATION: STR10-C. Do not concatenate different type of string literals.

string_pointer msg = L"First-name "
            "Last_name";
printf("Input string: %s\n\n",msg);


printf("After processing:\n\n");

string_pointer token;

// 25) VIOLATING RECOMMENDATION: STR06-C. Do not assume that strtok() leaves the parse string unchanged.



token = strtok(msg, " ");
puts(token);

 
while (token = strtok(0, " ")) {
  puts(token);
}
printf("\n\n");


printf("TASK 5: To make space for the null character after reallocation\n\n");

string_pointer s1 = (string_pointer )malloc(sizeof(char_variable)*4); 
string_pointer ptr_new; 
strcpy(s1,"PES");
printf("Input string : %s\n\n",s1);
// 41) VIOLATING RECOMMENDATION: STR07-A. Take care when calling realloc() on a null terminated byte string.

ptr_new = (string_pointer )realloc(s1, sizeof(char_variable)*5);

// ptr_new[sizeof(char)*4] = '\0'; NOT GIVEN IN NON-COMPLIANT VERSION.

printf("Null character added to %s\n\n",ptr_new);



// 39) VIOLATING RECOMMENDATION: STR00-A. Use TR 24731 for remediation of existing string manipulation code.

// 40) VIOLATING RECOMMENDATION: STR01-A. Use managed strings for development of new string manipulation code.

strcpy(stri," A I ");
printf("TASK 6: TO SAFELY COPY A STRING \n\n");

string_array str2[30];
printf("Input string: %s\n\n",stri);

strcpy(str2,stri);

printf("After copying: %s\n\n",str2);

}






// 20) VIOLATING RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.
 
#include <stdarg.h>


enum { va_eol = -1 };
 non_negative_integer average(integer_variable first, ...);

non_negative_integer average(integer_variable first, ...)
{
  non_negative_integer count = 0;
  non_negative_integer sum = 0;
  integer_type_variable i = first;
  va_list args;
 
  va_start(args, first);
 
  while (i != va_eol) {
    sum += i;
    count++;
    i = va_arg(args, int);
  }
 
  va_end(args);
  return(count ? (sum / count) : 0);
}




 






void Artificial_error_detection_system(constant_buffer_structure_variable buf, flex_array_struct_pointer p1, flex_array_struct_pointer p2)
{
// Can modify o's contents




// PART 5: make a copy of the pointer given to the function

// 22) VIOLATING RECOMMENDATION: EXP03-C. Do not assume the size of a structure is the sum of the sizes of its members.

buffer_structure_pointer buf_cpy = (buffer_structure_pointer)malloc(
    sizeof(integer_type_variable)*2);

 
  if (buf_cpy == NULL) {
    // Handle malloc() error
printf("FAILED to create an array\n"); 
  }
 
 
 
  memcpy(buf_cpy, &(buf), sizeof(struct buffer));
 
  

 
// 33) (BEYOND_SYLLABUS) VIOLATING RECOMMENDATION: MEM36-C. Do not modify the alignment of objects by calling realloc().

// 34) VIOLATING RECOMMENDATION: MEM32-C Detect and handle critical memory allocation errors.

// This noncompliant code example returns a pointer to allocated memory that has been aligned to a 4096-byte boundary.  If the resize argument to the realloc() function is larger than the object referenced by ptr, then realloc() will allocate new memory that is suitably aligned so that it may be assigned to a pointer to any type of object with a fundamental alignment requirement but may not preserve the stricter alignment of the original object.


/* FOR UNDERSTANDING OUTPUT
memory aligned to 4096 bytes
ptr = 0x1621b000
 
After realloc():
ptr1 = 0x1621a010

ptr1 is no longer aligned to 4096 bytes.*/



// now let's create 2 pointers: ptr and ptr1

size_t resize = 1024;
  size_t alignment = 1 << 12;
  integer_pointer restrict ptr;
  integer_pointer restrict ptr1;
 
  if (NULL == (ptr = (integer_pointer)aligned_alloc(alignment,
                                          sizeof(integer_type_variable)))) {
    // Handle error 
printf("FAILED to create an array\n");
  }

  if (NULL == (ptr1 = (integer_pointer)aligned_alloc(alignment,
                                           resize))) {
    // Handle error 
printf("FAILED to create an array\n");
  }
    
 
   
// 23) VIOLATING RECOMMENDATION: EXP43-C. Avoid undefined behavior when using restrict-qualified pointers.


// WE CREATED A COPY BECAUSE WE CAN'T ASSIGN A CONST POINTER.
ptr = &(buf_cpy->x);
ptr1 = &(buf_cpy->y);



printf("TASK 1: To find the average of the values in 2 structures and store them in an array: \n\n");

printf("EXPECTED ERRORS: \n\n1) CONSTANT STRUCTURE CANNOT BE MANIPULATED \n\n2) STACK OVERFLOW DUE TO GARBAGE VALUES IN FLEXIBLE ARRAYS IN STRUCTURES\n\n");

printf("ERROR DETECTION SYSTEM HAS RESOLVED POSSIBLE ERRORS\n\n");

integer_type_variable t1,t2;




// 20) VIOLATING RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.

// 31) VIOLATING RECOMMENDATION: MEM06-A. Do not use user-defined functions as parameters to allocation routines.

 

printf("The average of the 1st structure is %d \n",average(*ptr, *ptr1));// NO -1 IN THE END


  
// 35) VIOLATING RECOMMENDATION: MEM33-C. Allocate and copy structures containing a flexible array member dynamically.

*p2 = *p1;
// array is not copied because it is a flexible member of the structure




// 20) VIOLATING RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.
 
t2 = average(p2->data[0], p2->data[1], p2->data[2]); // NO -1 IN THE END

printf("The average of the 2nd structure is %d \n",t2);




// to create a long array
integer_type_variable len = 2;



// 36) VIOLATING RECOMMENDATION: MEM35-C. Allocate sufficient memory for an object.

// 37) (BEYOND_SYLLABUS) VIOLATING RECOMMENDATION:  INT30-C. Ensure that unsigned integer operations do not wrap.


long_type_pointer p;
long_type_variable SIZE_MAX = 2147483647;
  if (len == 0 || len > SIZE_MAX / sizeof(long_type_variable)) {
    // Handle overflow 
  }
  p = (long_type_pointer)malloc(len * sizeof(integer_type_variable)); // int is used to create an array of long, chance of overflow.
  if (p == NULL) {
    // Handle error 
    printf("FAILED to create an array\n");	
  }
  //free(p);

p[0] = average(*ptr, *ptr1, va_eol);
p[1] = average(p2->data[0], p2->data[1], p2->data[2], va_eol);





printf("\nThe elements have been added to an array\n\n");


// 38) VIOLATING RECOMMENDATION: ENV03-C. Sanitize the environment when invoking external programs.
/*
if (clearenv() != 0) {
  printf("The environment is not safe\n");
}*/ //NOT SANITIZING THE ENVIRONMENT

if(getenv("PATH")!=NULL)
{
// HANDLE ERROR
printf("Please correct your path\n");
}

  free(ptr);
}






















