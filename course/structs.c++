#include <iostream>
struct student 
{
   std::string name ;
   double gpa;
   bool enrolled ;
};
int main(){
   student student1;
   student1.name="bilal";
   student1.gpa =3.2;
   student1.enrolled =1;
   student student3;
   student3.name="amine ";
   student3.gpa =1.5;
   student3.enrolled =0;
   student student2;
   student2.name="med";
   student2.gpa =2.3;
   student2.enrolled =1;
   std::cout <<student1.name <<'\n';
   std::cout <<student1.gpa <<'\n';
   std::cout <<student1.enrolled <<'\n';
   std::cout <<student2.name <<'\n';
   std::cout <<student2.gpa <<'\n';
   std::cout <<student2.enrolled <<'\n';
   std::cout <<student3.name <<'\n';
   std::cout <<student3.gpa <<'\n';
   std::cout <<student3.enrolled <<'\n';


}
