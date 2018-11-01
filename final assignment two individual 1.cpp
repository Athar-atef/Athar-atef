#include <iostream>
#include <string>
using namespace std;
//name:Athar Atef Hussien
//ID:20170005
/*Create a base class called Vehicle that has the manufacturer’s name (type

string), number of cylinders in the engine (type int), and owner (type Per-

son, given below). Then create a class called Truck that is derived from Vehi-

cle and has additional properties: the load capacity in tons (type double since

it may contain a fractional part) and towing capacity in pounds (type int). Be

sure your classes have a reasonable complement of constructors, accessor, and

mutator member functions, an overloaded assignment operator, and a copy

constructor. Write a driver program that tests all your member functions.
 */





class person
{
public:
    string name;//public attribute of class person
public:
    person()//empty constructor
    {
         name="no name";//put name equal "no name"
    }

    person( string theName)//parameterized constructor give parameter
    {
         name=theName;
    }
    person(const person& theObject)// copy constructor that copy the content of object in another object
    {
        name=theObject.name;//copy the content of object in another object
    }
    string get_name()const //function to return name
    {
        return name;//return the name
    }
    person& operator=(const person& rtside)//operator overloading equal put content of object in another object
    {
        person a; //object of type person
        a.name=rtside.name;//put the content of object in another object
        return a;//return the object a
    }

    friend istream& operator>>(istream& input,person& personObject);//friend function istream
    friend ostream& operator<<(ostream& output,person personObject);//friend function ostream

};

istream& operator>>(istream& input,person& personObject)//friend function istream to input data
{
    input>> personObject.name;//enter the name
    return input;//return input
}
ostream& operator<<(ostream& output,person personObject)//friend function ostream to input data
{
    output<<personObject.name<<endl;//print the name
    return output;//return output
}


class vehicle
{
protected:
    string manfactureName;//attribute of class vehicle of data type string
    int numberOfcylinders;//attribute of class vehicle of data type int
    person owner;//attribute of class vehicle object of class person
public:


    vehicle()//empty constructor
    {
         manfactureName="no name";//put manfacture name equal no name
        numberOfcylinders=0;//put number of cylinders equal zero
       owner=person("no name");//put owner equal no name
    }
    vehicle(string m,int cyl,person p)//parameterized constructor
    {
        manfactureName=m;//put manfacture name equal m
        numberOfcylinders=cyl;//put number of cylinders equal cyl
        owner.name=p.name;//put owner name equal p
    }
    vehicle(const vehicle& theObject)//copy constructor
    {
        manfactureName=theObject.manfactureName;//copy the content of object in manfacture name
        numberOfcylinders=theObject.numberOfcylinders;//copy the content of object in number of cylinders
        owner.name=theObject.owner.name;//copy the content of object in owner name
    }
    string getmanfacturer()const //string function that return manfacture name
    {
        return manfactureName;//return manfacture name
    }
    int getCylinders()const//int function return number of cylinders
    {
        return numberOfcylinders;//return number of cylinders
    }
    person getOwner()//function return object owner
    {
        return owner;//return object owner
    }
    void setManfacturer(string maker)//void function that take parameter string maker
    {
        manfactureName=maker;//set manfacture name equal maker
    }
    void setCylinders(int cylinders)//void function that take parameter int cylinders
    {
        numberOfcylinders=cylinders;//set number of cylinders equal cylinders
    }

    void setOwner(person p)//void function that take parameter object person p
    {
        owner.name=p.name;//set owner name equal p
    }
    vehicle& operator=(const vehicle& rtside){//operator overloading equal
        vehicle b;
        b.manfactureName=rtside.manfactureName;//put  b.manfactureName=rtside.manfactureName
        b.numberOfcylinders=rtside.numberOfcylinders;// put b.numberOfcylinders=rtside.numberOfcylinders
        b.owner.name=rtside.owner.name;// put b.owner.name=rtside.owner.name
        return b;//return object b
    }
    void print()//void function to print data
    {
        cout<<manfactureName<<endl;//print manfacture name
        cout<<numberOfcylinders<<endl;//print number of cylinders
        cout<<owner<<endl;//print object owner

        }
};
class truck : public vehicle//truck class that inherit from vehicle class
{
private:
    double loadCapacity;//attribute of class truck double loadCapacity
    int towingCapacity;//attribute of class truck int towingCapacity
public:
    truck()// empty constructor
    {
        string manfactureName("no name");//put manfacture name equal no name
        numberOfcylinders=0;// put number of cylinders equal zero
        person owner ("no name");//put owner equal no name
        loadCapacity=0;//put load capacity equal zero
        towingCapacity=0;//put towing capacity equal zero
    }
    truck(string m,int cyl, person p,double load,int tow)//parameterized constructor
    {
        manfactureName=m;//put manfacture name eqyal m
        numberOfcylinders=cyl;//put number of cylinders equal cyl
        owner.name=p.name;//put owner name equal p
        loadCapacity=load;//put load capacity equal load
        towingCapacity=tow;//put towing capacity equal tow
    }
    truck (const truck& theObject)//copy constructor
    {
        manfactureName=theObject.manfactureName;//copy the content of object in manfacture name
        numberOfcylinders=theObject.numberOfcylinders;//copy the content of object in number of cylinders
        owner.name=theObject.owner.name;//copy the content of object in owner name
        loadCapacity=theObject.loadCapacity;//copy the content of object in load capacity
        towingCapacity=theObject.towingCapacity;//copy the content of object in towing capacity
    }
    double get_loadCapacity()const//double function to get load capacity
    {
        return(loadCapacity);//return load capacity
    }
    int get_towingCapacity()const//int function to get towing capacity
    {
        return(towingCapacity);//return towing capacity
    }
    void set_loadCapacity(double load)//void function that take parameter double load
    {
        loadCapacity=load;//put load capacity equal load
    }
    void set_towingCapacity(int tow)//void function that take parameter int row
    {
        towingCapacity=tow;//put towing capacity equal tow
    }

    truck& operator=(const truck& rtside){//operator overloading equal
         truck c; //object c
        c.manfactureName=rtside.manfactureName;//put c.manfactureName=rtside.manfactureName
        c.numberOfcylinders=rtside.numberOfcylinders;//put c.numberOfcylinders=rtside.numberOfcylinders
        c.owner.name=rtside.owner.name;//put c.owner.name=rtside.owner.name
        c.loadCapacity=rtside.loadCapacity;//put c.loadCapacity=rtside.loadCapacity
        c,towingCapacity=rtside.towingCapacity;//put c,towingCapacity=rtside.towingCapacity
        return c; //return object c


    }
    void printing()//void function to print data
    {
        cout<<manfactureName<<endl;//print manfacture name
        cout<<numberOfcylinders<<endl;//print number of cylinders
        cout<<owner<<endl; //print object owner
        cout<<loadCapacity<<endl;//print load capacity
        cout<<towingCapacity<<endl;//print towing capacity

    }

};

int main()
{
     person ob2, ob3("mohamed");
     cin>>ob2;
     cout<<"\n u write an input\n";
     person h(ob3);
     //cout<<h<<endl;
     vehicle ob , ob1("ahmed",10,ob3);
     vehicle l(ob1);
     cout<<"this l print: \n";
     l.print();
     ob.setCylinders(10);
     ob.setManfacturer("ahmed");
     ob.setOwner(ob3 );
     cout<<"this is manfacteur getter: "<<ob.getmanfacturer()<<endl;
     cout<<"this is cylindars getter: "<<ob.getCylinders()<<endl;
    cout<<"\nthis is person 3 :"<<ob3<<endl;
     cout<<"this is owner getter: "<<ob.getOwner()<<endl;
     cout<<"\nthis is ob print : \n";
     ob.print();

     cout<<"\nthis is ob1 print : \n";
     ob1.print();
      truck ob4,ob5("ahmed",10,ob3,25,20);
     truck k(ob5);
     cout<<"\nthis is k truck print : \n";
     k.printing();
     ob4.set_loadCapacity(25);
     ob4.set_towingCapacity(20);
     cout<<"this is loadcap getter: "<<ob4.get_loadCapacity()<<endl;
     cout<<"this is towcap : "<<ob4.get_towingCapacity()<<endl;
     cout<<"this person out of truck class : "<<ob4.getOwner()<<endl;
     cout<<"\nthis is op4 truck print : \n";
     ob4.printing();
     cout<<"\nthis is ob5 truck print : \n";
     ob5.printing();

    return 0;
}
