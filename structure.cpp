#include <bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int roll;
    double salary;
    char x;
    node(string name_, int roll_, double salary_, char x_){
        name = name_;
        roll = roll_;
        salary = salary_;
        x = x_;
    }
};

void printNode(node *str){
    cout << "Student Name: " << str->name << endl;
    cout << "Student Roll: " << str->roll << endl;
    cout << "Student Salary: " << str->salary << endl;
    cout << "Student fav character: " << str->x << endl;
}
int main() {
    //wrong way to define node
    // node *student4;
    // student4->name = "Akash";
    // student4->roll = 61;
    // student4->salary = 2400000.00;
    // student4->x = 'A';
    //A good way to define
    node *student1 = new node("Animesh", 18, 20000.00, 'x');
    node *student2 = new node("Guru", 20, 15000.00, '@');
    printNode(student1);
    printNode(student2);
    // printNode(student4);
    return 0;
}