#include <iostream> 
// Encapsulation
class   Employe{
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
};

int main()
{
    Employe employe1 = Employe("Candy", "Segredo", 19);
    employe1.IntriduceYourSelf();

    Employe employe2 = Employe("#####", "Segredo", 19);
    employe2.IntriduceYourSelf();

    employe1.setAge(16);
    std::cout << employe1.getName() << " is " << employe1.getAge() << " and works in " << employe1.getCompany() <<  "\n";
}