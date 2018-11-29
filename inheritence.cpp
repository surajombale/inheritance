#include<string.h>
#include<iostream>
using namespace std;
namespace Nempolyee
{
	class date
	{
		private:
			int dd,mm,yy;
		public:
			date():dd(01),mm(01),yy(1001)
			{
				cout<<"inside parameterless date ctor"<<endl;
			}
			
			
			date(int dd,int mm,int yy):dd(dd),mm(mm),yy(yy)
			{
				cout<<"inside parameterize ctor of date"<<endl;
			}
		
			
			
			void print()
			{
				cout<<"date::"<<this->dd<<endl;
				cout<<"month::"<<this->mm<<endl;
				cout<<"year::"<<this->yy<<endl;
			//	cout<<"inside print method of date"<<endl;
			
			
			}
	
			~date()
			{
				this->dd=00;
				this->mm=00;
				this->yy=0000;
				cout<<"inside dtor of date"<<endl;
			
			}
	
	};
	
	class address
	{
		private:
			char area[20];
			char city[10];
			int pinno;

		public:
			address()
			{
				strcpy(this->area,"abcdefgh");
				strcpy(this->city,"abc");
				this->pinno=11111;
			
				cout<<"inside paramtrless ctor of address"<<endl;
			}
	
	
			address(char *area,char *city,int pinno)
			{
				strcpy(this->area,area);
				strcpy(this->city,city);
				this->pinno=pinno;
				cout<<"inside parametrize ctor of address"<<endl;
			
			}
		
			void print()
			{
				cout<<"area::"<<this->area<<endl;
				cout<<"city::"<<this->city<<endl;
				cout<<"pinno::"<<this->pinno<<endl;
			//	cout<<"inside print method of address"<<endl;			
			
			}
	
			~address()
			{
				strcpy(this->area," ");
				strcpy(this->city," ");
				this->pinno=0;
			
				cout<<"inside dtor of address"<<endl;
			}
	
		
	};

	class person
	{
		private:
			char name[20];
			address peraddress;
			date bday;

		public:
			person()
			{
				strcpy(this->name,"xyz");
				cout<<"inside parameterless ctor of person"<<endl;
			}
			
			person(char *name,char *area,char *city,int pinno,int dd,int mm,int yy):peraddress(area,city,pinno),bday(dd,mm,yy)
			{
				strcpy(this->name,name);
				cout<<"inside parametrize ctor of person"<<endl;
			}
			
			
			void print()
			{
				cout<<"name::"<<this->name<<endl;
				cout<<"peraddress::";
				this->peraddress.print();
		 		cout<<"bday::";
				this->bday.print();
			//	cout<<"inside print method of person"<<	endl;
						
			}
	
			~person()
			{
				strcpy(this->name,"  ");
				cout<<"inside dtor of person"<<endl;
			}
	};	
	
	class empolyee: public person
	{
		private:
			int empno; 
			char designation[20];
			float sal;
		public:
			empolyee()
			{	
				this->empno=1;
				strcpy(this->designation, "s/w tester");
				this->sal=1000;
				cout<<"inside parameterless ctor of empolyee"<<endl;
			}
	

			empolyee(int empno,char *designation,float sal,char *name,char *area,char *city,int pinno,int dd,int mm,int yy): person(name,area,city,pinno,dd,mm,yy)
			{
				this->empno=empno;
				strcpy(this->designation,designation);
				this->sal=sal;
				cout<<"inside parameterize ctor of empolyee"<<endl;
			
			}
		
			void print()
			{
			
				cout<<"empno::"<<this->empno<<endl;
				cout<<"designation::"<<this->designation<<endl;
				cout<<"sal::"<<this->sal<<endl;
				person::print();
	//			cout<<"inside print method of empolyee"<<endl;
			
			}			
			
			~empolyee()
			{	
				this->empno=0;
				strcpy(this->designation, "");
				this->sal=0000;
				cout<<"inside dtor of empolyee"<<endl;
	
			}	
	};

}
using namespace Nempolyee;

int main()
{
	empolyee e1(11,"s/w developer",1000,"suraj","kk market","pune",412043,8,12,1996);
	cout<<"e1::"<<endl;
	e1.print();
	cout<<"sizeof e1::"<<sizeof(e1)<<endl;
return 0;
}




































































































