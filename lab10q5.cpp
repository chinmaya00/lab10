#include<iostream>
using namespace std;
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
      void Create(char *x,int a,int b,int c){
      this-> name = x;
      };
   }; 
 void ZooAnimal::Destroy ()
   {	
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
   // -------- member function to return the number of days
   // -------- since the animal was last weighed
int ZooAnimal::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
//** Edits on Nov 7, 2017
    //thisday = today/100*30 + today - today/100*100;
    //startday = weightDate/100*30 + weightDate - weightDate/100*100;
    //if (thisday < startday) 
        //thisday += 360;
    //return (thisday-startday);

if (today < weightDate) 
        today += 360;
      return (today-weightDate);
   }
int main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName () << endl;
return 0;
   }

