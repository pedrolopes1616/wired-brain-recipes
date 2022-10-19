#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee : public AbstractEmployee {
private:
	string Company;
	int Age;
protected:
	string Name;
public:
	Employee(string Name, string Company, int Age) {
		this->Name = Name;
		this->Company = Company;
		this->Age = Age;

	};
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if(age >= 18)
		Age = age;

	}
	int getAge() {
		return Age;
	}
	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}
	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry NO promotion for you!" << std::endl;
	}
	virtual void Work() {
		std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
	}

};

class Developer : public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string Name, string Company, int Age, string FavProgrammingLanguage)
		: Employee(Name, Company, Age)
	{
		this->FavProgrammingLanguage = FavProgrammingLanguage;
	}
	void FixBug() {
		std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
	}
	void Work() {
		std::cout << Name << " is writing " << FavProgrammingLanguage << " code!" << std::endl;
	}
};

class Teacher : public Employee {
public:
	string Subject;
	void PrepareLesson() {
		std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
	}
	Teacher(string Name, string Company, int Age, string Subject)
		: Employee(Name, Company, Age)
	{
		this->Subject = Subject;
	}
	void Work() {
		std::cout << Name << " is teaching " << Subject << std::endl;
	}
};
int main()
{
	Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
	Teacher t = Teacher("Jack", "Cool School", 35, "History");
	Employee* e1 = &d;
	Employee* e2 = &t;
	
	e1->Work();
	e2->Work();

	std::cin.get();
}