
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    /* int a, b, c;
    cout<< "Enter first number:" <<endl;
    cin>>a;
    cout<< "Enter second number:" <<endl;
    cin>>b;
    cout<< "Enter third number:" <<endl;
    cin>> c;
    cout<< "The result of average is equal to " << (a+b+c)/3 <<endl;
    cout<< "The result of product is equal to " << (a*b*c) <<endl;
    float base, height;
    cout<< "Enter base of triangle:" << endl;
    cin>> base;
    cout<< "Enter height of triangle:" << endl;
    cin>> height;
    cout << "The area of triangle is " << (base*height/2) << endl;
    int x;
    cin>> x;
    switch (x){
        case 1:
            cout<< "Monday"<< endl;
            break;
        case 2:
            cout<< "Tuesday"<< endl;
            break;
        case 3:
            cout<< "Wednesday"<< endl;
            break;
        case 4:
            cout<< "Thursday"<< endl;
            break;
        case 5:
            cout<< "Friday"<< endl;
            break;
        case 6:
            cout<< "Saturday"<< endl;
            break;
        case 7:
            cout<< "Sunday"<< endl;
            break;
        default:
            cout<< "no such weekday"<< endl;

    }
    int x;
    int y;
    int futureday;
    cout<< "Enter todays date" << endl;
    cin>> x;
    cout<< "Enter number of days elapsed since today"<<endl;
    cin>>y;
    switch (x){
        case 0:
            cout<< "Today is Sunday" << endl;
            break;
        case 1:
            cout<< "Today is Monday"<< endl;
            break;
        case 2:
            cout<< "Today is Tuesday"<< endl;
            break;
        case 3:
            cout<< "Today is Wednesday"<< endl;
            break;
        case 4:
            cout<< "Today is Thursday"<< endl;
            break;
        case 5:
            cout<< " Today is Friday"<< endl;
            break;
        case 6:
            cout<< " Today is Saturday"<< endl;
            break;
        default:
            cout<< "Not week day" <<endl;
    }
    futureday=(x+y)%7;
    switch (futureday){
        case 0:
            cout << "and the future day is sunday"<<endl;
            break;
        case 1:
            cout << "and the future day is monday"<< endl;
            break;
        case 2:
            cout << "and the future day is tuesday"<<endl;
            break;
        case 3:
            cout << "and the future day is wednesday" << endl;
            break;
        case 4:
            cout << "and the future day is thursday"<< endl;
            break;
        case 5:
            cout << "and the future day is friday"<<endl;
            break;
        case 6:
            cout << "and the future day is saturday"<<endl;
            break;
        default:
            cout<< "not appropriate"<<endl;
    }
    int grade;
    cin>> grade;
    if (grade<=0 && grade<=100) {
        switch (grade / 10) {
            case 10:
            case 9:
                cout << "A" << endl;
                break;
            case 8:
                cout << "B" << endl;
                break;
            case 7:
                cout << "C" << endl;
                break;
            case 6:
                cout << "D" << endl;
                break;
            default:
                cout << "F" << endl;
        }
    }
    int num;
    cin>>num;
    switch (num>0){
        case 1:
            cout<<"Positive"<<endl;
            break;
        case 0:
            switch (num==0) {
                case 1:
                    cout<<"Zero"<<endl;
                    break;
                case 0:
                    cout<<"Negative"<<endl;

            }


    }
    char greet;
    cin>> greet;
    switch(greet){
        case 'u':
            cout<< "Assalomu aleykum"<<endl;
            break;
        case 'e':
            cout<< "Hello"<<endl;
            break;
        case 'r':
            cout<< "привет"<<endl;
            break;
        case 'g':
            cout<< "Hallo"<<endl;
            break;
        default:
            cout<<"my lang barriers, sorry"<<endl;
    }
    float weeks;
    cin>>weeks;
    if (weeks>0){
        if (weeks>0 && weeks<=1){
            cout<<"3500"<<endl;
        }
        else if (weeks>1 && weeks<=3){
            cout <<"5500"<<endl;
        }
        else if (weeks>3 && weeks<=10){
            cout<<"8550"<<endl;
        }
        else if (weeks>10 && weeks<=20){
            cout<<"10500"<<endl;
        }
        else{
            cout<<"the package can't be shipped"<<endl;
        }

    }
    else{
        cout<< "it cant be negative"<<endl;
    }
    int num;
    cin>> num;
    switch (num){
        case 1:
            cout<< "one"<<endl;
            break;
        case 2:
            cout<< "one"<<endl;
            break;
        case 3:
            cout<< "three"<<endl;
            break;
        case 4:
            cout<< "four"<<endl;
            break;
        case 5:
            cout<< "five"<<endl;
            break;
        case 6:
            cout<< "six"<<endl;
            break;
        case 7:
            cout<< "seven"<<endl;
            break;
        case 8:
            cout<< "eight"<<endl;
            break;
        case 9:
            cout<< "nine"<<endl;
            break;
        case 0:
            cout<< "zero"<<endl;
        default:
            cout<< "not a digit"<<endl;
    }
    int holiday;
    cin>> holiday;
    switch (holiday){
        case 1:
            cout<< "in january there is\n -new year \n - day of soldiers"<<endl;
            break;
        case 3:
            cout<<"In March there is:\n"
                  "– International Women’s Day, 8\n"
                  "March\n"
                  "– Navruz, 21 March"<<endl;
            break;
        case 5:
            cout<<"day of memory in may"<<endl;
            break;
        case 9:
            cout<<"in september there is independence day"<<endl;
            break;
        case 12:
            cout<<"in december there's constitution day" <<endl;
            break;
        default:
            cout<<"In February, April,\n"
                  "June, July, August, November\n"
                  "there is no holidays. There\n"
                  "are Ramadan Hayit and Kurban\n"
                  "Hayit but their dates change." <<endl;
    }
    srand(time(0));
    int numb=rand();
    cout<<numb<<endl;
    char x;
    cin>>x;
    if (numb%2==0 && x=='e'){
        cout << "correct"<<endl;
    }
    else if (numb%2==1 && x=='e'){
        cout << "incorrect"<<endl;
    }
    else if (numb%2==1 && x=='o'){
        cout << "correct"<<endl;
    }
    else if (numb%2==0 && x=='o'){
        cout << "incorrect"<<endl;
    }
    else{
        cout<<"enter right character"<<endl;
    }
    srand(time(0));
    int n=1+(rand()%(13-1+1));
    int b=1+(rand()%(4-1+1));
    switch (b){
        case 1:
            cout<<"Clubs of"<<endl;
            break;
        case 2:
            cout<<"diamonds of"<<endl;
            break;
        case 3:
            cout<<"hearts of"<<endl;
            break;
        case 4:
            cout<<"spades of"<<endl;
            break;
    }
    switch (n){
        case 1:
            cout<<"Ace"<<endl;
            break;
        case 2:
            cout<<"2"<<endl;
            break;
        case 3:
            cout<<"3"<<endl;
            break;
        case 4:
            cout<<"4"<<endl;
            break;
        case 5:
            cout<<"5"<<endl;
            break;
        case 6:
            cout<<"6"<<endl;
            break;
        case 7:
            cout<<"7"<<endl;
            break;
        case 8:
            cout<<"8"<<endl;
            break;
        case 9:
            cout<<"9"<<endl;
            break;
        case 10:
            cout<<"jack"<<endl;
            break;
        case 11:
            cout<<"queen"<<endl;
            break;
        case 12:
            cout<<"queen"<<endl;
            break;
        case 13:
            cout<<"king"<<endl;
            break; */





    }




    return 0;

}
