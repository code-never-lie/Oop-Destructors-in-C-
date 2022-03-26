Destructors
- Special Function 
- Implicit Call on object expiry
- NO Return Type
- Same name as class prefixed with ~
- Normally used for expiry time tasks
- Can not be overloaded  and should have   no parameters


#include <iostream.h>
#include <string.h>
class Student {
public :
     Student (){
       cout<<"Student object Created\n";
     }

  ~Student (){
       cout<<"Student object Expired\n";
     }

};
void main () {
Student st;
if (1){
   Student st2;
   cout<<"End of If\n";
 }
cout<<"end of main \n";
}.........................................
                Constructor Overloading
#include <iostream.h>
#include <string.h>
class Student {
private:
      int id;
      char name[20];
public :
     Student (){
      id=0;
      strcpy(name,"unknown");
       cout<<name <<" object Created\n";
     }
    Student(int d, char n[]){
     id=d;
     strcpy(name,n);
     cout<<name<< " object Created with 		Parameter\n";
    }
 ~Student (){ cout<<name <<" object Expired\n";}
void print() {
  cout<<id<<endl;
  cout<<name<<endl;
}

};
void main () {
Student st1(10,"Imran");
 if (1){
       Student st2(10,"Farooq");
       cout<<"end of if block \n";
      }
cout<<"end of main block \n";

}
...............................................
A Student will Store his information on disk 
before expiry

#include <iostream.h>
#include <string.h>
#include <fstream.h>
class Student {
private:
      int id;
      char name[20];
public :
     Student (){
      id=0;
      strcpy(name,"unknown");
       cout<<name <<" object Created\n";
     }
    Student(int d, char n[]){
     id=d;
     strcpy(name,n);
cout<<name<< " object Created with Param\n";
    }
 ~Student (){
   char fname[60];
   strcpy(fname,"c:\\temp\\");
   strcat(fname,name);
   strcat(fname,".txt"); 
   ofstream file(fname,ios::out);
   file<<id;
   file<<" ";
   file<<name;
   file.close();
	cout<<name <<" object Expired\n";}
void print() {
  cout<<id<<endl;
  cout<<name<<endl;
}

};
void main () {
Student st1(10,"Imran");
 
cout<<"end of main block \n";

}
.............................................
             Static Objects

Same Student Class Above

void main () 
{
cout<<"Start of Main\n";
int i=1;
while(i<=2){
  static Student st(10,"Ahmed");
  i++;
} 
cout<<"end of main block \n";

}








