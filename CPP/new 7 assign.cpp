#include<iostream>
#include<string>
using namespace std;

struct Car
{
    string rNo;
    Car* next;
    
};

struct Scooter
{
    string rNo;
    Scooter* next;
};

class Lane
{
    Car *cL1,*cL2,*cR1,*cR2;
    int noC1,noC2;
    Scooter *s1,*s2;
    int noS1,noS2;

    
    public:
    Lane()
    {
        cL1=cL2=cR1=cR2=NULL;
        s1=s2=NULL;
        noC1=noC2=0;
        noS1=noS2=0;
    }
    void getCar();
    void removeCar();
    void displayCar();

    void getScooter();
    void removeScooter();
    void displayScooter();


};

void Lane::getCar()
{
    if(noC1==10&&noC2==10)
    {
        cout<<"\nEach parking lane is full";
        return ;
    }

    string reg;
    cout<<"\nEnter the registration number of the car:\t";
    cin>>reg;

    cout<<noC1<<"\t"<<noC2;

    if(noC1<=noC2)
    {
        

        Car* node=new Car;
        node->rNo=reg;
        node->next=NULL;
        if(cR1==NULL)
        {
            cR1=cL1=node;
        }
        else
        {
            cR1->next=node;

            cR1=node;
        }
        noC1++;
    }
    else
    {
        Car* node=new Car;
        node->rNo=reg;
        node->next=NULL;
        if(cR2==NULL)
        {
            cR2=cL2=node;
        }
        else
        {
            cR2->next=node;
            cR2=node;
        }
        noC2++;
    }

}

void Lane::removeCar()
{
    cout<<"\nFrom which Lane you want to exit the Car:\t";
    int lane;
    cin>>lane;
    Car* temp;

    switch(lane)
    {
        case 1: if(cL1==NULL)
                {
                    cout<<"\nLane is already empty!!!";
                    return;
                }
                temp=cL1;
                cL1=cL1->next;
                delete temp;
                noC1--;
                cout<<"\nCar removed from the lane!!";
                break;

        case 2: if(cL2==NULL)
                {
                    cout<<"\nLane is already empty!!!";
                    return ;
                }
                temp=cL2;
                cL2=cL2->next;
                delete temp;
                noC2--;
                cout<<"\nCar removed from the lane!!";
                break;

        default:cout<<"\nWrong choice entered!!";
                break;

    }
}

void Lane::displayCar()
{
    Car* ptr;
    cout<<"\nLane 1\n";
    
    if(cL1==NULL)
    cout<<"\nEMPTY\n\n";
    else
    {
        ptr=cL1;
        while(ptr!=NULL)
        {
            cout<<ptr->rNo<<"<-";
            ptr=ptr->next;
        }
    }
    cout<<"\nLane 2\n";

    if(cL2==NULL)
    cout<<"\nEMPTY\n\n";
    else
    {
        ptr=cL2;
        while(ptr!=NULL)
        {
            cout<<ptr->rNo<<"<-";
            ptr=ptr->next;
        }
    }
    cout<<endl;
}

void Lane:: getScooter()
{
    if(noS1==10&&noS2==10)
    {
        cout<<"\nLanes are full!!";
        return ;
    }
    Scooter *ptr;
    string reg;
    cout<<"\nEnter the registration number of the scooter:\t";
    cin>>reg;
    Scooter *node=new Scooter;
        node->rNo=reg;
        node->next=NULL;
    if(noS1<=noS2)
    {
        
        if(s1==NULL)
        s1=node;
        else
        {
            ptr=s1;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=node;
        }
        noS1++;
    }
    else
    {
        if(s2==NULL)
        s2=node;
        else
        {
            ptr=s2;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=node;
        }
        noS2++;
    }
    cout<<"\nScooter enterd into the lane!!!\n";
}

void Lane::removeScooter()
{
    cout<<"\nEnter the registration number of the scooter:\t";
    string reg;
    cin>>reg;

    Scooter* prev=NULL;
    Scooter* ptr;

    ptr=s1;
    while(ptr!=NULL)
    {
        if(ptr->rNo==reg)
        {
            if(prev==NULL)
            {
                s1=ptr->next;
                delete ptr;
                cout<<"\nScooter removed from the lane 1\n";
                noS1--;
                return;
            }
            else
            {
                prev->next=ptr->next;
                delete ptr;
                cout<<"\nScooter removed from the lane 1\n";
                noS1--;
                return;
            }
        }
        prev=ptr;
        ptr=ptr->next;
    }

    ptr=s2;
    while(ptr!=NULL)
    {
        if(ptr->rNo==reg)
        {
            if(prev==NULL)
            {
                s2=ptr->next;
                delete ptr;
                cout<<"\nScooter removed from the lane 2\n";
                noS2--;
                return;
            }
            else
            {
                prev->next=ptr->next;
                delete ptr;
                cout<<"\nScooter removed from the lane 2\n";
                noS2--;
                return;
            }
        }
        prev=ptr;
        ptr=ptr->next;
    }

    cout<<"\nNo scooter found with registration number \t"<<reg;
  
}

void Lane::displayScooter()
{
    Scooter* ptr;
    cout<<"\nLane 1\n";
    
    if(s1==NULL)
    cout<<"\nEMPTY\n\n";
    else
    {
        ptr=s1;
        while(ptr!=NULL)
        {
            cout<<ptr->rNo<<"<-";
            ptr=ptr->next;
        }
    }
    cout<<"\nLane 2\n";

    if(s2==NULL)
    cout<<"\nEMPTY\n\n";
    else
    {
        ptr=s2;
        while(ptr!=NULL)
        {
            cout<<ptr->rNo<<"<-";
            ptr=ptr->next;
        }
    }
}

int main()
{
    int choice;
    Lane obj;
    do
    {
        cout<<"\nMENU\n\n1. Enter Car\n2. Enter Scooter\n3. Remove Car\n4. Remove Scooter\n5. Display Cars\n6. Display Scooters\n\n7. Enter your choice.....";
        cin>>choice;
        switch(choice)
        {
            case 1: obj.getCar();
                    break;
            case 2: obj.getScooter();
                    break;
            case 3: obj.removeCar();
                    break;
            case 4: obj.removeScooter();
                    break;
            case 5: obj.displayCar();
                    break;
            case 6: obj.displayScooter();
                    break;
            default: cout<<"\nWrong choice entered!!!";
                    break;
        }
    }while(choice!=0);
}