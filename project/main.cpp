#include <iostream>
#include <string>

class Person
{
protected:
    int id, age;
    std::string name, gender, email, phone;

public:
    Person();
    Person(int id = 0, int age = 0, std::string name = "", std::string gender = "", std::string = "email", std::string phone = "") {};

    void setId() {}
    void getId() {}
    void setName() {}
    void getName() {}
    void setGender() {}
    void getGender() {}
    void setAge() {}
    void getage() {}
    void setPhone() {}
    void getPhone() {}
    void setEmail() {}
    void getEnail() {}
    void displayInfo();
};
class Renter : public Person
{
private:
    int totalBookings = 0;

public:
};
class PadelCourt
{
};
int main() {}