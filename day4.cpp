class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
  // Add some more code to run some checks on initial_Age
    if (initial_Age < 0){
        cout<<"This person is not valid, setting age to 0."<<endl;
        age = 0;
    }
    else age = initial_Age;

}
void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console 
    /*In amIOld(), do the following things:

If the age of the Person instance is less than 13, then print "You are young."
If the age of the Person instance is equal or greater than 13, but less 18, print "You are a teenager."
Otherwise, print "You are old."*/
    
    if(age < 13) cout<<"You are young."<<endl;
    else if (age >= 13 && age < 18) cout<<"You are a teenager."<<endl;
    else cout<<"You are old."<<endl;

}
    

void Person::yearPasses(){
  // Increment the age of the person in here
    age ++;

}
