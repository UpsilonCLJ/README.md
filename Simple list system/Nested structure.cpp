#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char choice;
    vector <int> list_choice = {};
    
    do{
        cout << "P - print numbers \n" << "A - add a number \n" << "M - display mean of the numbers \n" 
             << "S - display the smallest number \n" << "L - display the largest number \n" << "Q - quit" << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch(choice){
            case 'P' :
            case 'p' :
            {
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
                break;
            }
            case 'A' :
            case 'a' :
            {
                int num;
                cout << "Enter an integer to add to the list : ";
                cin >> num;
                list_choice.push_back(num);
                cout << num << " added" << endl;
                cout << endl;
                break;
            }
            case 'M' :
            case 'm' :
            {
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
                break;
            }
            case 'S' :
            case 's' :
            {
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
                break;
            }
            case 'L' :
            case 'l' :
            {
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
