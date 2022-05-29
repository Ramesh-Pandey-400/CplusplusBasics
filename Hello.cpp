# include <iostream>
using namespace std;
int main()
{
    int num=101,rem,result,rev_num=0,i;
    while(num!=0){
        rem = num%10;
        rev_num = rev_num*10+rem;
        num = num/10;
    }   
    cout<<rev_num;

    cout<<typeid(num).name();
        cout<<typeid(rev_num).name();

    if(rev_num == num){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT PALINDROME";
    }
}