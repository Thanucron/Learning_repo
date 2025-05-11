#include <iostream>
using std::cout, std::cin, std::endl, std::string;

class Student
{
    protected:
        string name; 
        int grade;
    public:
        Student(string n, int g = 0) : name(n), grade(g) {}
        void update_grade(int newGrade)
        {
            grade = newGrade;
        }
        void display_info()
        {
            cout << "Student: " << name << ", Ocena: " << grade <<
            endl;
        }
        string get_name() { return name; }
};
 
class Course
{
    public:
        string courseName;
        Student& enrolledStudent;
        Course(string c, Student& s) : courseName(c), enrolledStudent(s) {}
        void assign_grade(int grade)
        {
            enrolledStudent.update_grade(grade);
        }
        void display_info()
        {
            cout << "Kurs: " << courseName << ", Zapisany student:" << enrolledStudent.get_name() << endl;
        }
};
 
int main()
{
    Student john("John");
    Course math("Math", john);
    cout << "Informacje przed zmianą oceny:" << endl;
    math.display_info();
    john.display_info();
    
    math.assign_grade(90);
    cout << "Informacje po zmianie oceny:" << endl;
    math.display_info();
    john.display_info();
    return 0;
}
