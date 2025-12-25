#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float salary;
    int phNum;
    string address;
    string email;
    char favChar;

public:
    string name;
    char block;
    string post;
    float rating;
    int experience;
    string feedback;

    void printName(void);
    void setName(string inpName);
    void printId(void);
    void setId(int inpId);
    void printSalary(void);
    void setSalary(float inpSalary);
    void printBlock(void);
    void setBlock(char inpBlock);
    void printPost(void);
    void setPost(string inpPost);

    void employee(string inpName, int inpId, float inpSalary, char inpBlock, string inpPost)
    {
        setName(inpName);
        cout << name << "'s Basic Details: " << endl;
        printName();
        setId(inpId);
        printId();
        setSalary(inpSalary);
        printSalary();
        setBlock(inpBlock);
        printBlock();
        setPost(inpPost);
        printPost();
    }

    void printRating(void);
    void setRating(float inpRate);
    void printExp(void);
    void setExp(int inpExp);
    void printFeedback(void);
    void setFeedback(string inpFeed);

    void acheivements(float inpRate, int inpExp, string inpFeed)
    {
        cout << name << "'s Acheivements: " << endl;
        setRating(inpRate);
        printRating();
        setExp(inpExp);
        printExp();
        setFeedback(inpFeed);
        printFeedback();
    }

    void setphNum(int inpphNum);
    void printphNum(void);
    void setAddress(string inpAddress);
    void printAddress(void);
    void setEmail(string inpEmail);
    void printEmail(void);
    void setfavChar(char inpfavChar);
    void printfavChar(void);

    void personalDet(int inpphNum, string inpAddress, string inpEmail, char inpfavChar)
    {
        cout << name << "'s Personal Details: " << endl;
        setphNum(inpphNum);
        printphNum();
        setAddress(inpAddress);
        printAddress();
        setEmail(inpEmail);
        printEmail();
        setfavChar(inpfavChar);
        printfavChar();
    }
};

void Employee ::printName(void)
{
    cout << "Employee's Name: " << name << endl;
}
void Employee ::setName(string inpName)
{
    name = inpName;
}

void Employee ::printId(void)
{
    cout << name << "'s Id: " << id << endl;
}
void Employee ::setId(int inpId)
{
    id = inpId;
}

void Employee ::printSalary(void)
{
    cout << name << "'s Salary: " << salary << " Rs." << endl;
}
void Employee ::setSalary(float inpSalary)
{
    salary = inpSalary;
}

void Employee ::printBlock(void)
{
    cout << name << "'s Block: " << block << endl;
}
void Employee ::setBlock(char inpBlock)
{
    block = inpBlock;
}

void Employee ::printPost(void)
{
    cout << name << "'s Post: " << post << endl
         << endl;
}
void Employee ::setPost(string inpPost)
{
    post = inpPost;
}

void Employee ::printRating(void)
{
    cout << name << "'s Rating(out of 5): " << rating << endl;
}
void Employee ::setRating(float inpRate)
{
    rating = inpRate;
}

void Employee ::printExp(void)
{
    cout << name << "'s Experience(in yrs): " << experience << endl;
}
void Employee ::setExp(int inpExp)
{
    experience = inpExp;
}

void Employee ::printFeedback(void)
{
    cout << name << "'s Feedback from previous company(in few words): " << feedback << endl
         << endl;
}
void Employee ::setFeedback(string inpFeed)
{
    feedback = inpFeed;
}

void Employee ::setphNum(int inpphNum)
{
    phNum = inpphNum;
}
void Employee ::printphNum(void)
{
    cout << name << "'s phone number: " << phNum << endl;
}
void Employee ::setAddress(string inpAddress)
{
    address = inpAddress;
}
void Employee ::printAddress(void)
{
    cout << name << "'s Address: " << address << endl;
}
void Employee ::setEmail(string inpEmail)
{
    email = inpEmail;
}
void Employee ::printEmail(void)
{
    cout << name << "'s Email id: " << email << endl;
}
void Employee ::setfavChar(char inpfavChar)
{
    favChar = inpfavChar;
}
void Employee ::printfavChar(void)
{
    cout << name << "'s fav character: " << favChar << endl
         << endl;
}

int main()
{
    Employee emp1, emp2;

    emp1.employee("Krishna", 101, 45000, 'A', "Software Engineer");
    emp1.acheivements(4.5, 3, "Good");
    emp1.personalDet(9893447828, "Jabalpur", "krishnachoubey989@gmail.com", 'S');

    emp2.employee("Sourabh", 102, 50000, 'C', "Software Developer");
    emp2.acheivements(4.7, 5, "Fantastic");
    emp2.personalDet(9098088780, "Jabalpur", "sourabhchoubey01@gmail.com", 'K');

    return 0;
}