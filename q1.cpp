/*write a c++ program to take a positive integer n as input and :
(i)check whether n is a prime no. 
(ii)if it is not prime,find all its factors.
(iii)if it is prime , find the next prime number greater than n.
*/
#include<iostream>
using namespace std;
int is_prime(int n);
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    if (is_prime(n))
    {
        cout<<"n is a prime no. \nnext prime no. is";
        n++;
        int j;
        while(1)
        {
            if(!is_prime(n))
            {
            n++;
            }
            else
            {
                break;
            }
        }
        cout<<n;
    }
    else
    {
        int i;
        cout<<"factors of n is/are :";
        for(i=1 ; i<n ; i++)
        {
            if(n%i == 0)
            {
                cout<<"\n"<<i;
            }
        }
    }
    
}

int is_prime(int n)
{
    int i;
    for(i=2 ; i<n/2 ; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}