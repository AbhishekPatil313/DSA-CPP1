  #include<iostream>
  using namespace std;
  
  
  
  
  long long Gcd (long long a , long long b){
      long long res = min(a,b);
      while(res>0){
          if(a%res == 0 && b%res==0){
              break;
          }
          res--;
      }
      return res;
  }
  
  long long gcd (long a , long b){
      if (b==0)return a;
      else return gcd(b,a%b);
  }
      int main(){
        int a , b;
      cout << "Enter the elements to find the gcd:";
      cin >> a >> b;
      int ans = gcd(a,b);
      cout << "gcd of " << a << " and " << b << " is " << " : " << ans <<endl;                            //hcf
      cout << "lcm of " << a << " and " << b << " is " << " : " << (a*b)/ans <<endl;
      return 0;
       }