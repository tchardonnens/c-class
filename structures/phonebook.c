#include <stdio.h>
#include <string.h>

struct employee
{
  int id;
  char lastname[25];
  char firstname[25];
  int phone;
  char office[5];
};

typedef struct employee Employee;

void display(Employee *employee)
{
  printf("ID: %d\n", employee->id);
  printf("Lastname: %s\n", employee->lastname);
  printf("Firstname: %s\n", employee->firstname);
  printf("Phone: %d\n", employee->phone);
  printf("Office: %s\n", employee->office);
}

Employee insert()
{
  Employee newEmployee;
  printf("ID: ");
  scanf("%d", &newEmployee.id);
  printf("Lastname: ");
  scanf("%s", newEmployee.lastname);
  printf("Firstname: ");
  scanf("%s", newEmployee.firstname);
  printf("Phone: ");
  scanf("%d", &newEmployee.phone);
  printf("Office: ");
  scanf("%s", newEmployee.office);
  return newEmployee;
}

int main()
{
  Employee employee;
  employee.id = 1;
  strcpy(employee.lastname, "Doe");
  strcpy(employee.firstname, "John");
  employee.phone = 1234567890;
  strcpy(employee.office, "A1");
  display(&employee);
  Employee employee2 = insert();
}