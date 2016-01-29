struct MyException : public exception {
    const char* what() const throw() {
        return "n and p should be non-negative";
    }  
};
class Calculator {
    public :
    Calculator(){}
    
    int power(int n, int p){
        if(p<0 || n <0 ){
            throw MyException();
        }
        return pow(n,p);
    }
};
 
