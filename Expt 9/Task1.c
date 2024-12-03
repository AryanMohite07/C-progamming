#include<stdio.h>
#include<string.h>



// defining the structure of student to hold student data
struct student_record{
char name [50];
int roll_number;
float total_marks;
};


//function to read student data
 void input_student_data(struct student_record students[], int n) {
   for (int i=0; i<n; i++){
         printf("Enter details for student %d\n",i+1);
   printf("Name: ");
   getchat(); // To consume the newline left by the previous input
   geta(students [1].name);

   printf("Roll Number :");
   scanf("%d", &students [1].roll_number);

   printf("Roll Number : ");
   scanf("%d", &students[i]. roll number);

   printf("Total Marks: ");
   scanf("%f", & students [i].total_marks);

   }
 }
 return topper_index;
 }
