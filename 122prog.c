// Create a nested structure for storing student info (name, roll, date of birth).

struct date{
    int day;
    int month;
    int year;
};
struct student{
    char name[50];
    int roll;
    struct date dob;
};
int main(){
    struct student s;
    printf("enter student name: ");
    fgets(s.name;sizeof(s.name),stdin);
    
}