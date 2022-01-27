#include<bits/stdc++.h>
using namespace std;


class Base
{
   public:
   virtual double calculatePay() = 0;
   virtual void getEmployeeDetails() = 0;
};


class Worker: public Base{
   string name;
   int empId;
   int noOfLeavesTaken;
   double fixSalaryPerDay;

   public:
    static int workerInstance;
   Worker(string empName,int employeeId,double fpd, int Lop)
   {
      name = empName;
      empId = employeeId;
      fixSalaryPerDay = fpd;
      noOfLeavesTaken = Lop;
      workerInstance++;
   }

   double calculatePay()
   {
      double netSalary = (30 - noOfLeavesTaken) * fixSalaryPerDay;
      return netSalary;
   }

   void getEmployeeDetails()
   {
   cout<<"Employee Name: " << name << ",Employee Id:" <<  empId <<",Salary for the month:" << calculatePay();
   }

};

class Manager: public Base{
   string name;
   int empId;
   int fixedSalaryOfMonth;
   int noOfProjects;
   int bonus = 20000;
  
   public:
   static int managerInstance;
   Manager(string empName,int employeeId,double fpd, int nOp)
   {
      name = empName;
      empId = employeeId;
      fixedSalaryOfMonth = fpd;
      noOfProjects = nOp;
      managerInstance++;
   }

   double calculatePay()
   {
      double netSalary = fixedSalaryOfMonth + (noOfProjects * bonus);
      return netSalary;
   }

   void getEmployeeDetails()
   {
   cout<<"Employee Name: " << name << ",Employee Id:" <<  empId <<",Salary for the month:" << calculatePay()<<endl;
   }

};

int Manager::managerInstance = 0;
int Worker::workerInstance = 0;
void getEmployeeDetails(Base* base)
{     if(Worker::workerInstance<=2 and Manager::managerInstance<=2)
      base->getEmployeeDetails();    
}
int main()
{
   Worker* worker = new Worker("Varun",1,2000,3);
   Worker* worker2 = new Worker("Pooja",2,1800,6);
   Manager* manager = new Manager("Atul", 3, 80000, 2);
   Manager* manager2 = new Manager("Sandeep", 4, 70000, 3);
   Manager* manager3 = new Manager("Sandeep", 4, 70000, 3);
   getEmployeeDetails(worker);
   getEmployeeDetails(worker2);
   getEmployeeDetails(manager);
   getEmployeeDetails(manager2);



	return 0;
}
