#include <iostream>
using namespace std;

void feilds(){
    
int i = 5;

while (true){
    i--;

    string user_name;
    user_name = "saad";

    string password ;
    password = "admin123";

    string  input_username ;
    string input_password;

    cout <<"\nEnter here username: ";
    cin>>input_username;

    cout<<"Enter here password: ";
    cin>>input_password;

    if(input_username == user_name && input_password == password){
        cout<<"Login sucsselfull";
        break;
    }
    else if(i == 0){
        cout<<"you entered multiple time wrong deatil check again 30min after \n";
        break;
    }
    else if(i < 3){
        cout<<"\nyou entered three time worng deatils you have "<<i <<" more time left\n";

    }                  
    else{
        cout<<"Login feild try again\n";

    }

}
}

int main(){

    feilds();

return 0;

}