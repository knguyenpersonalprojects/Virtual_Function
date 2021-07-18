#include<iostream>
#include<string>
using namespace std;
//https://www.hackerrank.com/challenges/virtual-functions/problem

class Person
{
private:
	int age;
	string name;
public:
	virtual void SetAge(int p_age)
	{
		age = p_age;
	}
	virtual void SetName(string p_name)
	{
		name = p_name;
	}
	virtual string GetName()
	{
		return name;
	}
	virtual int GetAge()
	{
		return age;
	}
};

class Student : public Person
{


public:
	int marks[6];
	int cur_id=0;
	int total = 0;
	string s_name;
	int s_age;
	
	virtual void GettData()
	{
		cin >> s_name >> s_age;
		for (int i = 0; i < 5; i++)
		{
			cin >> marks[i];
			total += marks[i];
		}
		SetName(s_name);
		SetAge(s_age);
		cur_id++;

		SetName(s_name);
		SetAge(s_age);
		
	}
	virtual void PutData()
	{
		cout << GetName() << " " << GetAge() << " " << total << " " << cur_id << endl;
	}
};

class Professor :public Person
{

public:
	Person ProfArr[2];
	int publications;
	int cur_id = 0;
	string p_name;
	int p_age;
	virtual void GettData()
	{
		cin >> p_name >> p_age >> publications;
		SetName(p_name);
		SetAge(p_age);
		cur_id++;
	}
	virtual void PutData()
	{
		cout << GetName() << " " << GetAge() << " " << publications << " " << cur_id << endl;
	}

};

int main()
{
	int num_of_objects;
	int response;
	cin >> num_of_objects;
	for (int i = 0; i < num_of_objects; i++)
	{
		cin >>response;
		if (response == 1)
		{
			Professor t;
			t.GettData();
			t.PutData();

			
		}
		
	}
	system("PAUSE");
	
}