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
};

int main()
{
    Employe employe1;
    employe1.Name = "Candy";
    employe1.Company = "Segredo";
    employe1.Age = 19;
    employe1.IntriduceYourSelf();
}