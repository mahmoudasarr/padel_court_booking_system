// tells the compiler to include this file only once in each source file.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    int id = 0;
    string name = "";
    string gender = "";
    int age = 0;
    string phone = "";
    string email = "";

public:
    Person() {}

    Person(int id, string name, string gender, int age, string phone,
           string email)
        : id(id), name(name), gender(gender), age(age), phone(phone),
          email(email)
    {
    }

    int getId() const
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getName() const
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getGender() const
    {
        return gender;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    int getAge() const
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    string getPhone() const
    {
        return phone;
    }

    void setPhone(string phone)
    {
        this->phone = phone;
    }

    string getEmail() const
    {
        return email;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    virtual void displayInfo() const = 0;
};

class Owner : public Person

{
private:
    int courtsCount = 0;

public:
    Owner() : Person()
    {
    }

    Owner(int id, string name, string gender, int age, string phone,
          string email)
        : Person(id, name, gender, age, phone, email)
    {
    }

    int getCourtsCount() const
    {
        return courtsCount;
    }

    void setCourtsCount(int count)
    {
        courtsCount = count;
    }

    void incrementCourtsCount()
    {
        courtsCount++;
    }

    void displayInfo() const override
    {
        cout << "========================================" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Courts Count: " << courtsCount << endl;
        cout << "========================================" << endl;
    }
};
class Renter : public Person
{
private:
    int totalBooking = 0;

public:
    Renter() : Person() {}
    Renter(int id, string name, string gender, int age, string phone, string email)
        : Person(id, name, gender, age, phone, email) {}

    void setTotalBookings()
    {
    }
    int setTotalBookings() const {}
    void incrementBookings() {}
    void displayInfo() {};
};
class PadelCourt
{
private:
    int courtId;
    string courtName;
    string location;
    double costPerHour;
    int ownerId;
    string ownerName;
    bool isAvailable;

public:
    PadelCourt()
    {
        courtId = 0;
        courtName = "";
        location = "";
        costPerHour = 0;
        ownerId = 0;
        ownerName = "";
        isAvailable = true;
    }

    PadelCourt(int courtId, string name, string location, double costPerHour, int OwnerId, string ownerName)
    {
        this->courtId = courtId;
        this->courtName = courtId;
        this->location = location;
        this->costPerHour = costPerHour;
        this->ownerName = ownerName;
        this->isAvailable = true;
        setCostPerHour(costPerHour);
    }
    // setter
    void setCostPerHour(double c)
    {
        if (c > 0)
        {
            costPerHour = c;
        }
        else
        {
            cout << "Invalid price! Must be greater than 0.\n";
        }
    }
    void setisAvailable(bool a) {
        isAvailable = a;
    }
    // getter
    int getCourtId()
    {
        return courtId;
    }
    string getCourtName()
    {
        return courtName;
    }
    string getlocation()
    {
        return location;
    }
    double getcostPerHour()
    {
        return costPerHour;
    }
    string getownerName()
    {
        return ownerName;
    }
    int getisAvailable()
    {
        return isAvailable;
    }
};
int main()
{
}