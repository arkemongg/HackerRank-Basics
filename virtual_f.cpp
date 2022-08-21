#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:

    string name;
    int age;

    virtual void getdata(){

    }

    virtual void putdata(){

    }

};

class Professor:public Person
{
public:

    int publications;
    static int X ;
     void getdata(){
            cin>>name>>age>>publications;
    }

     void putdata(){

        cout<<name<<" "<<age<<" "<<publications<<" "<<X<<endl;
        X++;

    }

};
int Professor::X=1;

class Student : public Professor
{
private:
    int marks[6];
    int total = 0;
    static int X1;
public:

    void getdata(){

        cin>>name>>age;

        for(int i = 0 ; i<6;i++){
            cin>>marks[i];
            total+=marks[i];
        }


    }
    void putdata(){

        cout<<name<<" "<<age<<" "<<total<<" "<<X1<<endl;
        X1++;
    }


};
int Student::X1=1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    return 0;

}

