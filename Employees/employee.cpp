#include<employee.h> //include employee header where employee class is defined

//default constructor
Employee::Employee(){
    name="";
    password="";
    id=-1;
    salary=0;
}

//parameterized constructor
Employee::Employee(string &name, string password , int id ,float salary){
    this->name=name;
    this->password=password;
    this->id=id;
    this->salary=salary;
}

//destructor
 ~Employee(){
    //clearup memory if u inialized poiners
}

//setter and getter implementation

    //Name
    void Employee::setName(string& name){
        this->name=name;
    }
    string Employee::getName() const{
        return name;
    }

    //password
    void Employee:: setPassword(string& password){
        this->password=password;
    }
    string getPassword() const{
        return password;
    }

    //id
    void setId(int id){
        this->id=id;
    }
    int getId() const{
        return id;
    }

    //salary
    void setSalary(string& name){
        this->name=name;
    }
    float getSalary() const{
        return salary;
    }
    
    
    //Employee Methods

    //login
    bool login(string password ,int id){
        return (this->password==password && this->id==id);
    }

    //addClient =================================================>still pending
    /*
    void addClient(Client obj){
        //assign the data to him
    }
    */

   //list all clients
   /*void listAll(){

   }*/

   //edit info for client
   /*
   void editClient(){

   }
   */

  //display Employee info
  void printEmployeeInfo(string& name,int id){
    //search about his and display his info
  }