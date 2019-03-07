/*
 Cory Milsap
   Program calculates grade for CS100 based on user input
   Progam first declares all necessary variables
   Next the program scans for all required inputs
   Finally, all the calculations for the program are computed and the output is then printed onto the screen.
*/


#include <stdio.h>

int main(void)
{
   int lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8, lab9, lab10; // lab scores
   double quiz1, quiz2, quiz3, quiz4, quiz5, quiz6, quiz7, quiz8, quiz9, quiz10; // quiz scoers
   double book1, book2, book3, book4, book5, book6, book7, book8, book9, book10; //textbook exercise scores
   int proj1, proj2, proj3, proj4, proj5, proj6; // project scores
   double exam1, exam2, exam3, exam4; // exam scores
   double avgLab, avgQuiz, avgBook, avgProj, avgExam;
   
   printf("Please enter all 10 lab scores separated by a space. \n");
   scanf("%d %d %d %d %d %d %d %d %d %d", &lab1, &lab2, &lab3, &lab4, &lab5, &lab6, &lab7, &lab8, &lab9, &lab10);
   
   printf("Please enter all 10 quiz scores separated by a space. \n");
   scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &quiz1, &quiz2, &quiz3, &quiz4, &quiz5, &quiz6, &quiz7, &quiz8, &quiz9, &quiz10);

   printf("Please enter all 10 textbook exercise scores seprated by a space. \n");
   scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &book1, &book2, &book3, &book4, &book5, &book6, &book7, &book8, &book9, &book10);
  
   printf("Please enter all 6 project scores separated by a space. \n");
   scanf("%d %d %d %d %d %d", &proj1, &proj2, &proj3, &proj4, &proj5, &proj6);

   printf("Please enter all 4 exam scores separated by a space. \n");
   scanf("%lf %lf %lf %lf", &exam1, &exam2, &exam3, &exam4);

//calculations begin

   avgLab = (1/100.0) * (lab1 + lab2 + lab3 + lab4 + lab5 + lab6 + lab7 + lab8 + lab9 + lab10);
   avgQuiz = (1/10.0) * (quiz1 + quiz2 + quiz3 + quiz4 + quiz5 + quiz6 + quiz7 + quiz8 + quiz9 + quiz10);
   avgBook = (1/100.0) * (book1 + book2 + book3 + book4 + book5 + book6 + book7 + book8 + book9 + book10);
   avgProj = (((2/100.0) * proj1) + ((4/100.0) * proj2) + ((4/100.0) * proj3) + ((15/300.0) * (proj4 + proj5 + proj6)));
   avgExam = (((30/300.0) * (exam1 + exam2 + exam3)) + ((15/100.0) * exam4));

   double avgGrade = avgLab + avgQuiz + avgBook + avgProj + avgExam;
   
   printf("Your semester weighted average is %lf \n", avgGrade); 
 
   return 0;
}
