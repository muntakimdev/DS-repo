#include<stdio.h>
#include <string.h>

void routine_viewer(){
    printf("_______________Routine Viewer_______________ \n");
    printf("Select a day :\n");
    printf("1.Saturday\n");
    printf("2.Sunday\n");
    printf("3.Monday\n");
    printf("4.Tuesday\n");
    printf("5.Wednesday\n");
    printf("6.Thursday\n");
    printf("7.Friday\n");
    printf("8.View Full routine\n");
    printf("____________________________________________\n");
    printf("Select a number representing a day(ex:type '1' for saturday) : ");
    int flag;
    scanf("%d",&flag);
    switch (flag)
    {
    case(1):
        printf("-----------------------------------------SATURDAY-------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(2):
        printf("------------------------------------------SUNDAY--------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(3):
        printf("-----------------------------------------MONDAY---------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(4):
        printf("-------------------------------------------TUESDAY------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(5):
        printf("-----------------------------------------WEDNESDAY------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(6):
        printf("------------------------------------------THURSDAY------------------------------------------------\n");
        printf("|09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("| EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(7):
        printf("------------------------------------------FRIDAY--------------------------------------------------\n");
        printf("---------------------------------------->>OFF DAY<<-----------------------------------------------\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        break;
    case(8):
        printf("---------------------------------------------------64_F_LU---------------------------------------------------------\n");
        printf("|DAY__TIME>>>>|  |09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  SATURDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   SUNDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   MONDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  TUESDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("| WEDNESDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  THURSDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  |             |  |             |  |           |  |    BREAK    |  |             |  |             |\n");
        printf("|   FRIDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |             |  |             |  |           |  |    BREAK    |  |             |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        
        
        break;
    
    default:
        printf(">>>>>>>>>>>> Please Enter a number from 1-8 <<<<<<<<<<<<<<<<<\n");
        printf("\n");
        printf("---------------------------------------------------64_F_LU---------------------------------------------------------\n");
        printf("|DAY__TIME>>>>|  |09:00-10:20AM|  |10:20-11:40AM|  |11:40-1:0PM|  |    BREAK    |  |01:30-02:50PM|  |02:50-04:10PM|\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  SATURDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   SUNDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|   MONDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  TUESDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("| WEDNESDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  | EEE-1221 MMR|  | PHY-1272 IA |  |PHY-1272 IA|  |    BREAK    |  | MAT-1251 SRR|  |             |\n");
        printf("|  THURSDAY   |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |   RAB-311   |  |     PHL     |  |    PHL    |  |    BREAK    |  |   RAB-304   |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("|             |  |             |  |             |  |           |  |    BREAK    |  |             |  |             |\n");
        printf("|   FRIDAY    |  |             |  |             |  |           |  |             |  |             |  |             |\n");
        printf("|             |  |             |  |             |  |           |  |    BREAK    |  |             |  |             |\n");
        printf("-------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf(">>>>>>>>>>>> Please Enter a number from 1-8 <<<<<<<<<<<<<<<<<\n");
        break;
    }


}
void cgpa_calculator(){
    int n;
    float credit[100];
    float Points[100];
    float totalCredits = 0.0, totalWeightedGP = 0.0;

    printf("Enter the number of courses: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nCourse %d:\n", i + 1);

        printf("Enter credit for %d: ", i+1);
        scanf("%f", &credit[i]);

        printf("Enter grade point earned for course %d : ",i+1);
        scanf("%f", &Points[i]);

        totalCredits += credit[i];
        totalWeightedGP +=Points[i] * credit[i];
    }

    float cgpa = totalWeightedGP / totalCredits;

    printf("\n------------------------------\n");
    printf("Your CGPA is: %.2f\n", cgpa);
    printf("------------------------------\n");
}
void addStudent() {
    char name[100], id[50];
    float cgpa;
    FILE *file = fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student name: ");
    scanf(" %[^\n]", name);
    printf("Enter student ID: ");
    scanf(" %[^\n]", id);
    printf("Enter student CGPA: ");
    scanf("%f", &cgpa);

    fprintf(file, "Name: %s | ID: %s | CGPA: %.2f\n", name, id, cgpa);
    fclose(file);

    printf("Student added successfully!\n");
}
void viewStudents() {
    char line[300];
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("No student records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    printf("------------------------\n");
}
void searchStudent() {
    char search[100];
    char line[300];
    int found = 0;
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("No student records found.\n");
        return;
    }

    printf("Enter name or ID to search: ");
    scanf(" %[^\n]", search);

    printf("\n--- Search Results ---\n");
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, search)) {
            printf("%s", line);
            found = 1;
        }
    }
    fclose(file);

    if (!found)
        printf("No matching student found.\n");

    printf("------------------------\n");
}
void studentinformation(){
    int choice;

    do {
        printf("\n--- Student Information Manager ---\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

}

int main(){
    int flag;
    printf("_______________MAIN_MENUE_______________ \n");
    printf("Select an oparation:\n");
    printf("1. View Routine \n");
    printf("2. CGPA Calculator \n");
    printf("3. Student Information \n");
    printf("4. Exit \n");
    printf("____________________________________________\n");
    printf("Select a number representing a Oparation: ");
    scanf("%d",&flag);
    while (flag!=4)
    {
        switch (flag)
        {
        case 1:
            routine_viewer();
            break;
        case 2:
            cgpa_calculator();
            break;
        case 3:
            studentinformation();
            break;
        default:
            printf(" Wrong Input\n");
            break;
        }
    printf("_______________MAIN_MENUE_______________ \n");
    printf("Select an oparation:\n");
    printf("1. View Routine \n");
    printf("2. CGPA Calculator \n");
    printf("3. Student Information \n");
    printf("4. Exit \n");
    printf("____________________________________________\n");
    printf("Select a number representing a Oparation: ");
    scanf("%d",&flag);
        
    }
    
    


    return 0;
}