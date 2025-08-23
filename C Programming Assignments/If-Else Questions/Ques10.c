#include <stdio.h>

int main() {
    int student1Marks, student2Marks, student3Marks;
    printf("Enter marks for three students: ");
    scanf("%d %d %d", &student1Marks, &student2Marks, &student3Marks);
    
    if (student1Marks<0 || student2Marks<0 || student3Marks<0) {
        printf("Marks cannot be negative.\n");
    }
    else if (student1Marks > 100 || student2Marks > 100 || student3Marks > 100) {
        printf("Marks cannot be greater than 100.\n");
    }

    else {
        //student 1 marks comparision
        if (student1Marks >= 75) {
            printf("Student 1 got Grade: A+\n");
        }

        else if (student1Marks < 75 && student1Marks >= 65){
                printf("Student 1 got Grade: A\n");
            }

        else if (student1Marks < 60 && student1Marks >=30){
                printf("Student 1 got Grade: B\n");
            }
        
        //student 2 marks comparision
        if (student2Marks >= 75) {
            printf("Student 2 got Grade: A+\n");
        }

        else if (student2Marks < 75 && student2Marks >= 65){
                printf("Student 2 got Grade: A\n");
            }

        else if (student2Marks < 60 && student2Marks >=30){
                printf("Student 2 got Grade: B\n");
            }


        //student 3 marks comparision
        if (student3Marks >= 75) {
            printf("Student 3 got Grade: A+\n");
        }

        else if (student3Marks < 75 && student3Marks >= 65){
                printf("Student 3 got Grade: A\n");
            }

        else if (student3Marks < 60 && student3Marks >=30){
                printf("Student 3 got Grade: B\n");
            }
        
    }
    
    return 0;
}