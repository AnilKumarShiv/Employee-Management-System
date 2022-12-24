/*  ****************************************************** */
/*  ************ Employees management system ************* */
/*  ************       Project on C++        ************* */
/*  ****************************************************** */


#include<iostream>
#include<conio.h>
//#include<dos.h>
#include<windows.h>
//#include<time.h>

//namespace
using namespace std;    

// structure for data
struct emp{
    string name, id, address;
    int contact,salary;
};
emp e[100];
int total=0;

// empdata function

void empdata()
{
    int choice;
    cout<<"\n\nHow many employee data do you want to enter :";
    cin>>choice;
    
    for(int i=total; i<total+choice;i++){
        cout<<"------------------------\n";
        cout<<"Enter data of employeee"<<endl;
        cout<<"------------------------\n";
        cout<<"Employeee name: ";
        cin>>e[i].name;
        cout<<"ID: ";
        cin>>e[i].id;
        cout<<"Address: ";
        cin>>e[i].address;
        cout<<"contact: ";
        cin>>e[i].contact;
        cout<<"salary: ";
        cin>>e[i].salary;
    }
    total+=choice;
}

// show data function

void showdata()
{
     if(total!=0)
        {
             for(int i=0;i<total;i++)
             {
                cout<<"\n\t------------------------\n";
                cout<<"\tData of employee "<<i+1<<endl;
                cout<<"\t------------------------\n";
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"Employee ID: "<<e[i].id<<endl;
                cout<<"Employee Address: "<<e[i].address<<endl;
                cout<<"Employee Contact: "<<e[i].contact<<endl;
                cout<<"Employee Salary: "<<e[i].salary<<endl; 
             }
        }
     else{
           cout<<"\t\t====================\n";
           cout<<"\t\tYour Record is empty!\n";
           cout<<"\t\t====================\n\n";
         }
}

// search data function

void searchdata()
{
        string id;
        if(total!=0)
        {
            cout<<"Enter id of data which you want to search :";
            cin>>id;
            for(int i=0;i<total;i++)
            {
                if(id==e[i].id)
                {
                    cout<<"\n------------------------\n";
                    cout<<"Data of employee "<<i+1<<endl;
                    cout<<"------------------------\n";
                    cout<<"Employee Name: "<<e[i].name<<endl;
                    cout<<"Employee ID: "<<e[i].id<<endl;
                    cout<<"Employee Address: "<<e[i].address<<endl;
                    cout<<"Employee Contact: "<<e[i].contact<<endl;
                    cout<<"Employee Salary: "<<e[i].salary<<endl;
                    break; 
                }
                if(i==total-1)
                {
                    cout<<"No such record found"<<endl;
                }
            }
        }
        else
         {
           cout<<"\t\t====================\n";
           cout<<"\t\tYour Record is empty!\n";
           cout<<"\t\t====================\n\n";
         }
}

// update data function

void updatedata()
{
            
    if(total!=0)
    {
        string id;
        cout<<"Enter id of data which you want to update :";
        cin>>id;
        for(int i=0;i<total;i++)
        {
            if(id==e[i].id)
            {
                cout<<"Previous data"<<endl;
                cout<<"\n------------------------\n";
                cout<<"Data of employee: "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"Employee ID: "<<e[i].id<<endl;
                cout<<"Employee Address: "<<e[i].address<<endl;
                cout<<"Employee Contact: "<<e[i].contact<<endl;
                cout<<"Employee Salary: "<<e[i].salary<<endl;
                cout<<"\n------------------------\n";
                cout<<"Enter new data";
                cout<<"\n------------------------\n";
                cout<<"Employeee name: ";
                cin>>e[i].name;
                cout<<"ID: ";
                cin>>e[i].id;
                cout<<"Address: ";
                cin>>e[i].address;
                cout<<"contact: ";
                cin>>e[i].contact;
                cout<<"salary: ";
                cin>>e[i].salary;
                break; 
            }
     
            if(i==total-1)
            {
                 cout<<"\t\t----------------------\n";
                 cout<<"\t\tNo such record found..!"<<endl;
                cout<<"\t\t------------------------\n\n";
            }
        }

    }
    else
    {
        cout<<"\t\t====================\n";
        cout<<"\t\tYour Record is empty!\n";
        cout<<"\t\t====================\n\n";
    }

}


//delete data function

void deletedata()
{
    if(total!=0)
    {
        char userinput;
        cout<<"Press 1 for All record:"<<endl;
        cout<<"Press 2 for a specific record:"<<endl;
        userinput=getch();
        if(userinput=='1')
        {
            total=0;
            cout<<"\t\t====================\n";
            cout<<"\t\tAll record delete...!\n";
            cout<<"\t\t====================\n";
        }
        else if(userinput=='2')
        {
            string id;
            cout<<"Enter id of data which you want to delete :";
            cin>>id;
            for(int i=0;i<total;i++)
            {
                if(id==e[i].id)
                {
                    for(int j=i;j<total;j++)
                     {
                        e[j].name=e[j+1].name;
                        e[j].id=e[j+1].id;
                        e[j].address=e[j+1].address;
                        e[j].contact=e[j+1].contact;
                        e[j].salary=e[j+1].salary;
                        break;
                      }
                    if(i==total-1)
                    {
                          cout<<"\t\t----------------------\n";
                          cout<<"\t\tNo such record found..!"<<endl;
                          cout<<"\t\t------------------------\n\n";
                     }
                }
        
            }
        }
    }
    else
    {
       cout<<"\t\t====================\n";
       cout<<"\t\tYour Record is empty!\n";
       cout<<"\t\t====================\n\n";
    } 
}

// main function

int main(){
     
     string username, username1;
    int password,password1;
  //    => page no.1
    cout<<"\n\n\n\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout<<"\t************  Employee Management system ****************"<<endl;
    cout<<"\t************       Create an account     ****************"<<endl;
    cout<<"\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout<<"\n\n\t\t\tsign Up"<<endl;
    cout<<"\n\tEnter Username :";
    cin>>username;
    cout<<"\n\tCreate Password :";
    cin>>password;
    cout<<"\nYour Id is creating, Please wait..";

    for(int i=1;i<=5;i++)
      {
        cout<<".";
        Sleep(300);
      }

    cout<<"\n\nYour id is created successfully !!";
    Sleep(1000);

    system("cls");

    // => page no.2
    logout :
    cout<<"\n\n\n\t*************************************************************"<<endl;
    cout<<"\t-----------------  Employee Management system  --------------"<<endl;
    cout<<"\t*************************************************************"<<endl;
    loginagain:
    
    cout<<"\n\t\t\tEnter Username :";
    cin>>username1;
    //loginagainpassword :
    cout<<"\n\t\t\tEnter Password :";
    cin>>password1;
     
      if(username==username1 && password==password1)
       {
          system("cls");
          char userchoice;
          cout<<"\t================\n";
          cout<<"\t DATA INTERFACE\n";
          cout<<"\t================\n\n";
          cout<<"------ Press any one given follow operation ------\n";
          
           while(1)
           {
                cout<<"\t************************"<<endl;
                cout<<"\tPress 1  Enter data "<<endl;
                cout<<"\tPress 2  Show data "<<endl;
                cout<<"\tPress 3  Search data "<<endl;
                cout<<"\tPress 4  Update data "<<endl;
                cout<<"\tPress 5  Delete data "<<endl;
                cout<<"\tPress 6  Logout "<<endl;
                cout<<"\t************************"<<endl;
                //cout<<"\tPress 7  Exit "<<endl;
                //cout<<"Enter:";
                userchoice=getch();

                switch(userchoice)
                    {
                        case '1':  empdata();
                                break;
                        case '2':  showdata();
                                break;
                        case '3':  searchdata();
                                break;
                        case '4':  updatedata();
                                break;
                        case '5':  deletedata();
                                break;
                        case '6':  goto logout;
                                break;
                        default :  cout<<"\aInvalid input..\n";
                                break;
                    }
            }
       }
      else if(username!=username1 || password!=password1)
           {
                cout<<"Username or password incorrect, Please tyr again..\n";
                Sleep(2000);
                goto  loginagain;
            }
    //   else if(password!=password1)
    //        {
    //             cout<<"Password incorrect.";
    //             Sleep(2000);
    //             goto  loginagainpassword;
    //         }
    //   else
    //   {
    //     cout<<"Incorrect username and password..!";
    //     goto tryagain;
    //   }
return 0;
}