#include<stdio.h>
#include<string.h>

struct student {
    
char name [50];
int age;
float gpa; 

};

int main () {
    struct student class[3] ;
    
    strcpy (class[0].name, "Natsumi" );
    class[0].age = 16 ;
    class[0].gpa = 3.45 ;
    
    strcpy (class[1].name, "Kuromi");
    class[1].age = 17;
    class[1].gpa = 3.77 ;
    
    for (int i=0; i<2; i++) {
        printf (" Student name %s\n Age: %d\n GPA: %.2f\n\n", class[i].name, class[i].age, class[i].gpa);
    }
    return 0;
}
