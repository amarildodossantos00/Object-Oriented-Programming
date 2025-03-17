#include <iostream> 
// Abstraction

class   AbstractionEmploye{
	//metodo obrigatorio!
    virtual void	AskForPromotion() = 0;
};

class   Employe:AbstractionEmploye {
private:
    std::string Name;
    std::string Company;
    int Age;
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
};

int main()
{
    Employe employe1 = Employe("Candy", "Segredo", 19);
    Employe employe2 = Employe("#####", "Segredo", 39);

	employe1.AskForPromotion();
	employe2.AskForPromotion();
}