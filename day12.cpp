class Grade :  public Student{
    private:
         int score; 
    public: 
     Grade(string fname,string lname,int phone,int score): Student(fname,lname,phone){
        this->score = score;
    }
    
     char calculate (){ 
         char ch;   
         if(score < 40 ){
            return 'D';
        }
        else if(this->score >= 40 && this->score < 60){
            return 'B';
        }
        else if(this->score >=60 && this->score < 75){
            return 'A';
        }
        else if(this->score >=75 && this->score < 90){
            return 'E';
        }
        else if(this->score >=90 && this->score <= 100){
            return 'O';
        }
        return ch;
    }
};
