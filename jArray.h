#include<iostream>
using namespace std;
int abs(int x){
    if(x<0) return -x;
    else return x;
}
struct sample {
    int uu, vv;
};

int abstract(int a, int b){
   if(a%b==0) return b;
   int n=a%b;
   if(b%n==0) return n;
   else return abstract(b,n);
}

void simplify(sample& r1) {
    int s1 = abstract(abs(r1.uu), r1.vv);
    r1.uu = r1.uu/s1;
    r1.vv = r1.vv/s1;
    if(r1.vv < 0) {
         r1.uu= -r1.uu;
         r1.vv= -r1.vv;
    }
}

sample operation1(sample j1, sample k1) {
    sample l1;
    l1.uu = j1.uu*k1.vv + k1.uu*j1.vv;
    l1.vv = j1.vv*k1.vv;
    simplify(l1); 
    return l1;
}

sample operation2(sample j1, sample k1) {
    sample l1;
    l1.uu = j1.uu*k1.uu;
    l1.vv = j1.vv*k1.vv;
    simplify(l1);
    return l1;
}

int main(){
    sample num1, num2;
    num1.uu=6;
    num1.vv=14;
    num2.uu=4;
    num2.vv=18;
    simplify(num1);
    simplify(num2);
    int output1=operation2(num1,num2).uu;
    int output2=operation2(num1,num2).vv;
    int output3=operation1(num1,num2).uu;
    int output4=operation1(num1,num2).vv;
    cout<<output1+output2;
    cout<<endl<<output3+output4;
    return 0;
}
