#include <iostream>
int main (){
   std::string  questions[]={"1. what year was C++ created:",
                           "2. who invented C++?:",
                           "3. what is the predecessor of C++?:",
                           "4. is the earth flat?:"};
   std::string options[][4]={{"A. 1969","B. 1975","C. 1985","D. 1989"},
                        {"A. Guido van rossum "/*creator of python*/,"B. Bjarne Stroustrup","C. John Carnack","D. mark Zuckerburg"},
                        {"A. C","B. C+","C. C--","D. B++"},
                        {"A. yes","B. no","C. sometimes","D. what's earth"}};
   char answerkey[]={'C','B','A','B'}; 
   int size=sizeof(questions)/sizeof(questions[0]);
   char guess;
   int score;
   int i;
   for (int i=0;i<size;i++){
      std::cout<< "***********************" <<'\n';
      std::cout<< questions[i] <<'\n';
      std::cout<< "***********************" <<'\n';
   for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
      std::cout <<options[i][j] <<'\n';
   }
  std::cin >> guess;
  guess =toupper(guess);
  if(guess==answerkey[i]){
     std::cout <<"CORRECT!" <<'\n';
     score++;
   }
   else {
      std::cout <<"WRONG!\n";
      std::cout <<answerkey[i];
   }
  }
   std::cout << "your final score is :" <<score;
  return 0;
}