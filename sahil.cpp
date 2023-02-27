#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct cpp{
    string name1;
    string name;
    string pass;
    string pass1;
    int n=0;
};

void ragistration(vector<cpp>& cpps) {
    cpp c;
        cout<<"enter your username"<<endl;
        cin>>c.name;
        cout<<endl;
        cout<<"enter your pass"<<endl;   
        cin>>c.pass;
        cout<<endl;
        cpps.push_back(c);
}

void logging(vector<cpp>& cpps) {
    cpp c;
        cout<<"enter your username"<<endl;
        cin>>c.name1;
        cout<<endl;
    if (c.name1==c.name){
        cout<<"enter your pass"<<endl;   
        cin>>c.pass;
        cout<<"please re-enter your password"<<endl;
        cin>>c.pass1;
    if(c.name1==c.name){
           cout<<"your data"<<endl;
        }


        }
    else{
            cout<<"username not available"<<endl;
        }
        cout<<endl;
        
        cpps.push_back(c);
}



int main(){
    
    vector<cpp> cpps;
    int choice;
    do {
        cout<<"1 ragistration"<<endl<<"2 logging"<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
             ragistration(cpps);
                break;
            case 2:
                logging(cpps);
                break;
          
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 3);
    return 0;
 


}
