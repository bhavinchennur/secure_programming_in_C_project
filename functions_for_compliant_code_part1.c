/* 
RECOMMENDATIONS USED:

1) PRE02-A. Macro expansion should always be parenthesized for function-like macros.


2) PRE00-A. Prefer inline functions to macros.


3) STR02-C. Sanitize data passed to complex subsystems.


4) RECOMMENDATION: STR03-A. Do not inadvertently truncate a null terminated byte string.


5) RECOMMENDATION: Pass the size of the array whenever the array is passed to a function.


6) RECOMMENDATION: PRE01-A. Use parentheses within macros around variable names.


7) RECOMMENDATION: PRE04-A. Do not reuse a standard header file name.


8) (BEYOND_SYLLABUS) RECCOMENDATION: PRE08-C. Guarantee that header file names are unique.


9) RECOMMENDATION: PRE30-C. Do not create a universal character name through concatenation.


10) RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.


11) RECOMMENDATION: PRE05-A. Avoid using repeated question marks.


12) RECOMMENDATION: DCL02-A. Use visually distinct identifiers.


13) RECOMMENDATION: DCL23-C. Guarantee that mutually visible identifiers are unique.


14) RECOMMENDATION: DCL03-A. Place const as the rightmost declaration specifier.


15) RECOMMENDATION: DCL04-C. Do not declare more than one variable per declaration.


16) RECOMMENDATION: DCL07-C. Include the appropriate type information in function declarators.


17) RECOMMENDATION:  DCL00-C. Const-qualify immutable objects.


18) RECOMMENDATION:  DCL01-C. Do not reuse variable names in subscopes.


19) RECOMMENDATION: DCL05-C. Use typedefs of non-pointer types only.


20) RECOMMENDATION: DCL06-C. Use meaningful symbolic constants to represent literal values.


21) RECOMMENDATION: DCL08-A. Declare function pointers using compatible types.


22) RECOMMENDATION: DCL09-A. Declare functions that return an errno with a return type of errno_t.


23) RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.


24) RECOMMENDATION: DCL30-C. Declare objects with appropriate storage durations.

25) RECOMMENDATION: EXP03-C. Do not assume the size of a structure is the sum of the sizes of its members.

26) RECOMMENDATION: EXP43-C. Avoid undefined behavior when using restrict-qualified pointers.

27) RECOMMENDATION: STR05-C. Use pointers to const when referring to string literals.

28) RECOMMENDATION: STR06-C. Do not assume that strtok() leaves the parse string unchanged.

29) RULE: STR30-C. Do not attempt to modify string literals.

30) (BEYOND_SYLLABUS) RECOMMENDATION: STR11-C. Do not specify the bound of a character array initialized with a string literal.

31) RECOMMENDATION: STR31-C. Guarantee that storage for strings has sufficient space for character data and the null terminator.

32) RECOMMENDATION: STR32-C. Do not pass a non-null-terminated character sequence to a library function that expects a string.

33) RECOMMENDATION: STR10-C. Do not concatenate different type of string literals.

34) RECOMMENDATION: MEM03-C. Clear sensitive information stored in reusable resources.

35) RECOMMENDATION: MEM06-A. Do not use user-defined functions as parameters to allocation routines.


37) (BEYOND_SYLLABUS) RECOMMENDATION: MEM36-C. Do not modify the alignment of objects by calling realloc().

38) RECOMMENDATION: MEM32-C Detect and handle critical memory allocation errors.

39) RECOMMENDATION: MEM33-C. Allocate and copy structures containing a flexible array member dynamically.

40) RECOMMENDATION: MEM35-C. Allocate sufficient memory for an object.

41) (BEYOND_SYLLABUS) RECOMMENDATION:  INT30-C. Ensure that unsigned integer operations do not wrap. 

42) RECOMMENDATION: ENV03-C. Sanitize the environment when invoking external programs.

43) RECOMMENDATION: STR00-A. Use TR 24731 for remediation of existing string manipulation code.

44) RECOMMENDATION: STR01-A. Use managed strings for development of new string manipulation code.

45) RECOMMENDATION: STR07-A. Take care when calling realloc() on a null terminated byte string.

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
Skip to end of metadata



*/














#include "abstract_data_types_for_compliant_code.h"
#include "function_prototypes_for_compliant_code.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



// CASE 1


// 1) RECOMMENDATION: PRE02-A. Macro expansion should always be parenthesized for function-like macros.


#define no_of_AND_OR(N,k) (N/k-1)	

// 9) RECOMMENDATION: PRE30-C. Do not create a universal character name through concatenation.
#define assign(ucn, val) ucn = val


void time_taken_carry_lookahead_adder()
{
no_of_blocks_in_cla  k;
size_of_cla N;

// 13) RECOMMENDATION: DCL23-C. Guarantee that mutually visible identifiers are unique.
//2 RANDOM LONG VARIABLES WHICH HAVE A LONG COMMON PART CAN STILL BE IDENTIFIED EASILY IF THE DISTINCT VARIABLE IS IN THE BEGINNING.  the significant characters in each identifier must differ.


// 12) RECOMMENDATION: DCL02-A. Use visually distinct identifiers.
time_variable CLA_time_consumption;
time_variable pg_time_consumption;
time_variable pg_block_time_consumption;
time_variable AND_OR_time_consumption;
time_variable FA_time_consumption;

pg_time_consumption = 100; //100ps is the delay of each two-input gate.
pg_block_time_consumption = 600; // 6*100 ps, because there are 6 two-input gates in a block.
N = 32; // here we are talking about a 32-bit CLA



integer_variable \u0401;
assign(\u0401, 4); // here the 32-bit CLA is made up of 4-bit blocks

k = 4; 

AND_OR_time_consumption = 200 ; //2*100, because there are 2 2-input gates, one AND and one OR

FA_time_consumption = 300; //300ps is the full adder delay

CLA_time_consumption = pg_time_consumption + pg_block_time_consumption + no_of_AND_OR(N,\u0401)*AND_OR_time_consumption+ \u0401*FA_time_consumption ;	//CALLING MACRO

printf("Time taken by the Carry look ahead adder is %d \n",CLA_time_consumption);
}






//CASE 2:



// 7) RECOMMENDATION: PRE04-A. Do not reuse a standard header file name.

// 8) (BEYOND_SYLLABUS) RECCOMENDATION: PRE08-C. Guarantee that header file names are unique.

// 8) BECAUSE WE ARE GIVING THE LOCAL LIBRARY A UNIQUE NAME.

// The name is misleading and hence the recommendation asks us not to use the standard header file name to a local header file. IT IS TAKEN CARE OF HERE IN THE COMPLIANT VERSION.



//5) RECOMMENDATION: Pass the size of the array whenever the array is passed to a function.

//This function is declared in the local version stdio.h file named mystdio.h
void clear(integer_pointer array,size_variable size) 
{
integer_type_variable i;
for (i = 0; i < size; i++) 
array[i] = 0;

}





// 6) RECOMMENDATION: PRE01-A. Use parentheses within macros around variable names
	
#define mul(a,b) ((a)*(b))

// 16) RECOMMENDATION: DCL07-C. Include the appropriate type information in function declarators.
//In the non-compliant version the variables are declared outside the function definition.
numeric_encryption_procedure_result multiple_of_sum(numeric_encryption_variable no1, numeric_encryption_variable no2, numeric_encryption_variable multiple)
{
result_variable result;

result = mul(no1+no2, multiple);

return result;

}










//2) RECOMMENDATION: PRE00-A. Prefer inline functions to macros 

// inline functions don't need a function prototype

static inline numeric_encryption_procedure_result square(int a)// static keyword forces the compiler to consider this inline function in the linker.
{
return (a*a);
}


// 10) RECOMMENDATION: PRE03-A. Avoid invoking a macro when trying to invoke a function.


#define puts(x) printf("I am in macro\n")
#undef puts

void NUMERIC_PASSWORD_ENCRYPTION()
{

// 20) Recommendation: DCL06-C. Use meaningful symbolic constants to represent literal values.
enum { MAX_PASSWORD_SIZE=4 };
integer_array arr[MAX_PASSWORD_SIZE];

//we will initialise this array now

clear(arr, (sizeof(arr) / sizeof(arr[0])));

integer_type_variable i;

printf("We've created an array of 4 characters\n");

printf("The array after initialization is: \n");

for(i=1;i<=MAX_PASSWORD_SIZE;i++)
printf("%d) \t %d\n",i,arr[i-1]);


printf("An ENCRYPTION SYSTEM asks the OS to do the following tasks:	\n1) add 1 to every number	\n2)find the square of the new number	\n3) adding the no. with 19 and multiply it by 8\n"); 

printf("Please ENTER A 4 DIGIT PASSWORD (give spaces b/w the nos.): ");
for(i=0;i<MAX_PASSWORD_SIZE;i++)
scanf("%d",&arr[i]);


//21) RECOMMENDATION: DCL08-A. Declare function pointers using compatible types.
integer_type_variable (*multiple_of_sum_fn_ptr) (integer_type_variable, integer_type_variable, integer_type_variable) ; // * CANNOT BE AVOIDED BY AN ADT IN THIS CASE
multiple_of_sum_fn_ptr = &multiple_of_sum;	//SAME NO. OF PARAMETERS



for(i=0;i<MAX_PASSWORD_SIZE;i++)
{
printf("For %d : \n",arr[i]);

arr[i] = square(++arr[i]);

printf("After adding 1 and finding the square of it : %d\n",arr[i]);

arr[i] = multiple_of_sum_fn_ptr(arr[i],19,8); // (arr[i] + 19) * 8

printf("After adding the no. with the next number in the password and multiply it by 8 : %d\n",arr[i]);
}


// 11) RECOMMENDATION: PRE05-A. Avoid using repeated question marks.

puts("Finally the ENCRYPTED PASSWORD is, can you believe it ?""?! \n");//A TRIGRAPH SEQUENCE IS AVOIDED BY CONCATENATING 2 STRINGS.

for(i=0;i<MAX_PASSWORD_SIZE;i++)
printf("%d",arr[i]);

printf("\n");



}





//CASE 3:



// 22) RECOMMENDATION: DCL09-A. Declare functions that return an errno with a return type of errno_t.

#include <errno.h>
#include <string.h>
//THIS FUNCTION HAS TO BE USED LATER 

void open_file_table() {
error_number_variable errno ;
FILE * pf; // THIS POINTER CANNOT BE AVOIDED BY AN ADT AS FILE IS FROM A LIBRARY FUNCTION AND IS SITUATION SPECIFIC.
error_number_variable errnum;
pf = fopen ("unexist.txt", "rb");
	
   if (pf == NULL) {
   
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
   } else {
   
     printf("OS maintains an Open File Table, this file's name unexist.txt will be added to the table\n");

   }
      
}





//CASE 4:






// 1) RECOMMENDATION: PRE02-A. Macro expansion should always be parenthesized for function-like macros

//calculating response ratio,//Response Ratio = (Waiting Time + Burst time) / Burst time
#define resp(wt,bt) (wt+bt) 

scheduler Response_Ratio(scheduler_variable waiting_time, scheduler_variable burst_time)
{	


scheduler Resp_Ratio;
		
Resp_Ratio=resp(waiting_time,burst_time)/burst_time;	

return(Resp_Ratio);
	
}









void CPU_scheduling()
{

// 17) RECOMMENDATION:  DCL00-C. Const-qualify immutable objects.
// 14) RECOMMENDATION: DCL03-A. Place const as the rightmost declaration specifier.
//EVEN THOUGH ANY 2 VARIABLES ARE CONST QUALIFIED, THEIR DATATYPES ARE VISUALLY EASY TO IDENTIFY.

counter const no_of_processes = 5;// no_of_processes cannot be modified again, its value is protected from accidental modification.

// CONST IS NOT MADE AN ADT TO ILLUSTRATE THE RECOMMENDATION


integer_type_variable j;

integer_array waiting_time[] = { 0, 2, 4, 6, 8 };
integer_array burst_time[] = { 3, 6, 4, 5, 2 }; //Burst time is the amount of time required by a process for executing on CPU.

printf("The details of the processes waiting are: \n\n");
printf("Waiting time \tBurst time\n");
for(j= process1;j<no_of_processes;j++)
printf("%d\t\t%d\n",waiting_time[j], burst_time[j] );


integer_type_variable i,max_response_ratio=0,index_of_max_response_ratio=0;

max_response_ratio = Response_Ratio(waiting_time[0],burst_time[0]);



for(i= process1;i<no_of_processes;i++)
{

// 18) RECOMMENDATION:  DCL01-C. Do not reuse variable names in subscopes.
integer_type_variable temp;

temp = Response_Ratio(waiting_time[i],burst_time[i]);

if(temp > max_response_ratio)
{
max_response_ratio = temp;
index_of_max_response_ratio = i;
}
}

printf("The process that will be given CPU time is the one with: \n waiting time = %d \n burst time = %d \n It's response ratio = %d\n", waiting_time[index_of_max_response_ratio], burst_time[index_of_max_response_ratio], max_response_ratio);

}









// STRING PASSWORD SECTION



//3) RECOMMENDATION: STR02-C. Sanitize data passed to complex subsystems
password_verifier password_check_using_sanitization(string_pointer str, size_variable size)
{

dangerous_characters badchars[] = {'%','^','&','*','$','#'};

integer_type_variable i, j;

counter count = 0;

for(i=0;i<size;i++)
{
for(j=0;j<6;j++)
{
if(str[i]==badchars[j])
count++;
}
}

if(count==0)
return 1;
else
return 0; // password is NOT safe
}







//4) RECOMMENDATION: STR03-A. Do not inadvertently truncate a null terminated byte string
password_verifier string_validity( string_pointer destination_string, size_variable destination_size, string_pointer source_string, size_variable source_size)
{ 

 


if (source_string == NULL) {
printf("Source string is NULL\n");
  return 0; //
}
else if (source_size >= destination_size) {
printf("size not matching\n");

  return 0; //
}
else {
  strcpy(destination_string, source_string); 	//THE LAST CHARACTER IN THE DESTINATION STRING IS '\0'
  
  return 1;
}
}








//THE STRUCTURE PASSWORD IS IN ADT'S .h FILE
void Password_verification_system( PASSWORD *ptr) // pointer should not be avoided by using an ADT, because that's a recommendation.
{
  
// STRING AND NUMERIC PASSWORDS HAS TO BE ADDED TO THE QUEUE IN THE END

integer_type_variable  size=0, check_bit, sanitize_bit=0;

printf("Enter the SIZE of the password, LESS THAN 9 CHARACTERS\n");

scanf("%d",&size);


// 15) RECOMMENDATION: DCL04-C. Do not declare more than one variable per declaration.

// Arrays and pointers can get confusing 

string_array source_array[10];

// 31) RECOMMENDATION: STR31-C. Guarantee that storage for strings has sufficient space for character data and the null terminator.

string_array str[size+1]; // extra space is for '\0'

string_pointer destination_array = (string_pointer )calloc(10,1);

printf("Enter the password, DO NOT USE any of '^','&','*','$','#',... \n");

scanf("%s",str);
size=sizeof(str);
sanitize_bit = password_check_using_sanitization(str, size);


strcpy(source_array,str) ; // size is less than the array size

check_bit = string_validity(destination_array,10,source_array,size);

if( check_bit == 1 && sanitize_bit == 1)
{
printf("The password is accepted \n");	//The string is successfully copied to the new location destination_array



// 24) RECOMMENDATION: DCL30-C. Declare objects with appropriate storage durations.

// object created and initialised in main file, defined in abstract file and used in functions file, possible because object declared in one file is made to be visible in all the files.


// ADDING PASSWORD TO THE QUEUE

str[size] = '\0';

strcpy(ptr->queue[ptr->front++], str);

// 32) RECOMMENDATION: STR32-C. Do not pass a non-null-terminated character sequence to a library function that expects a string.

printf("Your password: %s is added to the queue\n",str);


}
else
printf("The password is NOT accepted\n");

}





// 23) RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.
 
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
    i = va_arg(args, integer_type_variable);
  }
 
  va_end(args);
  return(count ? (sum / count) : 0);
}







//func takes a pointer to a const struct obj 
//func does not take a const pointer to a struct obj.


void Artificial_error_detection_system(detection_pointer buf, flex_array_struct_pointer p1, flex_array_struct_pointer p2)
{
// Cannot modify o's contents


// 25) RECOMMENDATION: EXP03-C. Do not assume the size of a structure is the sum of the sizes of its members.

buffer_structure_pointer buf_cpy =
    (buffer_structure_pointer)malloc(sizeof(buffer_structure_variable));
 
  if (buf_cpy == NULL) {
    // Handle malloc() error
printf("FAILED to create an array\n"); 
  }
 
 
 
  memcpy(buf_cpy, buf, sizeof(buffer_structure_variable));
 
  

 
// 37) RECOMMENDATION: MEM36-C. Do not modify the alignment of objects by calling realloc().

// 38) RECOMMENDATION: MEM32-C Detect and handle critical memory allocation errors.



// This compliant solution  allocates resize bytes of new memory with the same alignment as the old memory, copies the original memory content, and then frees the old memory. This solution has implementation-defined behavior because it depends on whether extended alignments in excess of _Alignof (max_align_t) are supported and the contexts in which they are supported. If not supported, the behavior of this compliant solution is undefined.
#include <stdlib.h>
#include <string.h>
// now let's create 2 pointers: ptr and ptr1

// PART 6:
size_t resize = 1024;
  size_t alignment = 1 << 12;
  integer_pointer ptr;
  integer_pointer ptr1;
 
  if (NULL == (ptr = (integer_pointer)aligned_alloc(alignment,
                                          sizeof(integer_variable)))) {
    // Handle error 
printf("FAILED to create an array\n");
  }

  if (NULL == (ptr1 = (integer_pointer)aligned_alloc(alignment,
                                           resize))) {
    // Handle error 
printf("FAILED to create an array\n");
  }
    
  if (NULL == (memcpy(ptr1, ptr, sizeof(integer_variable)))) {
    // Handle error 
printf("FAILED to copy an array\n");
  }
   
// 26) RECOMMENDATION: EXP43-C. Avoid undefined behavior when using restrict-qualified pointers.

// WE CREATED A COPY BECAUSE WE CAN'T ASSIGN A CONST POINTER.
ptr = &(buf_cpy->x);
ptr1 = &(buf_cpy->y);



printf("TASK 1: To find the average of the values in 2 structures and store them in an array: \n\n");

printf("EXPECTED ERRORS: \n\n1) CONSTANT STRUCTURE CANNOT BE MANIPULATED \n\n2) STACK OVERFLOW DUE TO GARBAGE VALUES IN FLEXIBLE ARRAYS IN STRUCTURES\n\n");

printf("ERROR DETECTION SYSTEM HAS RESOLVED POSSIBLE ERRORS\n\n");

int t1,t2;


// 23) RECOMMENDATION: DCL10-C. Maintain the contract between the writer and caller of variadic functions.

// 35) RECOMMENDATION: MEM06-A. Do not use user-defined functions as parameters to allocation routines.

t1 = average(*ptr, *ptr1, va_eol);
printf("The average of the 1st structure is %d \n",t1);


  
// 39) RECOMMENDATION: MEM33-C. Allocate and copy structures containing a flexible array member dynamically.

memcpy(p2, p1,
         sizeof(flex_array_struct_variable) + (sizeof(int)
           * 3));

t2 = average(p2->data[0], p2->data[1], p2->data[2], va_eol);

printf("The average of the 2nd structure is %d \n",t2);




// to create a long array
integer_type_variable len = 2;



// 40) RECOMMENDATION: MEM35-C. Allocate sufficient memory for an object.

// 41) RECOMMENDATION:  INT30-C. Ensure that unsigned integer operations do not wrap.


long_type_pointer p;
long_type_variable SIZE_MAX = 2147483647;
  if (len == 0 || len > SIZE_MAX / sizeof(long_type_variable)) {
    // Handle overflow 
	printf("\nOverflow\n");
  }
  p = (long_type_pointer)malloc(len * sizeof(long_type_variable)); // long is used to create an array of long, no chance of overflow.
  if (p == NULL) {
    // Handle error 
    printf("FAILED to create an array\n");	
  }
  //free(p);

p[0] = average(*ptr, *ptr1, va_eol);
p[1] = average(p2->data[0], p2->data[1], p2->data[2], va_eol);





printf("\nThe elements have been added to an array\n\n");


// 42) RECOMMENDATION: ENV03-C. Sanitize the environment when invoking external programs.

if (clearenv() != 0) {
  printf("The environment is not safe\n");
}

if(getenv("PATH")!=NULL)
{
// HANDLE ERROR
printf("Please correct your path\n");
}

  free(ptr);
}









void string_processing_error_detection()
{

printf("\nOS DETECTS ERRORS BEFOREHAND TO ENSURE A SMOOTH PROCESSING OF ITS INSTRUCTIONS\n\n");

// 27) RECOMMENDATION: STR05-C. Use pointers to const when referring to string literals.
// CONST MODIFICATION WOULD RESULT IN AN UNDEFINED BEHAVIOUR.

printf("TASK 1: To modify a constant string:\n\n");
const string_pointer c = "Hello";
printf("A constant string: %s\n\n",c);
printf("NO MODIFICATION CAN BE MADE TO A CONSTANT STRING\n\n\n");


// 29) RULE: STR30-C. Do not attempt to modify string literals.

// 30) (BEYOND_SYLLABUS) RECOMMENDATION: STR11-C. Do not specify the bound of a character array initialized with a string literal.

// 30) is str[14] is not needed, str[] will do

// As an array initializer, a string literal specifies the initial values of characters in an array as well as the size of the array.  This code creates a copy of the string literal in the space allocated to the character array str. The string stored in str can be modified safely.


printf("TASK 2: A CHANGE FOR A DIFFERENCE:\n\n");
string_array str1[] = "Take Artificial Intelligence";
printf("An array type string: %s\n\n",str1);
str1[0] = 'M';
printf("Can be modified as it is not pointed by a pointer\n\n");
printf("Modified string: %s\n\n\n",str1);



// 35) RECOMMENDATION: MEM03-C. Clear sensitive information stored in reusable resources.

printf("TASK 3: To copy a password: \n\n");
strcpy(str1,"PASSWORD: UXf64hTrfd56");
printf("A string has: %s\n\n",str1);

strcpy(str1,"NA");
printf("The value in the string after use is: %s\n\n",str1);

printf("DELETED IMMEDIATELY AFTER USE, COULD NOT BE COPIED\n\n\n");




printf("TASK 4: To split first name and last name\n");

// 33) RECOMMENDATION: STR10-C. Do not concatenate different type of string literals.
string_pointer msg = "First-name "
            "Last_name";
printf("Input string: %s\n\n",msg);


printf("After processing:\n\n");

string_pointer token;

// 28) RECOMMENDATION: STR06-C. Do not assume that strtok() leaves the parse string unchanged.
// THEREFORE A COPY IS MADE

string_pointer copy = (string_pointer )malloc(strlen(msg) + 1);
if (copy == NULL) {
  // Handle error
  printf("FAILED TO ALLOCATE MEMORY\n"); 
}
strcpy(copy, msg);
token = strtok(copy, " ");
puts(token);

 
while (token = strtok(0, " ")) {
  puts(token);
}
printf("\n\n");


printf("TASK 5: To make space for the null character after reallocation\n\n");

string_pointer s1 = (string_pointer )malloc(sizeof(char)*4); 
string_pointer ptr_new; 
strcpy(s1,"PES");
printf("Input string : %s\n\n",s1);
// 45) RECOMMENDATION: STR07-A. Take care when calling realloc() on a null terminated byte string.
ptr_new = (string_pointer)realloc(s1, sizeof(char_variable)*5);


ptr_new[sizeof(char_variable)*4] = '\0'; 

printf("Null character added to %s\n\n",ptr_new);


strcpy(str1," A I ");
printf("TASK 6: TO SAFELY COPY A STRING \n\n");
// 43) RECOMMENDATION: STR00-A. Use TR 24731 for remediation of existing string manipulation code.

// 44) RECOMMENDATION: STR01-A. Use managed strings for development of new string manipulation code.
string_array str2[30];
printf("Input string = %s\n\n",str1);
#ifdef __STDC_LIB_EXT1__	// __STDC_LIB_EXT1__ checks if the ISO TR 24731 functions are supported by the compiler and executes only if the compiler supports them.

integer_type_variable r = strcpy_s(str2, sizeof(str1), str1);

#else

strcpy(str2,str1);
#endif

printf("After copying: %s\n\n",str2);
}












































//function return type should be user made using type def
// variables in a seperate .h file other than the one for function prototypes
// 2 .c files for functions(one for my teammate and one for me) 1 main function (driver function) for both the .c function files
// sir was using the word abstract data types, we have to create abstract data types and store it in a seperate .h file and use them in the .c files









