//Write a C program to implement Adamas University semester marking system.
//Marks==100 && Marks>90:SGPA=10,Credit:O
//Marks<=90 && Marks<80:SGPA=9,Credit:A+
//Marks<=80 && Marks<70:SGPA=8,Credit:
//Marks<=70 && Marks<60:SGPA=7
//Marks<=60 && Marks<50:SGPA=6
//Marks<=50 && Marks<40:SGPA=5
//Marks<=40 && Marks<30:SGPA=4
//Marks<30: SGPA=3
//For credit:calculate the arithmetic mean of the marks of 5 subjects then give the credit as given above on the average.
//Print the SGPA of each subject marks.
#include <stdio.h>
#include<string.h>

struct Subject {
    int marks;
    float sgpa;
    char credit[3];
};


void calculateSGPA(struct Subject *sub) {
    if (sub->marks > 90 && sub->marks <= 100) {
        sub->sgpa = 10;
        strcpy(sub->credit, "O");
    } else if (sub->marks > 80 && sub->marks <= 90) {
        sub->sgpa = 9;
        strcpy(sub->credit, "A+");
    } else if (sub->marks > 70 && sub->marks <= 80) {
        sub->sgpa = 8;
        strcpy(sub->credit, "A");
    } else if (sub->marks > 60 && sub->marks <= 70) {
        sub->sgpa = 7;
        strcpy(sub->credit, "B+");
    } else if (sub->marks > 50 && sub->marks <= 60) {
        sub->sgpa = 6;
        strcpy(sub->credit, "B");
    } else if (sub->marks > 40 && sub->marks <= 50) {
        sub->sgpa = 5;
        strcpy(sub->credit, "C+");
    } else if (sub->marks > 30 && sub->marks <= 40) {
        sub->sgpa = 4;
        strcpy(sub->credit, "C");
    } else {
        sub->sgpa = 3;
        strcpy(sub->credit, "F");
    }
}

int main() {
    struct Subject subjects[5];
    int i;
    float totalMarks = 0.0, averageMarks;

    
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &subjects[i].marks);
        
        calculateSGPA(&subjects[i]);
        totalMarks += subjects[i].marks;
    }

    
    averageMarks = totalMarks / 5;

    
    printf("\nSubject-wise SGPA and Credits:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d - Marks: %d, SGPA: %.1f, Credit: %s\n", i + 1, subjects[i].marks, subjects[i].sgpa, subjects[i].credit);
    }

   
    struct Subject final;
    final.marks = (int)averageMarks;
    calculateSGPA(&final);
    
    printf("\nFinal Credit based on Average Marks: %.2f\n", averageMarks);
    printf("Final SGPA: %.1f, Credit: %s\n", final.sgpa, final.credit);

    return 0;
}
