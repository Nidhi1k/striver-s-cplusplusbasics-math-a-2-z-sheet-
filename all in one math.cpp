//all questions except find divisors and prime
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   void number_digit_count(int n){
    int m=n;
    int count =0; 
     
    while(n){
        n=n/10;
        count++;
      
    }
    
    cout<<count<<endl;
    //t: o(n),s:o(1)
    
    
    
    /////////****************
//     Use logarithm base 10 to count the number of digits. As

// The number of digits in an integer = the upper bound of log10(n).
    
    int digits = floor(log10(m) + 1);
    cout<<digits<<endl;
    //t: o(1),s:o(1)
    
    /////////****************
    
    
    
    string x = to_string(m);
    cout<< x.length(); 
    //t: o(1),s:o(1)
    
    ////////////////
    }
 
    //reverse a number 
    void reverse_number(int n)
    {
    
    
    string s =to_string(n);
    int sz=s.size()-1;//0 based indexing
    for(int i=0;i<=sz/2;i++)
    {
        swap(s[i],s[sz-i]);
    }
    cout<<s<<endl;
   int N = 1234;
    int num = N;
    int reverse = 0;
    while(N!=0)
    {
        int digit = N%10;
        reverse = reverse*10+digit;
        N = N/10;
    }
    cout<<reverse;
    
    }
    
    //check plaindrome 
    // back= forward
    void check_palindrome(int p)
    {
      int original = p;
      cout<<"number to be check_palindrome"<<" "<<p<<endl;
      int reverse=0;
       
      while(p)
      {
        int digit=p%10;
        reverse = reverse*10+digit;
        p=p/10;
        
      }
      
      if(original==reverse)
      cout<<"palindrome"<<endl;
      else
      cout<<"not palindrome"<<endl;
    }
    int gcd(int a ,int b )
    {
        //eucledian algorithm
        //gcd(a,b)=gcd(b,a%b);
        //b==0 base condition 
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    //lcm * hcf=a*b 
    //hcf and gcd are same 
    void check_armstrong(int armst)
    {
        int originalno = armst;
    int count = 0;
    int temp = armst;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (armst != 0)
    {
        int digit = armst % 10;
        sumofpower += pow(digit,count);
        armst /= 10;
    }
    if (sumofpower == originalno)
    cout<<originalno<<" is armstrong"<<endl;
    else
      cout<<originalno<<" is not armstrong"<<endl;
    }
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<"digit count is "<<endl;
    cout<<"time complexity is improving"<<endl;
    number_digit_count(n);
    cout<<endl;
    int k;cin>>k;
    cout<<"given number -> " <<k<<endl<<"reverse number"<<endl;
    reverse_number(k);
    cout<<endl;
     cout<<"output by other method without using strings "<<endl;
     int p;cin>>p;
    check_palindrome(p); 
    cout<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"gcd of a and b"<<" "<<gcd(a,b);
    cout<<endl;
    int armst;
    cin>>armst;
    check_armstrong(armst);
    cout<<endl;
    
    
    
    return 0;
}
