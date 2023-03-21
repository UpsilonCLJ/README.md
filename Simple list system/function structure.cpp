#include <iostream>
#include <vector>
using namespace std;

void print_number(const vector <int>) ;
void add_number(vector <int> &);
void mean_of_number(const vector <int> &);
void smallest(const vector <int> &);
void largest(const vector <int> &);
int main()
{
    char choice;
    static vector <int> list_choice = {};
    
    do{
        cout << "P - print numbers \n" << "A - add a number \n" << "M - display mean of the numbers \n" 
             << "S - display the smallest number \n" << "L - display the largest number \n" << "Q - quit" << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch(choice){
            case 'P' :
            case 'p' :
            {
                print_number(list_choice);
                break;
            }
            case 'A' :
            case 'a' :
            {
                add_number(list_choice);
                break;
            }
            case 'M' :
            case 'm' :
            {
                mean_of_number(list_choice);
                break;
            }
            case 'S' :
            case 's' :
            {
                smallest(list_choice);
                break;
            }
            case 'L' :
            case 'l' :
            {
                largest(list_choice);
                break;
            }
            case 'Q' :
            case 'q' :
            {
                cout << "Good Bye..." << endl;
                return 0;
            }
            default :
                cout << "Error input" << endl;
                cout << endl;
                break;
        }
    }while(choice);
    return 0;
}
void print_number(const vector <int> list_choice){
    if(list_choice.size() == 0){
        cout << "[] - the list is empty" << endl;
    }else{
        cout << "[ ";
        for(auto val: list_choice){
            cout << val << ' ';
        }
        cout << "]" << endl;
    }
    cout << endl;
}
void add_number(vector <int> &list_choice){
    int num;
    cout << "Enter an integer to add to the list : ";
    cin >> num;
    list_choice.push_back(num);
    cout << num << " added" << endl;
    cout << endl;
}
void mean_of_number(const vector <int> &list_choice){
    if(list_choice.size() == 0){
        cout << "Unable to calculate the mean" << endl;
    }else{
        int sum = 0;
        for(auto val: list_choice){
            sum += val;
        }
        cout << "The average of the list is " << static_cast <double> (sum)/list_choice.size() << endl;
    }
    cout << endl;
}
void smallest(const vector <int> &list_choice){
    if(list_choice.size() == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }else{
        int small = list_choice.at(0);
        for(size_t i = 1; i < list_choice.size(); i++){  //for(auto val: list_choice)
            if(list_choice.at(i) < small){               //    if(val < small)
                small = list_choice.at(i);               //        small = val;
            }
        }
        cout << "The smallest number is " << small << endl;
    }
    cout << endl;
}
void largest(const vector <int> &list_choice){
    if(list_choice.size() == 0){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }else{
        int large = list_choice.at(0);
        for(size_t i = 1; i < list_choice.size(); i++){
            if(large < list_choice.at(i)){
                large = list_choice.at(i);
            }
        }
        cout << "The largest number is " << large << endl;
    }
    cout << endl;
}
