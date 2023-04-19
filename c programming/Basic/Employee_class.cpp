#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int emp_id;
		string Dept;
		public:
			static string company_name;
			
			//default constructor
			Employee()
			{
				string name="NA";
				int emp_id="0";
				string Dept="NA";
				
			}
			//Parameterised constructor
			Employee(string name,int emp_id,string Dept)
			{
				this->string name=name;
				this->int emp_id=emp_id;
				this->string Dept=Dept;
			}
			
			//mutator function
			    void  setEmpName(string name)
			    {
			    	this->name=name;
				}
				void setEmpID(int emp_id)
				{
					this->emp_id=id;
				}
}				void setempDept(int Dept)
				{
					this->string Dept=Dept;
				}
}