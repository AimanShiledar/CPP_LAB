#include<iostream>
#include<fstream>
using namespace std;

struct Employee{
    char name[50];
    int id;
    float salary;
};

void writeToFile(const Employee& employee){
    ofstream outFile("Employee.dat");
    
    if(!outFile){
        cerr<<"Error:could not open the file for writing!"<<endl;
        return;
    }
    outFile.write(reinterpret_cast<const char*>(&employee),sizeof(employee));
    outFile.close();
    
    cout<<"Employee daya written to binary file successfully!"<<endl;
    
}

void readFromFile(){
    Employee employee;
    ifstream inFile("employee.dat");
    if(!inFile){
        cerr<<"error:could not open the file.";
        return;
    }
    inFile.read(reinterpret_cast<char*>(&employee),sizeof(employee));
    
    if(inFile){
        cout<<"\nEmployee data read from binary file:"<<endl;
        cout<<"Name:"<<employee.name<<endl;
        cout<<"ID:"<<employee.id<<endl;
        cout<<"Salary:"<<employee.salary<<endl;
    }else{
        cerr<<"Error!could not read data from the file!"<<endl;
        
    }
    inFile.close();
}

int main(){
    Employee employee;
    
    cout<<"enter employee details:"<<endl;
    cout<<"Name:";
    cin.ignore();
    cin.getline(employee.name,50);
    cout<<"ID:";
    cin>>employee.id;
    cout<<"Salary:";
    cin>>employee.salary;
    
    writeToFile(employee);
    
    readFromFile();
    return 0;
}