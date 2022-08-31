/*Construct the class named person (Data member: age, name), Write member
functions: detail(), display(). Write a program that will accept the detail of four
persons and create function such that it will find the max age from the supplied
detail.*/
#include<iostream>
using namespace std;
class Person{
public:
	string name; 
	float age;
public:
	Person(){
		
	}
	Person(string n, float g){
		name = n;
		age = g;
	}
	void detail(){
		cout<<"Enter the person name: ";
		cin>>name;
		cout<<"Enter the person age: ";
		cin>>age;
	}
	void display(){
		cout<<"\n\nName is: "<<name;
		cout<<"\nAge is: "<<age;
	}
	friend void max_age(Person p1, Person p2, Person p3, Person p4);
};

void max_age(Person p1, Person p2, Person p3, Person p4)
{
	if(p1.age > p2.age && p1.age > p3.age && p1.age > p4.age)
	{
		cout<<"\n\nMaximum age is: "<<p1.age;
		cout<<"\nThe name of the person: "<<p1.name;
	}
	else if(p2.age > p1.age && p2.age > p3.age && p2.age > p4.age)
	{
		cout<<"\n\nMaximum age is: "<<p2.age;
		cout<<"\nThe name of the person: "<<p2.name;
	}
	else if(p3.age > p1.age && p3.age > p2.age && p3.age > p4.age)
	{
		cout<<"\n\nMaximum age is: "<<p3.age;
		cout<<"\nThe name of the person: "<<p3.name;
	}
	else
	{
		cout<<"\n\nMaximum age is: "<<p4.age;
		cout<<"\nThe name of the person: "<<p4.name;
	}
}

int main(){
	
	Person t1,t2,t3,t4;
	
	t1.detail();
	t2.detail();
	t3.detail();
	t4.detail();
	cout<<"\nDisplaying Data:-";
	t1.display();
	t2.display();
	t3.display();
	t4.display();
	max_age(t1, t2, t3, t4);
}
