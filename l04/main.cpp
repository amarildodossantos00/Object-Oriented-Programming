#include <iostream> 
// Polimorfismo

class   AbstractionEmploye{
	//metodo obrigatorio!
    virtual void	AskForPromotion() = 0;
};

class   Employe:AbstractionEmploye {
private:
    std::string Company;
    int Age;
protected:
    std::string Name;
public:
    void    setName(std::string name){
        Name = name;
    }
    std::string    getName(){
        return (Name);
    }
    void    setCompany(std::string company){
        Company = company;
    }
    std::string    getCompany(){
        return (Company);
    }
    void    setAge(int age){
        if (age >= 18)
            Age = age;
        else
            std::cout << "Error\n";
    }
    int    getAge(){
        return (Age);
    }
    void    IntriduceYourSelf()
    {
        std::cout << " Name -> " << Name << std::endl;
        std::cout << " Company -> " << Company << std::endl;
        std::cout << " Age -> " << Age << std::endl;
    }
    Employe(std::string name, std::string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
	void	AskForPromotion(){
		if (Age > 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry NO promotion for you!" << std::endl;
	}
    virtual void    Work(){
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class	Developer:public Employe{
public:
	std::string FvrtProgLang;
	Developer(std::string name, std::string company, int age, std::string fvrtproglang)
		:Employe(name, company, age)
	{
		FvrtProgLang = fvrtproglang;
	}
	void	FixBug(){
		std::cout << Name << " fixed bug using " << FvrtProgLang << std::endl;
	}
    void    Work(){
        std::cout << Name << " is writing " << FvrtProgLang << " code" << std::endl;
    }
};

class	Teacher:public Employe {
public:
	std::string	Subject;
	void PrepareLesson(){
		std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
	}
	Teacher(std::string name, std::string company, int age, std::string subject)
		:Employe(name, company, age)
	{
		Subject = subject;
	}
    void    Work(){
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

int main() 
{
	Developer dvlp = Developer("COD ALIEN", "YouTube", 19, "Python");
	Teacher tch = Teacher("Capassola", "Girassol", 36, "SEAC");

    Employe* e1 = &dvlp;
    Employe* e2 = &tch;

    e1->Work();
    e2->Work();
}