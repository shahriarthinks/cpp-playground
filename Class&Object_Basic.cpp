#include <iostream>
#include <string>

using namespace std;
class Employee{
    private:
        int empID;
        string name;
        double salary;
public:
void setDetails(int id, string empName,double empSalary){
    empID=id;
    name=empName;
    salary=empSalary;
}
void displayDetails(){
    cout<<"Employee ID: "<<empID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}
void calculateYS(){
    cout<<"Yearly Salary: "<<salary*12<<endl;
}
};
int main()
{
    Employee emp1;
    emp1.setDetails(111, "jisan", 5000);
    emp1.displayDetails();
    emp1.calculateYS();

    return 0;
}
