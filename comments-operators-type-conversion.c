#include <stdio.h>

int main(){
    // comments

    // age of ben10
    int age = 34;
    // printing age
    printf("Age: %d", age);
    // returning 0


    // operators +, =
    // age after a decade
    int newAge = age + 10;
    printf("\n%d", newAge);

    double weight = 35.6;
    double weight2 = 12.5;

    double totalW = weight + weight2;

    printf("\n%.2lf", totalW);
    // increment

    int students = 500;
    printf("\n%d", ++students);
    // decriment
     printf("\n%d", --students);

    //  implicit data conversion done internally by the compiler while explicit datatype conversion is done by the developer

    // implicit
    int room = 14.34;
    printf("\n%d", room);

    // explicit 
    double stories = 14.87;
    printf("\n%d", (int)stories + 10);
        

    return 0;
}
