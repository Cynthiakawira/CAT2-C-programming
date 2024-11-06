# include <stdio.h>
# include <string.h>

struct employee {
    int ID ;
    char Name[25],Department[20],Email[50];
    float Salary;
} employee1;
int main ()
{
    struct employee employee1;
    strcpy(employee1 . Name ,"John Doe");
    employee1 . ID=12345;
    employee1 . Salary=55000.50;
    strcpy(employee1 . Department , "Human Resources");
    strcpy(employee1 . Email , "johndoe@company.com");
    
    printf("Name %s\n",employee1 . Name);
    printf("ID %d\n",employee1 . ID);
    printf("Department %s\n",employee1 . Department);
    printf("Salary %f\n",employee1 . Salary);
    printf("Email %s\n",employee1 . Email);
       return 0;
}
