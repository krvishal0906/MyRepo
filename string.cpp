#include<iostream>
#include<string>
using namespace::std;
class first
 {
 	string name;
 	string password;
   public:
   void getnm()
 	{
 		cout<<"Enter name ";
 	//	cin>>name;
 	   getline(cin,name);
	 	cout<<"Name is inserted ";
	 }
	 void getpw()
	 {
	 	cout<<"Enter password ";
	 	getline(cin,password);
	 	cout<<"  Password is inserted\n";
	 }
	 void checkpw(string p)
	 {
	 	if(p==password)
	 	cout<<"\nCORRECT ";
	 	else
	 	cout<<"\n INCORRECT ";
	 }
	 void shownm()
	 {
	 	cout<<"\n My name is "<<name;
	 }
 };
    int main()
  {
      first f;
      f.getnm();
      f.shownm();
      string p1;
      f.getpw();
      cout<<"Enter to check password ";
      getline(cin,p1);
      f.checkpw(p1);

  
	return 0;
}
