#include <iostream>
using namespace std;


class Employee {
	protected:
		int employeeID, scale;

	public:
  		void input() {
	    	cout << "Enter employee ID: ";
	    	cin >> employeeID;
	    	cout << "Enter employee scale: ";
	    	cin >> scale;
		}

  	void show() {
    	cout << "Employee ID: " << employeeID << endl;
    	cout << "Employee scale: " << scale << endl;
	}
};

class Manager : public Employee {
	private:
		int managerID;
  		string department;

	public:
  		void input() {
    	Employee::input();
    	cout << "Enter manager ID: ";
    	cin >> managerID;
    	cout << "Enter manager department: ";
    	cin >> department;
	}

  	void show() {
    	Employee::show();
    	cout << "Manager ID: " << managerID << endl;
    	cout << "Manager department: " << department << endl;
	}
};

int main() {
	Manager manager;
//	cout<<manager;
	manager.input();
	manager.show();

  return 0;
}
