#include <iostream>
#include <string>

class Province;

class Country
{
public:
    std::string name;
    Province* capital; 

    Country(std::string name)
    :name(name)
    {}

    void setCapital(Province* capital)
    {
        this->capital = capital;
    }

    std::string getName(std::string name)
    {
        return name;
    }
};

class Province
{
public:
    std::string name;
    Country* domain;
    Province(std::string name)
    :name(name)
    {}

    void setDomain(Country* domain)
    {
        this->domain = domain;
    }

    std::string getDomain()
        {
            return (*domain).name;
        }
};

int main() {
    Province istanbul = Province("Istanbul");
    Country turkey = Country("Turkey");

    istanbul.setDomain(&turkey);
    turkey.setCapital(&istanbul);

    turkey.name = "Turkey";
    istanbul.name = "Istanbul";

    turkey.capital = &istanbul;
    istanbul.domain = &turkey;

    std::cout << istanbul.getDomain();

    return 0;
}