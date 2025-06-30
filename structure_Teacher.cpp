#include <iostream>
#include <string>

using namespace std;

struct Teacher
{
    string name;
    int id;
    double salary;

    void setAll(string n, int i, double s)
    {
        setName(n);
        setId(i);
        setSalary(s);
    }

    void setName(string n)
    {
        name = n;
    }

    void setId(int i)
    {
        id = i;
    }

    void setSalary(double s)
    {
        if (s > 0)
        {
            salary = s;
        }
        else
        {
            salary = 0;
            cout << "Invalid Salary. Salary set to 0." << endl;
        }
    }

    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return id;
    }

    double getSalary() const
    {
        return salary;
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

    void yearlySalary() const
    {
        cout << "Yearly Salary: " << salary * 12 << endl;
    }

    void Bonus() const
    {
        double bonus = salary * 0.3;
        double swb = salary + bonus;

        cout << "Bonus Amount: " << bonus << endl;
        cout << "Salary With Bonus: " << swb << endl;
        cout << "Yearly Salary With Bonus: " << (salary * 12) + (bonus * 2) << endl;
    }
};

int main()
{
    Teacher t1;
    t1.setAll("John", 101, -3.5);
    t1.setName("John Wick");
    t1.setSalary(45000);
    t1.display();

    Teacher t2;
    t2.setAll("Tony Stark", 102, 39999);
    t2.display();

    t1.yearlySalary();
    t2.yearlySalary();

    t1.Bonus();
    t2.Bonus();

    return 0;
}
