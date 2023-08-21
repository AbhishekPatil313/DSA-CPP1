//using namspace std;
class Fraction {

    int numerator , denominator;

    public :
    Fraction (){
        cout << "Default constructor called !!" << endl;
    }
    Fraction(int numerator , int denominator){
        this -> numerator = numerator ;
        this -> denominator = denominator;
    }

    void print(){
        cout << this ->numerator << "/" << this -> denominator << endl;
    }
    void simplify(){
        int minn = min(this->numerator , this->denominator);
        int gcd = 1;
        for (int i = 1 ; i <= minn ; i++){
            if (this->numerator % i==0 && this->denominator % i==0){
                gcd = i;
            }
        }
            this -> numerator = this ->numerator / gcd;
            this -> denominator = this ->denominator /gcd;
    }
    Fraction operator+(Fraction const &f2) const{
        int  lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;
        // numerator = num;
        // denominator = lcm;
        Fraction f3(num , lcm);

        f3.simplify();
     
        return f3;
    }

    Fraction operator*(Fraction &f2)const{
        int temp = numerator * f2.numerator;
        int temp2 = denominator * f2.denominator;
        Fraction f3(temp,temp2);
        f3.simplify();
        return f3;
    }

    bool operator==(Fraction const &f2) const{
        return (numerator == f2.numerator && denominator == f2.denominator);
    }

    Fraction& operator++(){
        numerator = numerator + denominator;
        simplify();
        return *this;
    }

    Fraction operator++(int){
        Fraction n(numerator , denominator);
        numerator = numerator + denominator ;
        simplify();
        n.simplify();
        return n;
    }

    Fraction& operator+=(Fraction const &f2){
        int  lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;
         numerator = num;
         denominator = lcm;
         simplify();
         return *this;
    }
    
    
    };