#include <iostream> 

class   Employe{
public:
    std::string Name;
    std::string Company;
    int Age;
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
}