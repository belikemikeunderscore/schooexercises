#include <iostream>

using namespace std;

float grades[5];
float lowest = 0;
float highest = 0;



int coolarray[10] = {1,2,3,4,5,6,7,8,9,10};
float coolestlower = 0;
float coolesthigher = 0;

int main(){#include <iostream>

using namespace std;

float grades[5];
float lowest = 0;
float highest = 0;



int coolarray[10] = {1,2,3,4,5,6,7,8,9,10};
float coolestlower = 0;
float coolesthigher = 0;

int main(){
    cout << "Input the grades of the 5 students\n";
    cin >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
    cout << "The average of the students grades are " << (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5 << endl;
    
    lowest = grades[0];
    highest = grades[0];

    for(int x = 0; x < 5; x++){
        if(grades[x] < lowest){
            lowest = grades[x];
        }
    }
    for(int y = 0; y < 5; y++){
        if(grades[y] > highest){
            highest = grades[y];
        };
    };
    cout << "The highest grade between the students is " << highest << "\n";
    cout << "The lowest grade between the students is " << lowest << "\n";


    cout << "Let's print the \"coolarray\" higher and lower values\n";
    coolestlower = coolarray[0];
    coolesthigher = coolarray[0];

    for(int i = 0; i < 10; i++){
        if(coolarray[i] < coolestlower){
            coolestlower = coolarray[i];
        };
    };



    for(int e = 0; e < 10; e++){
        if(coolarray[e] > coolesthigher){
            coolesthigher = coolarray[e];
            
        };
    };
 cout << "The highest value is " << coolesthigher << "\n";
 cout << "The lowest value is " << coolestlower << "\n";
return 0;
};

    cout << "Input the grades of the 5 students\n";
    cin >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
    cout << "The average of the students grades are " << (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5 << endl;
    
    lowest = grades[0];
    highest = grades[0];

    for(int x = 0; x < 4; x++){
        if(grades[x] < lowest){
            lowest = grades[x];
        };
    for(int y = 0; y < 4; y++){
        if(grades[y] > highest){
            highest = grades[y];
        };
    cout << "The highest grade between the students is " << highest << "\n";
    cout << "The lowest grade between the students is " << lowest << "\n";




    cout << "Let's print the \"coolarray\" higher and lower values\n";
    coolestlower = coolarray[0];
    coolesthigher = coolarray[0];

    for(int i = 0; i < 9; i++){
        if(coolarray[i] > coolestlower){

    };
    cout << "The highest value is " << coolesthigher << "\n";
    for(int e = 0; e < 9; e++){
        if(coolarray[e] > coolesthigher){
            
    };
    cout << "The lowest value is " << coolestlower << "\n";
    return 0;
    };

    //why isn't this working.
}

    }
//festa das chavetas
}
} 
