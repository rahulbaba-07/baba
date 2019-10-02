   2nd list_2nd programme.. 
#include <iostream>
using namespace std;
class student
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
	};
	class engeinnering:public student
	{
		public:
		int r;
		char n[10];
		public:
			void getdata()
			{
                cout<<"faculty->engeineering"<<endl;
				cout<<"enter name";
				cin>>n;
				cout<<"enter roll";
				cin>>r;
				
			}
			void display()
			{
				cout<<"name="<<n<<endl;
				cout<<"roll no="<<r<<endl;
				
			}
	};
	class medicine:public student
	{
		public:
		int r;
	    char n[10];
			void getdata()
			{
				cout<<"faculty->medicine"<<endl;
				cout<<"enter name";
				cin>>n;
				cout<<"enter roll";
				cin>>r;
				
			}
			void display()
			{
				cout<<"name="<<n<<endl;
				cout<<"roll no="<<r<<endl;
				
			}
		
	};
	class science:public student{
    public:
	int r;
    char n[10];
		void getdata()
		{
			cout<<"faculty->science"<<endl;
			cout<<"enter name";
			cin>>n;
			cout<<"enter roll no";
			cin>>r;
			
		}
		void display()
		{
			cout<<"name="<<n<<endl;
			cout<<"roll no="<<r<<endl;
					
			}
		};
		int main()
		{
		student *p;
		engeinnering e;
		medicine m;
		science s;
		p=&e;
		p->getdata();
		p->display();
		
		p=&m;
		p->getdata();
		p->display();
		
		p=&s;
		p->getdata();
		p->display();
		return 0;
}
1st_list_2nd programme..

Fw: #include<iostream> using namespace std; class batsman { 	int bcode; 	string bname; 	int innings,notout,runs; 	float batavg; 	void calcavg() 	{     	batavg=runs/(innings-notout); 	} public : 	void getdata(); 	void displaydata(); }; void batsman::getdata() { 	cout<<"Enter batsman code"; 	cin>>bcode; 	cout<<"Enter batsman name"; 	cin>>bname; cout<<"enter innings,notout and runs"; 	cin>>innings>>notout>>runs; calcavg(); } void batsman::displaydata() { 	cout<<"batsman code"<<bcode<<"\nbatsman name"<<bname<

PROGRAMM NO 7
#include<iostream>
using namespace std;
class Rectangle
{
private:
float length;
float width;
public:
void setlength(float);
void setwidth(float);
float perimeter();
float area();
void show();
int sameArea(Rectangle);
};


void Rectangle::setlength(float len)
{
length = L;
}

void Rectangle::setwidth(float wid)
{
width = W;
}

float Rectangle::perimeter()
{
return (2 * length + 2 * width);
}

float Rectangle::area()
{
return length * width;
}

void Rectangle::show()
{
cout << "Length: " << length << " Width: " << width;
}

int Rectangle::sameArea(Rectangle other)
{
float areaf = length * width;
float areas = other.length * other.width;
if (areaf == areas)
return 1;
return 0;
}

int main()
{
Rectangle first;
Rectangle second;
first.setlength(5);
first.setwidth(2.5);
second.setlength(5);
second.setwidth(18.9);
cout << "First rectangle: ";
first.show();
cout << endl << "Area: " << first.area() << "Perimeter: " << first.perimeter() << endl << endl;
cout << "Second rectangle: ";
second.show();
cout << endl << "Area: " << second.area() << "Perimeter: " << second.perimeter() << endl << endl;
if (first.sameArea(second))
cout << "Rectangles have the same area\n";
else
cout << "Rectangles do not have the same area\n";
first.setlength(15);
first.setwidth(6.3);
cout << "First rectangle: ";
first.show();
cout << endl << "Area: " << first.area() << "Perimeter: "<< first.perimeter() << endl << endl;
cout << "Second rectangle: ";
second.show();
cout << endl << "Area: " << second.area() << "Perimeter: "<< second.perimeter() << endl << endl;
if (first.sameArea(second))
cout << "Rectangles have the same area\n";
else
cout << "Rectangles do not have the same area\n";

return 0;
}

