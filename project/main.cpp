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
    int totalBookings = 0;

public:
    Renter() : Person(), totalBookings(0)
    {
    }

    Renter(int id, string name, string gender, int age, string phone,
           string email)
        : Person(id, name, gender, age, phone, email), totalBookings(0)
    {
    }

    void setTotalBookings(int count)
    {
        if (count >= 0)
        {
            totalBookings = count;
        }
    }
    void incrementBookings()
    {
        totalBookings++;
    }
    int getTotalBookings() const
    {
        return totalBookings;
    }

    void displayInfo() const override
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Total Bookings: " << totalBookings << endl;
    }
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

    PadelCourt(int courtId, string courtName, string location, double costPerHour, int ownerId, string ownerName)
    {
        this->courtId = courtId;
        this->courtName = courtName;
        this->location = location;
        this->costPerHour = 0;
        this->ownerId = ownerId;
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
    void setIsAvailable(bool a)
    {
        isAvailable = a;
    }
    // getter
    int getCourtId() const
    {
        return courtId;
    }
    int getOwnerId() const
    {
        return ownerId;
    }
    string getCourtName() const
    {
        return courtName;
    }
    string getLocation() const
    {
        return location;
    }
    double getCostPerHour() const
    {
        return costPerHour;
    }
    string getOwnerName() const
    {
        return ownerName;
    }
    bool getIsAvailable() const
    {
        return isAvailable;
    }
    void displayCourtInfo() const
    {
        cout << "Court ID: " << courtId << endl;
        cout << "Name: " << courtName << endl;
        cout << "Area: " << location << endl;
        cout << "Price per hour: " << costPerHour << endl;
        cout << "Owner: " << ownerName << endl;
        if (isAvailable)
            cout << "Status: Available" << endl;
        else
            cout << "Status: Not Available" << endl;
    }
};
int main()
{
     PadelCourt c(1, "Court A", "Maadi", 200, 5, "Hamza");
    c.displayCourtInfo();              // الاسم "Court A" والمالك "Hamza"
    cout << c.getOwnerId() << endl;    // 5
    c.setCostPerHour(-50);             // Invalid price
    c.setCostPerHour(0);  
}