#include <stdio.h>
int main(){
    int ftMarks[20] = {70,57,89,75,78,56,67,85,44,77,89,75,57,88,44,67,87,55,78,80};
    int stMarks[20] = {78,90,87,97,65,87,89,87,65,78,88,89,66,57,89,90,87,78,67,89};
    int finalMraks[20] = {76,98,67,56,97,56,87,67,87,97,66,78,77,89,88,77,65,55,67,88};

    double totalMarks[20];
    for(int i=0; i<20; i++){
            totalMarks[i] = (ftMarks[i]*25)/100 + stMarks[i]/4 + finalMraks[i]/2;
    }

    int marks;
    for(marks=33; marks<=100; marks++){
       int count = 0;

       for(int i=0; i<20; i++){
            if(totalMarks[i]==marks){
                count++;
            }
       }
       printf("Marks: %d count: %d\n", marks, count);
    }


    return 0;
}*/





/*#include <stdio.h>
int main(){
    int myArray[10] = {5,10,15,20,25,30,35,40,45,50};
    int newArra[10];

    for(int i=0 , j=9; i<10; i++ , j--){
    newArra[j] = myArray[i];

    }
    for(int i=0; i<10; i++){
        printf("%d\n", newArra[i]);
    }

    return 0;
}*/




/*#include <stdio.h>
int main(){
    int ftMarks,stMarks,finalMarks;
    printf("Enter your 1st-term marks, 2nd-term marks and then final-marks:\n");
    scanf("%d %d %d", &ftMarks, &stMarks, &finalMarks);

    double totalMarks = ((ftMarks*25)/(double)100) + ((stMarks*25)/(double)100) + ((finalMarks*50)/(double)100);

    //double totalMarks = ftMarks/4.0 + stMarks/4.0 + finalMarks/2.0;
    printf("%.0lf\n",totalMarks);

    return 0;
}*/

