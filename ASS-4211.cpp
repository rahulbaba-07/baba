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
