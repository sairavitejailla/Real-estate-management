#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class  re
{
	
	int a;
	char firstname[30];
	char lastname[30];
	char mobile_no[15];
	char email[30];
	
	public:
	re()
	{
		cout<<"\t\t\t\t\t\t\t\t\t\t***WELCOME TO REAL ESTATE***\n";
		cout<<"You are interested in\n1.House\n2.Rented house\n3.Land\n";
		cin>>a;
	}
	
	int select()
	{
		return(a);
	}
	int details()
	
	{	
	cout<<"enter your details:\n";
		cin.ignore(1,'\n');
		cout<<"\nenter your  firstname:";
		cin.getline(firstname,30);
		cout<<"\nenter your  lastname:";
		cin.getline(lastname,30);
		cout<<"\nenter your  mobile.no:";
		cin.getline(mobile_no,15);
		cout<<"\nenter your email:";
		cin.getline(email,10);
		return 0;
		
	}
	int details_file()
	{
		int k;
		ofstream fin("details.txt",ios::app);
		fin<<"\nFirstname:"<<firstname<<endl;
		fin<<"lastname:"<<lastname<<endl;
		fin<<"mobile no:"<<mobile_no<<endl;
		fin<<"email:"<<email<<endl;
		k=fin.tellp();
		return k;
	}
	int  confirm()
	{
		int confirm;
			cout<<"Do you want to confirm your request:\npress(1)TO CONFIRM (2)TO CANCEL\n";
		cin>>confirm;
	
		if(confirm==1)
		{
			cout<<"Your request for the house is confirmed.\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tFor any queries contact:733709*****\n\t\t\t\t\t\t\t\t\t\t\tTHANKYOU";
			return 0;
		}
		else if(confirm==2)
		{
			cout<<"your request has been cancelled.\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tFor any queries contact:7337091778\n\t\t\t\t\t\t\t\t\t\t\tTHANKYOU";
			
			return 1;
		}
		else
		{
			cout<<"INVALID INPUT";
			return 1;
		}
	
	}
	
};
class house{
	private:
	char range[30];
	char name[10];
	char cost[30];
	char sqft[30];
	char type[30];
	char locality[30];
	char area[30];
	public:
	void show()
	{
		//cout<<name<<endl<<cost<<endl<<sqft<<type<<endl<<locality<<endl<<area<<endl;
		cout<<" House:"<<name<<endl<<"  cost:"<<cost<<endl<<"  area:"<<sqft<<endl<<"  type:"<<type<<endl<<"  locality:"<<locality<<endl<<"  place:"<<area<<endl;
	}
	void intofile()
	{
		
		ofstream fin("details.txt",ios::out|ios::app);
		
		fin<<"\ndetails of house:";
		fin<<"house:"<<name<<endl;
		fin<<"cost:"<<cost<<endl;
		fin<<"sqft:"<<sqft<<endl;
		fin<<"type:"<<type<<endl;
		fin<<"locality:"<<locality<<endl;
		fin<<"area:"<<area<<endl;
	}
	void get(char *r,char *a,char *b,char *s,char *c,char *d,char *e)
	{
		strcpy(range,r);
		strcpy(name,a);
		strcpy(cost,b);
		strcpy(sqft,s);
		strcpy(type,c);
		strcpy(locality,d);
		strcpy(area,e);
	}
	int check(char *a,char *b,int x)
	{
		char *r;
		if(x==1)
		r="1";
		else if(x==2)
		r="2";
		else if(x==3)
		r="3";
		else if(x==4)
		r="4";
		else if(x==5)
		r="5";
		if(strcmp(area,a)==0&&strcmp(locality,b)==0&&strcmp(range,r)==0)
		{
			static int y=0;
			if(y==0)
			{
				cout<<"Available houses are:\n";
			}
			++y;
			cout<<y<<".";
			show();
			return 0; 
		}
	}
	
};
class l{
	char n[30];
	char a[30];
	char b[30];
	char c[30];
	char d[30];
	public:
		void show()
		{
				cout<<" \nplot:"<<a<<endl<<"  cost"<<b<<endl<<"  location:"<<c<<endl<<"  place:"<<d<<endl;
		}
		void getl(char *x,char *y,char *z,char *w,char *w1)
		{
			strcpy(n,x);
			strcpy(a,y);
			strcpy(b,z);
			strcpy(c,w);
			strcpy(d,w1);
		}
		int checkl(char *x,int r1)
		{
			char *e2;
			if(r1==1)
			e2="1";
			else if(r1==2)
			e2="2";
			else if(r1==3)
			e2="3";
			//int p,q,o;
			//p=strcmp(x,d);
			//o=strcmp(n,e2);
			//cout<<a<<p<<q<<o<<endl;
			
			if(strcmp(x,d)==0&&strcmp(n,e2)==0)
			{
					static int y=0;
			if(y==0)
			{
				cout<<"Available plots are:\n";
			}
			++y;
			cout<<y<<".";
			show();
				return 0;
			}
		}
	void intofilerh()
	{
		
		ofstream getrh("details.txt",ios::out|ios::app);
		
		getrh<<"\ndetails of land:";
		getrh<<"plot:"<<a<<endl;
		getrh<<"cost:"<<b<<endl;
		getrh<<"location:"<<c<<endl;
		getrh<<"place:"<<d<<endl;
		
	}
			
		
};
class rh{
	char n[30];
	char a[30];
	char b[30];
	char c[30];
	char d[30];
	char e[30];
	public:
		void show()
		{
				cout<<" Rented House:"<<a<<endl<< "  rent:"<<b<<endl<<"  type:"<<c<<endl<<"  locality:"<<d<<endl<<"  place:"<<e<<endl;
		}
		void getrh(char *x,char *y,char *z,char *w,char *w1,char *w2)
		{
			strcpy(n,x);
			strcpy(a,y);
			strcpy(b,z);
			strcpy(c,w);
			strcpy(d,w1);
			strcpy(e,w2);
		}
		int checkrh(char *x,char *y,int r)
		{
			char *e1;
			if(r==1)
			e1="1";
			else if(r==2)
			e1="2";
			else if(r==3)
			e1="3";
			//int p,q,o;
			//p=strcmp(x,d);
			//q=strcmp(y,e);
			//o=strcmp(n,e1);
			//cout<<a<<p<<q<<o<<endl;
			
			if(strcmp(x,d)==0&&strcmp(y,e)==0&&strcmp(n,e1)==0)
			{
					static int y=0;
			if(y==0)
			{
				cout<<"Available rented houses are:\n";
			}
			++y;
			cout<<y<<".";
		
				show();
				return 0;
			}
		}
	void intofilerh()
	{
		
		ofstream getrh("details.txt",ios::out|ios::app);
		
		getrh<<"\ndetails of rented house:";
		getrh<<"rented house:"<<a<<endl;
		getrh<<"rent:"<<b<<endl;
		getrh<<"locality:"<<d<<endl;
		getrh<<"area:"<<e<<endl;
		
	}
			
		
};

int main()
{	int k;
	re start;
	if(start.select()==1)
	{
		int t;
	char  range[10];
	char name[10];
	char cost[30];
	char sqft[30];
	char type[30];
	char locality[30];
	char area[30];
	int i=0,n,m[10],j,o,select,confirm,invalid=0,nonavailable=1;
		house one[300];
			ifstream fin("newhouse.txt");
			while(fin)
			{
				fin.getline(range,10);
				fin.getline(name,30);	
				fin.getline(cost,30);
				fin.getline(sqft,30);
				fin.getline(type,30);
				fin.getline(locality,30);
				fin.getline(area,30);
				one[i].get(range,name,cost,sqft,type,locality,area);
			//	cout<<range<<ends<<name<<ends<<cost<<ends<<sqft<<ends<<type<<ends<<locality<<ends<<area<<endl;
			++i;
			}
		n=i;
			//cout<<n;
			int r;
			char a[30];
			char l[30];
		    cout<<"\nselect the range of your budget:\n1.<25 lac\t2.25-50 lac\t3.50-75 lac\t4.75lac-1cr\t5.1cr+\n";
			cin>>r;
			if(r!=1&&r!=2&&r!=3&&r!=4&&r!=5)
			{
				cout<<"\nINVALID INPUT";
				exit(0);
				
			}
	goto1:	cout<<"\nenter the locality you wish:\navailable in:\nmodaltown/bypass road/jalandhar cantt-(jalandhar)\na nagar/b nagar/c nagar-(phagwara\nd nagar/e nagar/f nagar-(ludhiana)\n";
		cin.ignore(1,'\n');
			cin.getline(l,30);
			if(strcmp(l,"modaltown")!=0&&strcmp(l,"bypass road")!=0&&strcmp(l,"jalandhar cantt")!=0&&strcmp(l,"a nagar")!=0&&strcmp(l,"b nagar")!=0&&strcmp(l,"c nagar")!=0&&strcmp(l,"d nagar")!=0&&strcmp(l,"e nagar")!=0&&strcmp(l,"f nagar")!=0)
			{
				cout<<"\nINVALID INPUT";
				goto goto1;
				exit(0);
			}
		cout<<"enter the area you wish:";
		cin>>a;
		if(strcmp(a,"ludhiana")!=0&&strcmp(a,"jalandhar")!=0&&strcmp(a,"phagwara")!=0)
		{
			cout<<"\nINVALID INPUT";
				exit(0);
		}
		for(i=0;i<n;i++)
		{
			m[j]=one[i].check(a,l,r);
			if(m[j]==0)
			{
				m[j]=i;
				//cout<<m[j];
				nonavailable=1;
				++j;
			}
			
		}
		if(nonavailable=0)
		{
			cout<<"\nNo houses are available in your requested area or locality\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tFor any queries contact:733709****\n\t\t\t\t\t\t\t\t\t\t\tTHANKYOU";
			exit(0);
		}
		
		cout<<"\nselect the house you want:";
		cin>>select;
		cout<<"you have selected:\n";
		one[m[select-1]].show();
		start.details();
		t=start.confirm();
		{
			if(t==0)
			{
				start.details_file();
				one[m[select-1]].intofile();
			}
		}
		}
		 if(start.select()==2)
		{
			int i=0,j=0,m,sel,t,nonavailable=0;
			char n[30];
			char a[30];
			char b[30];
			char c[30];
			char d[30];
			char e[30];
			rh two[100];
			ifstream getrh("rent1.txt");
			while(getrh)
			{
			getrh.getline(n,30);
			getrh.getline(a,30);
			getrh.getline(b,30);
			getrh.getline(c,30);
			getrh.getline(d,30);
			getrh.getline(e,30);
			//cout<<n<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
			two[i].getrh(n,a,b,c,d,e);
			++i;
			}
			m=i;
			cout<<m;
			//for(i=0;i<m;i++)
			//{
			//	two[i].show();
			//}
			char d1[30],e1[30];
			int r,k[10],g=1;
			 cout<<"\nselect the range of your budget:\n1.<Rs10000\t2.RS10000-15000\t3.Rs15000+\t\n";
			cin>>r;
			if(r!=1&&r!=2&&r!=3)
			{
				cout<<"\nINVALID INPUT";
				exit(0);
				
			}
		cout<<"\nenter the locality you wish:\navailable in:\nmodaltown/bypass road/jalandhar cantt-(jalandhar)\na nagar/b nagar/c nagar-(phagwara\nd nagar/e nagar/f nagar-(ludhiana)\n";
		cin.ignore(1,'\n');
			cin.getline(d1,30);
			if(strcmp(d1,"modaltown")!=0&&strcmp(d1,"bypass road")!=0&&strcmp(d1,"jalandhar cantt")!=0&&strcmp(d1,"a nagar")!=0&&strcmp(d1,"b nagar")!=0&&strcmp(d1,"c nagar")!=0&&strcmp(d1,"d nagar")!=0&&strcmp(d1,"e nagar")!=0&&strcmp(d1,"f nagar")!=0)
			{
				cout<<"\nINVALID INPUT";
				exit(0);
			}
		cout<<"enter the area you wish:";
		cin>>e1;
		if(strcmp(e1,"ludhiana")!=0&&strcmp(e1,"jalandhar")!=0&&strcmp(e1,"phagwara")!=0)
		{
			cout<<"\nINVALID INPUT";
				exit(0);
		}
			for(i=0;i<m-1;i++)
			{
				g=two[i].checkrh(d1,e1,r);
				if(g==0)
				{
					k[j]=i;
					++j;
					nonavailable=1;
				}
			}
		if(nonavailable==0)
		{
			cout<<"\nNo houses are available in your requested area or locality\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tFor any queries contact:733709*****\n\t\t\t\t\t\t\t\t\t\t\tTHANKYOU";
			exit(0);
		}
		cout<<"\nselect the available rented house:";
			cin>>sel;
			cout<<"\nyou have selected:\n";
			two[k[sel-1]].show();
			start.details();
			t=start.confirm();
			if(t==0)
			{
				start.details_file();
				two[k[sel-1]].intofilerh();
			}
		}
		 if(start.select()==3)
		{
			int i1=0,j1=0,m1,sel1,t1,nonavailable=0;
			char n1[30];
			char a1[30];
			char b1[30];
			char c1[30];
			char d1[30];
			char e1[30];
			l three[20];
			ifstream getl("land.txt");
			while(getl)
			{
			getl.getline(n1,30);
			getl.getline(a1,30);
			getl.getline(b1,30);
			getl.getline(c1,30);
			getl.getline(d1,30);
		//	cout<<n1<<endl<<a1<<endl<<b1<<endl<<c1<<endl<<d1<<endl;
			three[i1].getl(n1,a1,b1,c1,d1);
			++i1;
			}
			m1=i1;
		//	cout<<m1;
			//for(i1=0;i1<m1;i1++)
		//	{
		//		three[i1].show();
		//	}
			char d2[20],e2[20];
			int r1,k1[10],g1;
			 cout<<"\nselect the range of your budget:\n1.Rs25-50lacs\t2.Rs50-1cr\t3.Rs1cr+\t\n";
			cin>>r1;
			if(r1!=1&&r1!=2&&r1!=3)
			{
				cout<<"\nINVALID INPUT";
				exit(0);
				
			}
	//	cout<<"\nenter the locality you wish:\navailable in:\nmodaltown/bypass road/jalandhar cantt-(jalandhar)\na nagar/b nagar/c nagar-(phagwara\nd nagar/e nagar/f nagar-(ludhiana)\n";
		cin.ignore(1,'\n');
	//		cin.getline(d1,30);
	//		if(strcmp(d1,"modaltown")!=0&&strcmp(d1,"bypass road")!=0&&strcmp(d1,"jalandhar cantt")!=0&&strcmp(d1,"a nagar")!=0&&strcmp(d1,"b nagar")!=0&&strcmp(d1,"c nagar")!=0&&strcmp(d1,"d nagar")!=0&&strcmp(d1,"e nagar")!=0&&strcmp(d1,"f nagar")!=0)
	//		{
	//			cout<<"\nINVALID INPUT";
	//			exit(0);
	//		}
		cout<<"\nenter the area you wish:(jalandhar/phagwara/ludhiana)";
		cin>>d2;
		if(strcmp(d2,"ludhiana")!=0&&strcmp(d2,"jalandhar")!=0&&strcmp(d2,"phagwara")!=0)
		{
			cout<<"\nINVALID INPUT";
				exit(0);
		}
		//	cout<<"\nenter a:";
		//	cin>>d2;
		//	cout<<"\nenter r";
		//	cin>>r1;
			for(i1=0;i1<m1-1;i1++)
			{
				g1=three[i1].checkl(d2,r1);
				if(g1==0)
				{
					k1[j1]=i1;
					++j1;
					nonavailable=1;
				}
			}
			cout<<"\n select the land you want:";
			cin>>sel1;
			cout<<"\nyou have selected:";
			three[k1[sel1-1]].show();
			start.details();
			t1=start.confirm();
			if(t1==0)
			{
				start.details_file();
				three[k1[sel1-1]].intofilerh();
			}
		}

}
