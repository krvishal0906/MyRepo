#include<iostream>
#include<string>
 using namespace::std;
 
 class student
 {
   string name;
 //	char name[15];
 	int roll;
 	int marks;
 	string course;
 	
 	public:

    void getnm()
    {
    	cout<<"Enter the name of student: ";
    //	gets(name);
   //cin>>name; 
   getline(cin,name);
    	cout<<"Name is inserted\n";
	}
		void getroll()
		{
			cout<<"Enter the roll of student: ";
			cin>>roll;
			cout<<"Roll is inserted\n";
		 } 
		void getcourse()
		{  
		    cout<<"Enter the course name: ";
		   // gets(course);
		//	cin>>course;
		getline(cin,course);
		 } 
		void getmarks()
		{ 
				cout<<"Marks in subject : ";
				cin>>marks;			
		 } 
 
         void showname()
		 {
		 	cout<<"\nStudent's Name:- "<<name;
			 cout<<endl;
		 	
				  }
		void showroll()
	{
		cout<<"\nStudent's Roll:- "<<roll<<"\t\t\t";
	}
	    void showcourse()
	    {
	    	cout<<"Course:- "<<course;
		}
		void showmarks()
		{
		cout<<"\nTotal marks is: "<<marks<<endl;
		}
 };
     
	 int main()
	 {    int i,l,ch,j,k=0;
	 char key;
	   cout<<"Enter number of students: ";
	    cin>>l;
	  do {
	       cout<<"Choose any one: \n\t1.INPUT\n\t2.OUTPUT\n\t3.EXIT "<<endl;
	 	cin>>ch;
	    
	 	student stu[l];
	 	
	 	switch(ch)
	 	{
		 case 1:
		 for(i=0;i<l;i++)
	 	{
	 	stu[i].getroll();
	 	stu[i].getnm();
	 	stu[i].getcourse();
	 
	 	stu[i].getmarks();
	   }
	   
	 break;
	 case 2:
	 	cout<<"All Student's detail: \n"<<endl;
	 	for(j=0;j<l;j++)
	 	{
	 		stu[j].showroll();
	 		stu[j].showcourse();
	 		stu[j].showname();
	 		stu[j].showmarks();
	 		for(i=0;i<50;i++)
	 		cout<<"*";
	 		cout<<endl;
		 }
		 break;
		 case 3:
			exit(1);
		}
		cout<<"Do you want to go options? enter y for yes and n for no: ";
		
	    cin>>key;
	   
}while(key!='n');
   return 0;
 }
