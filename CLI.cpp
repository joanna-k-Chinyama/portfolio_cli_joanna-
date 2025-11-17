#include<iostream>
using namespace std;
void aboutMe();
void skillsToLearn();
void myProjects();
void futurePlans();
void exist();

   int choice;
int main(){
   do
   {cout<<"\n================================\n";
    cout<<"My Portfolio App\n" ; 
    cout<<"================================\n";  
    cout<<"1.About me\n";
    cout<<"2.skills i want to learn\n";
    cout<<"3.my projects\n";
    cout<<"4.my futue plans\n";
    cout<<"5. exict\n";
    cout<<"enter your choice\n";
    cin>>choice;
    
    if (!cin) {               
    cin.clear();               
    cin.ignore(1000, '\n');     
    cout << "Invalid input! Please enter a valid option NUMBER.\n";
    continue; }     
    
    if(choice == 1){
        aboutMe();
    }else if (choice == 2)
    {
        skillsToLearn(); 
    }else if( choice == 3){
        myProjects();
    }
    else if(choice == 4 ){
        futurePlans();
    }
    else if (choice == 5){
        exist();
    }

    else if(choice !=1 || choice !=2  || choice !=3 || choice !=4  ){
        cout<<"invalid  input must be an existing option number  \n";
        
    }
    
    
    } while (choice != 5);
     
    return 0;
}

void aboutMe(){
    cout<<"\n---About Me---\n";
    cout<<" I'm Joanna Kuunda Chinyama, a second year computer science student at the copperbelt university.";
    cout<<" I'm a young leader passionate about technology and innovation with my area of interest being Artificial intelligene and software development.\n\n";
            
}

void skillsToLearn(){
    cout<<"\n ---skills i want to learn\n---";
    cout<<"1. programming skills\n";
    cout<<"2. machine learning and AI skill(AI frameworks, neural netsworks, model taining and evaluation, datasets etc)\n";
    cout<<"3. software engineering skills\n";
    cout<<"4. mathematics and logic\n\n";
         
}

void myProjects(){
    cout<<"\n ---project ive worked on---\n";
    cout<<"1. chatbot\n";
    cout<<"2. booking website\n";
    cout<<"3. letstalktech website\n";
    cout<<"4. basic arduino robotics car control system\n";
    cout<<"5. /calculator\n\n";
       
}

void futurePlans(){
    cout<<"\n ---My Future Plans---\n";
    cout<<"1. master the art of programming\n";
    cout<<"2. create intelligent systems\n";
    cout<<"3. develop software applications\n";
    cout<<"4. create and train AI systems\n\n";  
        
}

void exist(){
    cin.clear();
    cout<<"you have exited";

}
